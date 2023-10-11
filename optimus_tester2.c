/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimus_tester2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:02:02 by adenord           #+#    #+#             */
/*   Updated: 2023/10/11 22:18:21 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("Category : c\n");

	ft_printf("%c", '0');
	ft_printf("%c", 'A');
	ft_printf("%c", 'a');
	ft_printf("%c", 'Z');
	ft_printf("%c", 'z');
	ft_printf("%c", '*');
	ft_printf("%c", '&');
	ft_printf("%c", '!');
	ft_printf("%c", 32);
	ft_printf("%c", 0);
	ft_printf("%c", 10);
	ft_printf("%c", 126);
	ft_printf("%c", '1');
	ft_printf("%c", '9');
	ft_printf("%c", '0' - 256);
	ft_printf("%c", '0' + 256);


	ft_printf("Category : s\n");

	char *str = "Je suis une chaine de caracteres tout a fait innocente !";

	ft_printf("%s", "");
	ft_printf(" %s", "");
	ft_printf("%s ", "");
	ft_printf(" %s ", "");
	ft_printf("%s", "\n");
	ft_printf("%s %s", "", " - ");
	ft_printf(" %s %s %s %s", "-", "0", "", str);
	ft_printf("%s", str);
	ft_printf("%s %s", str, str);
	ft_printf("%s", NULL);


	ft_printf("Category : p\n");

	ft_printf("%p", -1);
	ft_printf("%p", 1);
	ft_printf("%p", 42);
	ft_printf("%p %p", LONG_MIN, LONG_MAX);
	ft_printf("%p %p", INT_MIN, INT_MAX);
	ft_printf("%p %p", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p ", 0);


	ft_printf("Category : d\n");

	ft_printf(" %d ", 0);
	ft_printf(" %d ", -1);
	ft_printf(" %d ", 1);
	ft_printf(" %d ", 9);
	ft_printf(" %d ", 10);
	ft_printf(" %d ", 11);
	ft_printf(" %d ", 15);
	ft_printf(" %d ", 16);
	ft_printf(" %d ", 17);
	ft_printf(" %d ", 99);
	ft_printf(" %d ", 100);
	ft_printf(" %d ", 101);
	ft_printf(" %d ", -9);
	ft_printf(" %d ", -10);
	ft_printf(" %d ", -11);
	ft_printf(" %d ", -14);
	ft_printf(" %d ", -15);
	ft_printf(" %d ", -16);
	ft_printf(" %d ", -99);
	ft_printf(" %d ", -100);
	ft_printf(" %d ", -101);
	ft_printf(" %d ", INT_MAX);
	ft_printf(" %d ", INT_MIN);
	ft_printf(" %d ", LONG_MAX);
	ft_printf(" %d ", LONG_MIN);
	ft_printf(" %d ", UINT_MAX);
	ft_printf(" %d ", ULONG_MAX);
	ft_printf(" %d ", 9223372036854775807LL);
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	ft_printf("Category : i\n");

	ft_printf(" %i ", 0);
	ft_printf(" %i ", -1);
	ft_printf(" %i ", 1);
	ft_printf(" %i ", 9);
	ft_printf(" %i ", 10);
	ft_printf(" %i ", 11);
	ft_printf(" %i ", 15);
	ft_printf(" %i ", 16);
	ft_printf(" %i ", 17);
	ft_printf(" %i ", 99);
	ft_printf(" %i ", 100);
	ft_printf(" %i ", 101);
	ft_printf(" %i ", -9);
	ft_printf(" %i ", -10);
	ft_printf(" %i ", -11);
	ft_printf(" %i ", -14);
	ft_printf(" %i ", -15);
	ft_printf(" %i ", -16);
	ft_printf(" %i ", -99);
	ft_printf(" %i ", -100);
	ft_printf(" %i ", -101);
	ft_printf(" %i ", INT_MAX);
	ft_printf(" %i ", INT_MIN);
	ft_printf(" %i ", LONG_MAX);
	ft_printf(" %i ", LONG_MIN);
	ft_printf(" %i ", UINT_MAX);
	ft_printf(" %i ", ULONG_MAX);
	ft_printf(" %i ", 9223372036854775807LL);
	ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	ft_printf("Category : u\n");

	ft_printf(" %u ", 0);
	ft_printf(" %u ", -1);
	ft_printf(" %u ", 1);
	ft_printf(" %u ", 9);
	ft_printf(" %u ", 10);
	ft_printf(" %u ", 11);
	ft_printf(" %u ", 15);
	ft_printf(" %u ", 16);
	ft_printf(" %u ", 17);
	ft_printf(" %u ", 99);
	ft_printf(" %u ", 100);
	ft_printf(" %u ", 101);
	ft_printf(" %u ", -9);
	ft_printf(" %u ", -10);
	ft_printf(" %u ", -11);
	ft_printf(" %u ", -14);
	ft_printf(" %u ", -15);
	ft_printf(" %u ", -16);
	ft_printf(" %u ", -99);
	ft_printf(" %u ", -100);
	ft_printf(" %u ", -101);
	ft_printf(" %u ", INT_MAX);
	ft_printf(" %u ", INT_MIN);
	ft_printf(" %u ", LONG_MAX);
	ft_printf(" %u ", LONG_MIN);
	ft_printf(" %u ", UINT_MAX);
	ft_printf(" %u ", ULONG_MAX);
	ft_printf(" %u ", 9223372036854775807LL);
	ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	ft_printf("Category : x\n");

	ft_printf(" %x ", 0);
	ft_printf(" %x ", -1);
	ft_printf(" %x ", 1);
	ft_printf(" %x ", 9);
	ft_printf(" %x ", 10);
	ft_printf(" %x ", 11);
	ft_printf(" %x ", 15);
	ft_printf(" %x ", 16);
	ft_printf(" %x ", 17);
	ft_printf(" %x ", 99);
	ft_printf(" %x ", 100);
	ft_printf(" %x ", 101);
	ft_printf(" %x ", -9);
	ft_printf(" %x ", -10);
	ft_printf(" %x ", -11);
	ft_printf(" %x ", -14);
	ft_printf(" %x ", -15);
	ft_printf(" %x ", -16);
	ft_printf(" %x ", -99);
	ft_printf(" %x ", -100);
	ft_printf(" %x ", -101);
	ft_printf(" %x ", INT_MAX);
	ft_printf(" %x ", INT_MIN);
	ft_printf(" %x ", LONG_MAX);
	ft_printf(" %x ", LONG_MIN);
	ft_printf(" %x ", UINT_MAX);
	ft_printf(" %x ", ULONG_MAX);
	ft_printf(" %x ", 9223372036854775807LL);
	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	ft_printf("Category : X\n");

	ft_printf(" %X ", 0);
	ft_printf(" %X ", -1);
	ft_printf(" %X ", 1);
	ft_printf(" %X ", 9);
	ft_printf(" %X ", 10);
	ft_printf(" %X ", 11);
	ft_printf(" %X ", 15);
	ft_printf(" %X ", 16);
	ft_printf(" %X ", 17);
	ft_printf(" %X ", 99);
	ft_printf(" %X ", 100);
	ft_printf(" %X ", 101);
	ft_printf(" %X ", -9);
	ft_printf(" %X ", -10);
	ft_printf(" %X ", -11);
	ft_printf(" %X ", -14);
	ft_printf(" %X ", -15);
	ft_printf(" %X ", -16);
	ft_printf(" %X ", -99);
	ft_printf(" %X ", -100);
	ft_printf(" %X ", -101);
	ft_printf(" %X ", INT_MAX);
	ft_printf(" %X ", INT_MIN);
	ft_printf(" %X ", LONG_MAX);
	ft_printf(" %X ", LONG_MIN);
	ft_printf(" %X ", UINT_MAX);
	ft_printf(" %X ", ULONG_MAX);
	ft_printf(" %X ", 9223372036854775807LL);
	ft_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	ft_printf("Category : %%\n");

	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %% ");
	ft_printf(" %%  %%  %% ");
	ft_printf(" %%   %%   %% ");
	ft_printf("%%");
	ft_printf("%% %%");
}
