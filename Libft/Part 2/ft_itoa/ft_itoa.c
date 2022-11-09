/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:42 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/09 13:57:55 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int i)
{
        int     len;
        int     aux;
        char    *res;

        len = 2;
        aux = i;
        while (aux > 9)
        {
                aux = aux / 10;
                len++;
        }
        res = (char *)malloc(sizeof(char) * len);;
        len--;
        res[len] = '\0';
        len--;
        while (i > 0)
        {
                res[len] = (i % 10) + 48;
                i = i / 10;
                len--;
        }
        return (res);
}

int main()
{
        int     a = 123;
        char    *b;

        b = ft_itoa(a);
        printf("%s", b);
}


