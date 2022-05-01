/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:43:16 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/30 03:38:24 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sublen(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str && str[i] && i < start)
		i++;
	j = 0;
	while (str && str[i] && j < len)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!str)
		return (NULL);
	len = ft_sublen(str, start, len);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && str[start + i] != '\0')
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char *s = "tripouille";
	printf("%s\n", ft_substr(s, 0, 42000));
	return (0);
}*/