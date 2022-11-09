/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:50:54 by rbatisti          #+#    #+#             */
/*   Updated: 2022/10/10 13:51:35 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	tamanho(char **strs, int size)
{
	int	i;
	int	j;
	int	tam;

	i = 0;
	tam = 0;
	while (i < size)
	{
	j = 0;
		while (strs[i][j] != '\0')
		{
			tam = tam + 1;
			j++;
		}
		i++;
	}
	return (tam);
}

void	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tam;
	int		tsep;
	char	*res;

	fi (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	while (sep[i] != '\0')
		i++;
	tsep = i * (size - 1);
	i = 0;
	tam = tamanho(strs, size);
	res = malloc((tam + tsep) * sizeof(char) + 1);
	if (!res = 0)
		return (0);
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*int    main(void)
{
   
    char    **strs;
    char    *sep;
    char    *result;
    int    size;
    

    size = 3;
    strs = (char **)malloc(3 * sizeof(char *));
    strs[0] = (char *)malloc(sizeof(char) * 7 + 1);
    strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
    strs[2] = (char *)malloc(sizeof(char) * 4 + 1);
    strs[0] = "rodolfo";
    strs[1] = "batisti";
    strs[2] = "nery";
    sep = "/ /";
    printf("%s", ft_strjoin(size, strs, sep));
    
}*/
