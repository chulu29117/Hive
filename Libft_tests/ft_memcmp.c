/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:34:07 by clu               #+#    #+#             */
/*   Updated: 2024/11/01 11:51:29 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	t_size_t		i;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
// Test for ft_memcmp
int	main(void)
{
	char		*str1 = "Hello, World!";
	char		*str2 = "World!";
	t_size_t	n = 13;

	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
	return (0);
}