/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:07:32 by idsy              #+#    #+#             */
/*   Updated: 2019/04/16 13:18:00 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;

	src = s;
	while (*src)
		src++;
	while (src != s && ((int)*src) != c)
		src--;
	if (((int)*src) == c)
		return (src);
	return (NULL);
}
