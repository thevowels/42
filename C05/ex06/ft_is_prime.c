/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:19:45 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/17 22:02:29 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int n, int c)
{
	if (c == 1)
	{
		return (1);
	}
	else
	{
		if (n % c == 0)
			return (0);
		return (is_prime(n, c - 1));
	}
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (is_prime(nb, nb / 2));
}
