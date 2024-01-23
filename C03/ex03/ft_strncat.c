/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:16:04 by iecer             #+#    #+#             */
/*   Updated: 2023/11/05 12:16:06 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		++i;
	while (k < nb && src[k] != '\0')
	{
		dest[i] = src[k];
		++i;
		++k;
	}
	dest[i] = '\0';
	return (dest);
}
