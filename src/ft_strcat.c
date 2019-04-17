/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:42:00 by idsy              #+#    #+#             */
/*   Updated: 2019/04/17 11:04:53 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*tmp;
	char	*ssrc;

	tmp = dest;
	ssrc = src;
	while (*tmp)
		tmp++;
	while (*ssrc)
	{
		*tmp = *ssrc;
		tmp++;
		ssrc++;
	}
	return (dest);
}
