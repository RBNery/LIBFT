/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:46:20 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/02 14:53:34 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int a)
{
	if (a > 48 && a < 57)
		return (2048);
	else
		return (0);
}

int	main()
{
	char	a = 'a';
	printf("%d\n", ft_isdigit(a));
	printf("%d", isdigit(a));
	return (0);
}
