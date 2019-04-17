/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 11:36:38 by idsy              #+#    #+#             */
/*   Updated: 2019/04/17 11:57:51 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	size_t		len;
	char	*join;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	len = ft_strlen(ss1) + ft_strlen(ss2);
	if (!(join = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*ss1)
		*join++ = *ss1++;
	while (*ss2)
		*join++ = *ss2++;
	*join = '\0';
	return (join - len);
}
