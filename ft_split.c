/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekiz <fekiz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:11:26 by fekiz             #+#    #+#             */
/*   Updated: 2026/09/17 16:45:33 by fekiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *str, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_string(char const *s, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	if (!s || end <= start)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static void	*free_split(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
	return (NULL);
}

static size_t	get_start_end(char const *s, char c, int flag, size_t start)
{
	size_t	end;

	end = 0;
	if (flag == 0)
	{
		while (s[start] && s[start] == c)
			start++;
		return (start);
	}
	end = start;
	while (s[end] && s[end] != c)
		end++;
	return (end);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)ft_calloc(sizeof(char *), (word_len(s, c) + 1));
	if (!str)
		return (NULL);
	start = 0;
	i = 0;
	while (s[start])
	{
		start = get_start_end(s, c, 0, start);
		end = get_start_end(s, c, 1, start);
		if (start < end)
		{
			str[i] = get_string(s, start, end);
			if (str[i++] == NULL)
				return (free_split(str));
		}
		start = end;
	}
	return (str);
}
