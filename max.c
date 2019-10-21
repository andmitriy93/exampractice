/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:58 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/25 17:43:42 by an.dmitriy9      ###   ########.fr       */
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
    return (max)
}