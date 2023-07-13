/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:40:21 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/06 15:54:52 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	count;

	count = 1;
	while (nb > 0)
	{
		count *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (count);
}
