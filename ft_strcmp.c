/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 01:45:14 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/10 20:32:30 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	const char *s1 = "bonjour";
	const char *s2 = "bonjoir";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}*/
