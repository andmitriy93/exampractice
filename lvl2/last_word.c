/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:31 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/15 17:35:39 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void    last_word(char *str)
// {
//     int i;
//     int j;

//     i = 0;
//     j = 0;
//     while (str[i])
//     {
//         if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
//             j = i + 1;
//         i++;
//     }
//     while (str[j] >= 33 && str[j] <= 127)
//     {
//         write(1, &str[j], 1);
//         j++;
//     }
// }

// int     main(int ac, char **av)
// {
//     if (ac == 2)
//         last_word(av[1]);
//     write(1, "\n", 1);
//     return (0);
// }


#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char *lw;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] < 32 && av[1][i + 1] > 32)
				lw = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}