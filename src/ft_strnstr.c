/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 10:47:13 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 12:51:25 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s1, const char *s2, size_t i, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	if (s2[j] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_check(haystack, needle, i, n) == 1)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
