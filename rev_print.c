/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:22 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/26 13:44:18 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i])
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        write(1, &av[1][i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (0);
}