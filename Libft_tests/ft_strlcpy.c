/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:19:48 by clu               #+#    #+#             */
/*   Updated: 2024/11/01 11:52:31 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t size)
{
	t_size_t	src_len;
	t_size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

#include <stdio.h>
// Test for ft_strlcpy
int	main(void)
{
	char	src[20] = "Hello, World!";
	char	dest[10];
	t_size_t	result;

	result = ft_strlcpy(dest, src, 8);
	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dest);
	printf("Result: %ld\n", result);
	return (0);
}