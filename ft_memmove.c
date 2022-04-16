/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:07:38 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/15 02:10:12 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;
	unsigned char	*d_cpy;
	unsigned char	tmp[n];

	if (!dest || !src)
		return (NULL);
	s_cpy = (unsigned char *)src;
	d_cpy = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = s_cpy[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d_cpy[i] = tmp[i];
		i++;
	}
	return (dest);
}
