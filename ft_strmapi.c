/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:38:43 by zel-kass          #+#    #+#             */
/*   Updated: 2022/04/30 16:19:36 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	i = -1;
	map = ft_strdup(s);
	if (!map)
		return (NULL);
	while (s[++i])
		map[i] = (*f)(i, s[i]);
	map[i] = '\0';
	return (map);
}
