/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:33:10 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/12 00:09:50 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = c;
	return (s);
}

/*int main()
{
	int i = 0;
	int *s = malloc(sizeof(int) * 40);
	s = memset(s, 5, 20);
	while (i < 40)
	{
		printf("%d", s[i]);
		i++;
	}
    return (0);
}*/
