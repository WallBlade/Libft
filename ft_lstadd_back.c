/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:30:20 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/30 21:52:21 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *back;
    
    if (!lst || !new)
        return ;
    back = *lst;
    if (!back)
    {
        *lst = new;
        return ;
    }
    while (back->next)
        back = back->next;
    back->next = new;
}