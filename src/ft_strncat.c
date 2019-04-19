/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:55:33 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 12:40:40 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tmp;
	char	*ssrc;

	tmp = dest;
	ssrc = (char *)src;
	while (*tmp)
		tmp++;
	while (*ssrc && n--)
		*tmp++ = *ssrc++;
	*tmp = '\0';
	return (dest);
}
