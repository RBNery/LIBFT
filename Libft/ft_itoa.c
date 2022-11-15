/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:12:07 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/15 14:12:08 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	len;

	num = n;
	len = 2;
	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	res = (char *)malloc(sizeof(char) * len);
	len--;
	res[len] = '\0';
	len--;
	while (n > 0)
	{
		res[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (res);
}
