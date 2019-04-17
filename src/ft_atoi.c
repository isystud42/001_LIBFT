/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 10:15:05 by idsy              #+#    #+#             */
/*   Updated: 2019/04/17 10:36:08 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *nptr)
{
	int		result;
	int		is_neg;

	result = 0;
	is_neg = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' ||
				*nptr == '\r' || *nptr == '\v' || *nptr == '\f' ||
				(*nptr == '+' && (*(nptr + 1) >= '0' && *(nptr + 1) <= '9')))
		nptr++;
	if (*nptr == '-' && (*(nptr+ 1) >= '0' && * (nptr + 1) <= '9'))
	{
		nptr++;
		is_neg = -1;
	}
	while (*nptr >= '0' && *nptr <= '9')
		result = result * 10 + (*nptr++ - '0');
	return (result * is_neg);
}
