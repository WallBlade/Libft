/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:11:05 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/11 23:58:38 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}

/*int main()
{
	char *s = "effacer";
	printf("%s\n", ft_bzero(s, 7));
	printf("%s\n", bzero(s, 7));
}*/
