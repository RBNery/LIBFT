/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:15 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/15 14:22:17 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(dst);
	b = 0;
	if (size <= ft_strlen(dst))
		return (a + size);
	while (src[0] != '\0' && (a + 1) < size)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return ;
}	
