/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 03:00:43 by jmarque2          #+#    #+#             */
/*   Updated: 2021/08/30 03:39:59 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
/**
	1 - Part 1
	2 - Part 2
	3 - Bonus
*/
int	ft_print_header_test(unsigned int part)
{
	if (part > 3)
		exit(0);
	puts("#############################");
	if (part == 1)
		puts("########## Part 1 ###########");
	if (part == 2)
		puts("########## Part 2 ###########");
	if (part == 3)
		puts("########## Bonus. ###########");
	puts("#############################");
	return (0);
}

int	ft_test_part_1(void)
{
	ft_print_header_test(1);
	ft_isalpha_test();
	return (0);
}

int	main(void)
{
	ft_test_part_1();
	return (0);
}
