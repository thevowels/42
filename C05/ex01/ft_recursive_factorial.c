/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:37:46 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/17 09:41:45 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	if(nb == 1)
		return 1;
	return (nb * ft_iterative_factorial(nb-1));
}

#include <stdio.h>

int main(void)
{
	int i = 7;
	printf("Factorial of %i is %i", 42, ft_iterative_factorial(i));
}
