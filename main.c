/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:28:56 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/29 11:29:03 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#include "libft.h"

static void	ft_memmove_copy(const unsigned char *s, unsigned char *d,
		size_t n)
{
	size_t	i;

	i = 0;
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	if (d == s)
		return (d);
	ft_memmove_copy(s, d, n);
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "hello";  // str IS a pointer (8 bytes on 64-bit)
    // sizeof(str) ;          // 8
    // str = "bye";          // ✓ reassigns the pointer 
    printf("%p", str);  
}