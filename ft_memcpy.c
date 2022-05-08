/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:58:28 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/08 19:49:12 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;

	if (!dest && !src)
		return (NULL);
	d_cpy = (unsigned char *)dest;
	s_cpy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_cpy[i] = s_cpy[i];
		i++;
	}
	return (dest);
}
