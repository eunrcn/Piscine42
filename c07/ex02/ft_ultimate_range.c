/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:56:00 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/10 17:13:25 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = (int *)malloc(length * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (length);
}
