/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:40:05 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/18 16:22:48 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wordcount(char *str)
{
	int	wc;

	wc = 0;
	while (str[wc])
		wc++;
	return (wc);
}

int	main(int argc, char **argv)
{
	int	wc;

	wc = wordcount(argv[0]);
	write(1, argv[0], wc);
	write(1,"\n",1);
	return (argc);
}
