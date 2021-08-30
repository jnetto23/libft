/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:32:05 by jmarque2          #+#    #+#             */
/*   Updated: 2021/08/30 03:38:50 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_isalpha_test(void)
{
	test_start("ft_isalpha");
	test_int(1, isalpha('1'), ft_isalpha('1'));
	test_int(2, isalpha('9'), ft_isalpha('9'));
	test_int(3, isalpha('a'), ft_isalpha('a'));
	test_int(4, isalpha('@'), ft_isalpha('@'));
	test_int(5, isalpha(' '), ft_isalpha(' '));
	test_end();
}
