/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:49:55 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/30 02:27:18 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	src = (char *)src;

	i = 0;
	j = 0;
	l = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	k = i;
	if (size <= i)
		return (j + size);
	while ((l < (size - 1 - i)) && (src[l]))
		dest[k++] = src[l++];
	dest[k] = '\0';
	return (i + j);
}
