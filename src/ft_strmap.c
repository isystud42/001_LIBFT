/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 10:52:39 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 10:45:54 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*map;
	char	*ss;

	ss = s;
	len = ft_strlen(ss);
	if (!(map = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*ss)
		*map++ = f(*ss++);
	*map = '\0';
	return (map);
}
