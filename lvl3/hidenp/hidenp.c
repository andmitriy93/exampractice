/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 10:23:07 by dmian             #+#    #+#             */
/*   Updated: 2019/11/27 12:40:42 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    count++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (av[1][count] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}

// собственный вариант
#include <unistd.h>

int		main(int ac, char **av)
{
	int i = 0;
	int flag;
	int j = 0;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] && av[2][j])
	{
		flag = 0;
		if (av[1][i] == av[2][j])
		{
			flag = 1;
			i++;
		}
		j++;
	}
	if (av[1][i] == '\0')
		flag = 1;
	if (flag)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}
