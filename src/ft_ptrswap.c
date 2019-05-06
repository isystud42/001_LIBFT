/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 11:19:08 by idsy              #+#    #+#             */
/*   Updated: 2019/05/06 10:17:38 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Gimme 2 adresses of memomry zones, i will swap them out. Better than ft_swap
*/

void	ft_ptrswap(void **ptr1, void **ptr2)
{
	void	*tmp;

	if (ptr1 && ptr2)
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
	}
}
