/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:48 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 10:49:42 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i])
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}