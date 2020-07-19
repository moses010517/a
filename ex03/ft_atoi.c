/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoo <syoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:34:52 by syoo              #+#    #+#             */
/*   Updated: 2020/07/18 16:26:37 by syoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		convert_nb(int i, char *str)
{
	int nbr;

	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 0;
	while (!str[i])
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
	|| str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	nbr = convert_nb(i, str);
	if (sign % 2 == 1)
		nbr = -nbr;
	return (nbr);
}
