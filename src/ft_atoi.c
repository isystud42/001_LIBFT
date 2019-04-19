/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 10:15:05 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 12:05:51 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *nptr)
{
	int		result;
	int		is_neg;
	char	*foo;

	result = 0;
	is_neg = 1;
	foo = (char *)nptr;
	while (*foo == ' ' || *foo == '\t' || *foo == '\n' ||
				*foo == '\r' || *foo == '\v' || *foo == '\f' ||
				(*foo == '+' && (*(foo + 1) >= '0' && *(foo + 1) <= '9')))
		foo++;
	if (*foo == '-' && (*(foo + 1) >= '0' && *(foo + 1) <= '9'))
	{
		foo++;
		is_neg = -1;
	}
	while (*foo >= '0' && *foo <= '9')
		result = result * 10 + (*foo++ - '0');
	return (result * is_neg);
}
