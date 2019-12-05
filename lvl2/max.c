/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:58 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/21 20:54:51 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     max(int* tab, unsigned int len)
{
    int             max;
    unsigned int    i;

    if (len == 0)
        return (0);
    i = 1;
    max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}
