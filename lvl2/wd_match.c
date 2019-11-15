/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:25:12 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 16:05:30 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str, char *charset)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (*charset != '\0' && *charset != str[i])
			charset++;
		if (*charset == '\0')
			return;
		i++;
		charset++;
	}
	write(1, str, 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}