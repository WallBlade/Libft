/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 01:54:54 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/10 19:11:50 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

/*int main()
{
        char dest[10] = "bonjour";
        const char *src = "bonjoir";
        printf("%s\n", ft_strcat(dest, src));
        printf("%s\n", strcat(dest, src));
        return (0);
}*/
