/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbatisti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:58:10 by rbatisti          #+#    #+#             */
/*   Updated: 2022/11/02 15:28:51 by rbatisti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int a)
{
	if ((a > 64 && a < 91) || (a < 123 && a > 96) || (a > 47 && a < 58))
		return (8);
	else
		return (0);
}

int	main()
{
	char	a = '2';
	int	b = 1;
	printf("%d", ft_isalnum(a));
	printf("\n%d", isalnum(a));
	return (0);
}
