/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:58:46 by jmarque2          #+#    #+#             */
/*   Updated: 2021/08/30 03:35:19 by jmarque2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../src/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

// auxiliary functions to print test results
void	test_start(char *sut);
void	test_end(void);
void	test_int(int number_text, int expect, int received);

#endif
