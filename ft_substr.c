/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:43:16 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/14 00:04:48 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char *s = "coucou soundous ca va ?";
	printf("%s\n", ft_substr(s, 7, 8));
	return (0);
}*/
