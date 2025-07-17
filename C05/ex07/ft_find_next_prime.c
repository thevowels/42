/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:28:43 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/17 21:32:26 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isPrime(int n, int c)
{
	if (c == 1)
	{
		return (1);
	}
	else
	{
		if (n % c == 0)
			return (0);
		return (isPrime(n, c - 1));
	}
}


int ft_find_next_prime(int nb)
{
	if(nb <= 2)
		return (2);
	nb += 1;
	while(!isPrime(nb, nb/2))
	{
		nb++;
	}
	return (nb);
}
