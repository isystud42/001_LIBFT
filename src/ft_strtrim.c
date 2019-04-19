/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 11:50:53 by idsy              #+#    #+#             */
/*   Updated: 2019/04/19 10:45:40 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = (ft_strlen(s) - 1);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (!s[i])
		return ("");
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	return (ft_strsub(s, i, (len - i + 1)));
}
