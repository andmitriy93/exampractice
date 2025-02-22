/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:25:02 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 10:50:26 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;

    if (ac != 2)
        write(1, "\n", 1);
    i = 0;
    while (av[1][i])
    {
        if (av[1][i] >= 'a' && av[1][i] <= 'z')
        {
            av[1][i] = 'z' - av[1][i] + 'a';
            write(1, &av[1][i], 1);
        }
        else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        {
            av[1][i] = 'Z' - av[1][i] + 'A';
            write(1, &av[1][i], 1);
        }
        else
            write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}