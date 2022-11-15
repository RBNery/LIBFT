/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:23:43 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/15 15:15:59 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	i = ft_strlen;
	while (ft_strchr(set, s1[i]) && i > 0)
		i--;
	res = (char *)malloc(i + 1);
	if (!res)
		return (0);
	while (j < ft_strlen(s1) && k < i + 1)
		res[k++] = s1[j++];
	res[k] = '\0';
	return (res);
}
