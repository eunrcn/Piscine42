/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:10:17 by ekoh              #+#    #+#             */
/*   Updated: 2023/06/26 16:13:01 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int h, int t, int o)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(o);
}

void	ft_print_comb(void)
{
	int	h;
	int	t;
	int	o;

	for (int h = '0' ; h < ('7' + 1); h++)
	{
		for (int t = h + 1 ; t < ('8' + 1); t++)
		{
			for (int o = t + 1; o < ('9' + 1); o++)
			{
				ft_putint(h, t, o);
				if (h < '7')
					ft_putchar(',');
					ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
