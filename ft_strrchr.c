/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:55:45 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/13 23:37:29 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}

/*int main()
{
	const char *str = "s aus woqi bisa o aknsbxc";
	char c = 'o';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
	return (0);
}*/
