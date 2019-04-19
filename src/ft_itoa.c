/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:36:06 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 10:50:14 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_nblen(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 1)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/*
**	Le (+48) permet de transfere un chiffre a son correspondant ascii
*/

char			*ft_itoa(int n)
{
	char	*tab;
	int		len;

	len = ft_count_len(n);
	if (!(tab = malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		tab[0] = '-';
	}
	while (n >= 1)
	{
		tab[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (tab);
}
