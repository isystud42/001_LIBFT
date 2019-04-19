/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:19:19 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 12:07:57 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*cpy;

	len = ft_strlen(s);
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	cpy = ft_strcpy(cpy, s);
	cpy[len] = '\0';
	return (cpy);
}
