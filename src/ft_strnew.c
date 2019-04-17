/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:45:36 by idsy              #+#    #+#             */
/*   Updated: 2019/04/16 13:01:01 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*ptr;

	if (!(str = (char *)malloc(sizeof(char) * (++size))))
		return (NULL);
	ptr = str;
	while (size--)
		*str++ = '\0';
	return (ptr);
}
