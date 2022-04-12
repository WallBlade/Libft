/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:07:38 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/12 15:14:29 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;

	s_cpy = src;
	i = 0;
	while (i < n)
		dest[i++] = s_cpy;
	return (dest);
}
