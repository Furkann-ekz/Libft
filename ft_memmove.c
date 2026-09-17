/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:19:23 by fekiz             #+#    #+#             */
/*   Updated: 2026/09/17 14:06:07 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	else
	{
		i = -1;
		while (++i < n)
			((char *)dst)[i] = ((char *)src)[i];
	}
	return (dst);
}
