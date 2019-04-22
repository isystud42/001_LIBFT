/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 11:20:52 by idsy              #+#    #+#             */
/*   Updated: 2019/04/22 13:00:04 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*ss1;
	char	*ss2;

	if (n == 0)
		return (1);
	if (!(s1 && s2))
		return (2);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (*ss1 && *ss1 == *ss2 && ((n--) - 1 > 0))
	{
		ss1++;
		ss2++;
	}
	if (*ss1 != *ss2)
		return (0);
	return (1);
}
