/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepoujol <jepoujol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:34:27 by jepoujol          #+#    #+#             */
/*   Updated: 2018/11/08 13:49:35 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	j = -1;
	while (s2[++j] && n != 0)
	{
		s1[i + j] = s2[j];
		n--;
	}
	s1[i + j] = '\0';
	return (s1);
}
