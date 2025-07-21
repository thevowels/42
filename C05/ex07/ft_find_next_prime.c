/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:28:43 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/21 18:41:41 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n, int c)
{
	if (c == 2)
	{
		if (n % c == 0)
			return (0);
		else
			c += 1;
	}
	if (c > n / 2)
		return (1);
	else if (n % c == 0)
		return (0);
	else
		return (ft_is_prime(n, c + 2));
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	while (!ft_is_prime(nb, 2))
	{
		nb += 2;
	}
	return (nb);
}
