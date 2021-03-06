/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:07:36 by idsy              #+#    #+#             */
/*   Updated: 2019/04/22 11:05:49 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*ss1;
	char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (*ss1 && *ss2 && *ss1 == *ss2 && (n-- - 1))
	{
		ss1++;
		ss2++;
	}
	return ((unsigned char)*ss1 - (unsigned char)*ss2);
}
