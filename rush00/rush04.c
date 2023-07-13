/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AECA <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:53:08 by AECA              #+#    #+#             */
/*   Updated: 2023/06/25 20:46:33 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
/*function declaration for ft_putchar*/
void	make_x(int max_x, char a, char b, char c);
//function declaration for make_y bc its below rush01

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (x < 1 || y < 1)
		return ;
	while (j < y)
	{
		if (j == 0)
			make_x(x, 'A', 'B', 'C');
		else
		{
			if (j == y - 1)
				make_x(x, 'C', 'B', 'A');
			else
				make_x(x, 'B', ' ', 'B');
		}
		j++;
	}
}

void	make_x(int max_x, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < max_x)
	{
		if (i == 0)
			ft_putchar(a);
		else
		{
			if (i == max_x - 1)
				ft_putchar(c);
			else
				ft_putchar(b);
		}
		i++;
	}
	ft_putchar('\n');
}
