/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimus_tester1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:02:02 by adenord           #+#    #+#             */
/*   Updated: 2023/10/11 22:18:19 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("Category : c\n");

	printf("%c", '0');
	printf("%c", 'A');
	printf("%c", 'a');
	printf("%c", 'Z');
	printf("%c", 'z');
	printf("%c", '*');
	printf("%c", '&');
	printf("%c", '!');
	printf("%c", 32);
	printf("%c", 0);
	printf("%c", 10);
	printf("%c", 126);
	printf("%c", '1');
	printf("%c", '9');
	printf("%c", '0' - 256);
	printf("%c", '0' + 256);


	printf("Category : s\n");

	char *str = "Je suis une chaine de caracteres tout a fait innocente !";

	printf("%s", "");
	printf(" %s", "");
	printf("%s ", "");
	printf(" %s ", "");
	printf("%s", "\n");
	printf("%s %s", "", " - ");
	printf(" %s %s %s %s", "-", "0", "", str);
	printf("%s", str);
	printf("%s %s", str, str);
	printf("%s", NULL);


	printf("Category : p\n");

	printf("%p", -1);
	printf("%p", 1);
	printf("%p", 42);
	printf("%p %p", LONG_MIN, LONG_MAX);
	printf("%p %p", INT_MIN, INT_MAX);
	printf("%p %p", ULONG_MAX, -ULONG_MAX);
	printf(" %p ", 0);


	printf("Category : d\n");

	printf(" %d ", 0);
	printf(" %d ", -1);
	printf(" %d ", 1);
	printf(" %d ", 9);
	printf(" %d ", 10);
	printf(" %d ", 11);
	printf(" %d ", 15);
	printf(" %d ", 16);
	printf(" %d ", 17);
	printf(" %d ", 99);
	printf(" %d ", 100);
	printf(" %d ", 101);
	printf(" %d ", -9);
	printf(" %d ", -10);
	printf(" %d ", -11);
	printf(" %d ", -14);
	printf(" %d ", -15);
	printf(" %d ", -16);
	printf(" %d ", -99);
	printf(" %d ", -100);
	printf(" %d ", -101);
	printf(" %d ", INT_MAX);
	printf(" %d ", INT_MIN);
	printf(" %d ", LONG_MAX);
	printf(" %d ", LONG_MIN);
	printf(" %d ", UINT_MAX);
	printf(" %d ", ULONG_MAX);
	printf(" %d ", 9223372036854775807LL);
	printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	printf("Category : i\n");

	printf(" %i ", 0);
	printf(" %i ", -1);
	printf(" %i ", 1);
	printf(" %i ", 9);
	printf(" %i ", 10);
	printf(" %i ", 11);
	printf(" %i ", 15);
	printf(" %i ", 16);
	printf(" %i ", 17);
	printf(" %i ", 99);
	printf(" %i ", 100);
	printf(" %i ", 101);
	printf(" %i ", -9);
	printf(" %i ", -10);
	printf(" %i ", -11);
	printf(" %i ", -14);
	printf(" %i ", -15);
	printf(" %i ", -16);
	printf(" %i ", -99);
	printf(" %i ", -100);
	printf(" %i ", -101);
	printf(" %i ", INT_MAX);
	printf(" %i ", INT_MIN);
	printf(" %i ", LONG_MAX);
	printf(" %i ", LONG_MIN);
	printf(" %i ", UINT_MAX);
	printf(" %i ", ULONG_MAX);
	printf(" %i ", 9223372036854775807LL);
	printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	printf("Category : u\n");

	printf(" %u ", 0);
	printf(" %u ", -1);
	printf(" %u ", 1);
	printf(" %u ", 9);
	printf(" %u ", 10);
	printf(" %u ", 11);
	printf(" %u ", 15);
	printf(" %u ", 16);
	printf(" %u ", 17);
	printf(" %u ", 99);
	printf(" %u ", 100);
	printf(" %u ", 101);
	printf(" %u ", -9);
	printf(" %u ", -10);
	printf(" %u ", -11);
	printf(" %u ", -14);
	printf(" %u ", -15);
	printf(" %u ", -16);
	printf(" %u ", -99);
	printf(" %u ", -100);
	printf(" %u ", -101);
	printf(" %u ", INT_MAX);
	printf(" %u ", INT_MIN);
	printf(" %u ", LONG_MAX);
	printf(" %u ", LONG_MIN);
	printf(" %u ", UINT_MAX);
	printf(" %u ", ULONG_MAX);
	printf(" %u ", 9223372036854775807LL);
	printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	printf("Category : x\n");

	printf(" %x ", 0);
	printf(" %x ", -1);
	printf(" %x ", 1);
	printf(" %x ", 9);
	printf(" %x ", 10);
	printf(" %x ", 11);
	printf(" %x ", 15);
	printf(" %x ", 16);
	printf(" %x ", 17);
	printf(" %x ", 99);
	printf(" %x ", 100);
	printf(" %x ", 101);
	printf(" %x ", -9);
	printf(" %x ", -10);
	printf(" %x ", -11);
	printf(" %x ", -14);
	printf(" %x ", -15);
	printf(" %x ", -16);
	printf(" %x ", -99);
	printf(" %x ", -100);
	printf(" %x ", -101);
	printf(" %x ", INT_MAX);
	printf(" %x ", INT_MIN);
	printf(" %x ", LONG_MAX);
	printf(" %x ", LONG_MIN);
	printf(" %x ", UINT_MAX);
	printf(" %x ", ULONG_MAX);
	printf(" %x ", 9223372036854775807LL);
	printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	printf("Category : X\n");

	printf(" %X ", 0);
	printf(" %X ", -1);
	printf(" %X ", 1);
	printf(" %X ", 9);
	printf(" %X ", 10);
	printf(" %X ", 11);
	printf(" %X ", 15);
	printf(" %X ", 16);
	printf(" %X ", 17);
	printf(" %X ", 99);
	printf(" %X ", 100);
	printf(" %X ", 101);
	printf(" %X ", -9);
	printf(" %X ", -10);
	printf(" %X ", -11);
	printf(" %X ", -14);
	printf(" %X ", -15);
	printf(" %X ", -16);
	printf(" %X ", -99);
	printf(" %X ", -100);
	printf(" %X ", -101);
	printf(" %X ", INT_MAX);
	printf(" %X ", INT_MIN);
	printf(" %X ", LONG_MAX);
	printf(" %X ", LONG_MIN);
	printf(" %X ", UINT_MAX);
	printf(" %X ", ULONG_MAX);
	printf(" %X ", 9223372036854775807LL);
	printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	printf("Category : %%\n");

	printf(" %% ");
	printf(" %%%% ");
	printf(" %% %% %% ");
	printf(" %%  %%  %% ");
	printf(" %%   %%   %% ");
	printf("%%");
	printf("%% %%");
}
