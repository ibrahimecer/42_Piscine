/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecer <iecer@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:45:58 by iecer             #+#    #+#             */
/*   Updated: 2023/11/07 10:46:00 by iecer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	val1;
	int	val2;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		val2 = ft_fibonacci(index - 2);
		val1 = ft_fibonacci(index - 1);
		return (val1 + val2);
	}
	else
		return (-1);
}
