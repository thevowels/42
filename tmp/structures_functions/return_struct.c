/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 01:37:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/23 01:47:01 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Returning Struct form the function.
*/

#include <stdio.h>

struct rectangle{
	float length, height;
	double area;
};

struct rectangle area(float x, float y);
void printRect(struct rectangle rect);
int main(void)
{
	struct rectangle rect;
	rect = area(7,6);
	printRect(rect);
}	

struct rectangle area(float x, float y)
{
	struct rectangle rect;
	rect.length = x;
	rect.height = y;
	rect.area = (double) x * y; 
	return (rect);
}

void printRect(struct rectangle rect)
{
	printf("Length: %f\n", rect.length);
	printf("Heigt:  %f\n", rect.height);
	printf("Area:   %lf\n", rect.area);
}
