/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:57:16 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/10 17:11:14 by ekoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		index;
	char	*dest;

	length = 0;
	while (src[length] != '\0')
		length++;
	dest = (char *) malloc((length + 1) * sizeof(char));
	index = 0;
	while (index <= length)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
