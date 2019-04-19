/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 11:10:05 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 10:46:54 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*mapi;
	char	*ss;

	ss = s;
	len = ft_strlen(ss);
	if (!(mapi = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (*ss)
		*mapi++ = f(len++, *ss++);
	*mapi = '\0';
	return (mapi);
}
