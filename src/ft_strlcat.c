/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:58:30 by idsy              #+#    #+#             */
/*   Updated: 2019/04/15 18:03:45 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t len;
	size_t j;

	len = 0;
	j = 0;
	while (dst[len])
		len++;
	if (size <= len + 1)
		return (size + ft_strlen(src));
	while (len + j < size - 1)
	{
		dst[len + j] = src[j];
		j++;
	}
	dst[len + j] = '\0';
	return (len + ft_strlen(src));
}
