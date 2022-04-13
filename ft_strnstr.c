/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:32:09 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/13 23:31:38 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			if (ft_strncmp(str + i, to_find + j, ft_strlen(to_find)) == 0)
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
        char *str = "Je suis une zon zone de recherche";
        char *to_find = "zone";
        printf("ft : %s\n", ft_strnstr(str, to_find, 40));
        return (0);
}*/
