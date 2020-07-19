/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debbie <debbie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:42:20 by syoo              #+#    #+#             */
/*   Updated: 2020/07/19 17:52:47 by debbie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_positive(int nb)
{
	char 	convert[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		convert[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i >= 0)
	{
		i--;
		write(1, &convert[i], 1);
	}
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		ft_positive(nb);
	}
	else
		ft_positive(nb);
}
