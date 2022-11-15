/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:20:55 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/15 15:17:25 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_str(char const *str, char charset)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == charset))
			i++;
		if (str[i] != '\0')
			j++;
		while (str[i] != '\0' && !((str[i] == charset)))
			i++;
	}
	return (j);
}

int	len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_word(char const *str, char charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = len(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = malloc((num_str(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	res[num_str(s, c)] = '\0';
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			res[i] = ft_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	return (res);
}

/*
 int    main()
 {
      int        i;
      char    **test;
      test = ft_split("rodolfo batisti nery", ' ');
      i = 0;
      while (test[i])
      {
                   printf("%s\n", test[i]);
                   i++;
      }
 }*/
