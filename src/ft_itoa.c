/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:36:06 by idsy              #+#    #+#             */
/*   Updated: 2019/04/22 10:34:03 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_len(long n)
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

static	char	*itoa_zero(void)
{
	char	*ret;

	if (!(ret = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

static	char	*itoa_negative(char *tab, int len, long n)
{
	n *= -1;
	tab[0] = '-';
	tab[len] = '\0';
	while (n >= 1)
	{
		tab[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (tab);
}

/*
**	Le (+48) permet de transfere un chiffre a son correspondant ascii
*/

char			*ft_itoa(int n)
{
	char	*tab;
	int		len;

	if (n == 0)
		return (itoa_zero());
	len = count_len(n);
	if (!(tab = malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab[len] = '\0';
	itoa_negative(tab, len, n);
	while (n >= 1)
	{
		tab[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (tab);
}
