/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:34:07 by jmarque2          #+#    #+#             */
/*   Updated: 2021/08/30 03:18:31 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_start(char *sut)
{
	printf("\e[1;36m# %s: ", sut);
}

void	test_end(void)
{
	puts(" ");
}

void	test_int(int number_test, int expect, int received)
{
	if (expect != received)
	{
		printf("\e[1;31m%i-KO \033[0m", number_test);
		exit(0);
	}
	printf("\e[0;32m%i-OK \033[0m", number_test);
}
