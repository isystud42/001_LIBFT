/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 10:52:39 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 12:58:20 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*ss;
	char	*map;
	char	*copy;

	i = 0;
	ss = (char *)s;
	while (s[i])
		i++;
	if (!(map = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	copy = map;
	while (*ss)
		*copy++ = f(*ss++);
	*copy = '\0';
	return (map);
}
