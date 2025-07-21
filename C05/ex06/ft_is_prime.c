/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:19:45 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/21 17:44:38 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	is_prime(int n, int c)
// {
// 	if (c > n / 2)
// 		return (1);
// 	else if (n % c == 0)
// 		return (0);
// 	else
// 		return (is_prime(n, c + 1));
// }

/*
Functin below is to make to recursive function more efficient by skipping
the even numbers as if a number is not divisible by 2, they will never be
divisible by any other even number.

If a number is divisible by n then a larger number is divisible by the
multiple of n then their common divisior is n.

*/

int	is_prime(int n, int c)
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
		return (is_prime(n, c + 2));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime(nb, 2));
}
