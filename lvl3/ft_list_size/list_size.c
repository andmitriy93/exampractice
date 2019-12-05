/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:35:06 by dmian             #+#    #+#             */
/*   Updated: 2019/11/25 16:39:53 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int size = 0;

    while (begin_list != NULL)
    {
        begin_list = begin_list->next;
        size++;
    }
    return (size);
}