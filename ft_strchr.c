/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:03:27 by fekiz             #+#    #+#             */
/*   Updated: 2026/09/17 13:56:58 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*x;
	int				i;

	i = 0;
	x = (unsigned char *) str;
	while (x[i])
	{
		if (x[i] == (unsigned char)c)
			return ((char *)x + i);
		i++;
	}
	if (x[i] == (unsigned char)c)
		return ((char *)x + i);
	return (NULL);
}
