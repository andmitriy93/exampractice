/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:34 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/08/02 09:38:10 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *str)
{
    int nbr;
    int sign;

    nbr = 0;
    sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
    {
        sign = -1;
        nbr++;
    }
    if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        nbr = nbr * 10 + *str - 48;
        str++;
    }
    return (sign * nbr);
}