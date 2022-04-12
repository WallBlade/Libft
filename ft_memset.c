/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:33:10 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/12 15:35:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char *s = (char *)malloc(sizeof(char) * 40);
	s = ft_memset(s, 'b', 20);
	while (i < 40)
	{
		printf("%c", s[i]);
		i++;
	}
    return (0);
}*/
