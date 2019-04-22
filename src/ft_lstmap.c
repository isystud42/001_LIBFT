/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:38:55 by idsy              #+#    #+#             */
/*   Updated: 2019/04/22 12:47:03 by idsy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*ret;

	new_lst = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!new_lst)
		{
			new_lst = ft_lstnew(tmp->content, tmp->content_size);
			ret = new_lst;
		}
		else
		{
			new_lst->next = ft_lstnew(tmp->content, tmp->content_size);
			new_lst = new_lst->next;
		}
		lst = lst->next;
	}
	return (ret);
}
