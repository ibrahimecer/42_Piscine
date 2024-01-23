/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:00:48 by iecer             #+#    #+#             */
/*   Updated: 2023/11/05 13:00:51 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k] && str[i + k] != '\0')
			k++;
		if (to_find[k] == '\0')
			return (str + i);
		i++;
		k = 0;
	}
	return (0);
}
