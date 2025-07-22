/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 01:16:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 01:22:35 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Passing struct then return the result
*/

#include <stdio.h>

struct Rectangle{
	float length;
	float height;
};

float area(struct Rectangle rect);

int main(void)
{
	struct Rectangle rect;
	float value;

	rect.length = 4;
	rect.height = 8;

	value =area(rect);

	printf("Area of Rectangle is : %f\n", value);
}

float area(struct Rectangle rect)
{
	return (rect.length * rect.height);
}
