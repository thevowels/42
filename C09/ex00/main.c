/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:11:33 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 09:29:18 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	int i;
	int j;
	char str[20] = "my string";
	char dest[20] = "New One";
	
	i = 4;
	j = 2;
	ft_putchar('A');
	ft_putchar('\n');
	ft_putstr(str);	
	ft_putchar('\n');
	
	ft_swap(&i,&j);
	ft_putchar('0' + i);
	ft_putchar('\n');

	i =  ft_strlen(str);
	ft_putchar('0'+i);
	ft_putchar('\n');
	
	i = ft_strcmp("ABC","AB");
	ft_putchar('0' + (i % 10));
	ft_putchar('\n');



}
