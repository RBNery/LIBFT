/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:20:52 by rbatisti          #+#    #+#             */
/*   Updated: 2022/10/10 13:33:04 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separador(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	num_str( char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && separador(str[i], charset))
			i++;
		if (str[i] != '\0')
			j++;
		while (str[i] != '\0' && !separador(str[i], charset))
			i++;
	}
	return (j);
}

int	len_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !separador(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = len_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		count;
	int		j;

	i = 0;
	j = 0;
	count = num_str(str, charset);
	strings = (char **)malloc(sizeof(char *) * (count + 1));
	strings[count] = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && separador(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !separador(*str, charset))
		str++;
	}
	return (strings);
}
/*
int    main()
{
    int        i;
    char    **test;
    test = ft_split("rodolfo  batisti2nery", " 21");
    i = 0;
    while (test[i])
    {
        printf("%s\n", test[i]);
        i++;
    }
}*/
