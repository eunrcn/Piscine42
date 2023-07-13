/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:38:19 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/11 12:11:43 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	length = max - min;
	array = malloc(length * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
