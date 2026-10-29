/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:35:23 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/18 15:35:23 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_string_length(char const *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

static int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_trim_bounds(char const *s, char const *set, size_t *start,
		size_t *end)
{
	*start = 0;
	*end = ft_string_length(s);
	while (*start < *end && ft_in_set(s[*start], set))
		(*start)++;
	while (*end > *start && ft_in_set(s[*end - 1], set))
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s1 == NULL)
		s1 = "";
	if (set == NULL)
		set = "";
	ft_trim_bounds(s1, set, &start, &end);
	trimmed = malloc(end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
