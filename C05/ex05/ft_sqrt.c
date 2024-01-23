/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:06 by iecer             #+#    #+#             */
/*   Updated: 2023/11/07 15:26:08 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	while (index * index <= nb && nb > 0)
	{
		if (index * index == nb)
			return (index);
		else if (index >= 46340)
			return (0);
		++index;
	}
	return (0);
}
