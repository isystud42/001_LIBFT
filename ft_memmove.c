/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 11:31:25 by idsy              #+#    #+#             */
/*   Updated: 2019/04/16 13:23:08 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (n--)
			*((char*)dest + n) = *((char*)src + n);
	}
	return (dest);
}
