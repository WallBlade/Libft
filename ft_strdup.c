/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:32:30 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/10 20:30:35 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *s)
{
        unsigned int    i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char 	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int main()
{
	char *src = "Salut";
	char *dup = ft_strdup(src);
	printf("Src = %s\n", src);
	printf("Dup = %s\n", dup);
	return (0);
}*/
