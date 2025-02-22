/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:42 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 10:50:09 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int     i;
    char    c;

    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                c = av[1][i] - 96;
                while (c > 0)
                {
                    write(1, &av[1][i], 1);
                    c--;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                c = av[1][i] - 64;
                while (c > 0)
                {
                    write (1, &av[1][i], 1);
                    c--;
                }
            }
            else
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}