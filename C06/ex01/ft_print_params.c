/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:12:24 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/18 16:23:14 by aphyo-ht         ###   ########.fr       */
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

	argv++;
	if (argc >= 2)
	{
		while (*argv)
		{
			wc = wordcount(*argv);
			write(1, *argv, wc);
			write(1, "\n", 1);
			argv++;
		}
	}
	return (0);
}
