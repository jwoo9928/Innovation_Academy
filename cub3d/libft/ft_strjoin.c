/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopark <jaewoopark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 07:41:36 by mihykim           #+#    #+#             */
/*   Updated: 2020/11/13 23:37:38 by jaewoopark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len1;
	size_t	len2;

	if (s1 == 0 && s2 == 0)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_s == 0)
		return (0);
	ft_memcpy(new_s, s1, len1);
	ft_memcpy(new_s + len1, s2, len2);
	new_s[len1 + len2] = 0;
	return (new_s);
}
