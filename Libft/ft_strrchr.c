/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:43:23 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/15 14:36:28 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			res = s + i;
		i++;
	}
	return (res);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
    // Storing it in string array
    char string[] = "Geeks for Geeks";
  
    // The character we've to search for
    char character = 'k';
  
    // Storing in a pointer ptr
    char* ptr = strrchr(string, character);
    printf("%c\n", *ptr);
    ptr = ft_strrchr(string, character);
    printf("%c\n", *ptr);
    return 0;
}*/
