/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:44:23 by kgriset           #+#    #+#             */
/*   Updated: 2023/12/23 22:55:33 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <time.h>

int	main(void)
{
	double	cpu_time_used;
	long	c;
	long	d;
	long	e;
	long	f;
	long	g;
    long    ga;
	long	h;
	char	*ptr;
	long	i;
	long	j;
    long    k;
    long    l;
    long    la;
    long    lb;
    long    lc;
    long    m;
    long    n;
    long    o;
    long    p;
    long    q;
    long    r;
    long    s;


	clock_t start, end;
	start = clock();
	// -- %c
	// 1
	// long a = printf("%2147483646c\n", 'b');
	// printf("%li\n",a);
	// fflush(stdout);
	// 2
	// long b = printf("%2147483647c\n", 'b');
	// printf("%li\n",b)
	// fflush(stdout);
	// 3
	c = printf("%-42c\n", 'b');
	printf("%li\n", c);
    printf("0\n");
	fflush(stdout);
	// 4
	d = printf("%c\n", 'b');
	printf("%li\n", d);
    printf("1\n");
	fflush(stdout);
	// -- %s
	// 5
	e = printf("%.2s\n", (char *)NULL);
	printf("%li\n", e);
    printf("2\n");
	fflush(stdout);
	// 6
	f = printf("..%-43.2s..\n", (char *)NULL);
	printf("%li\n", f);
    printf("3\n");
	fflush(stdout);
	// 7
	g = printf("..%-43.3s..\n", "hello");
	printf("%li\n", g);
    printf("4\n");
	fflush(stdout);
    // 7.1
	ga = printf("..%-3.3s..\n", "hello");
	printf("%li\n", ga);
    printf("5\n");
	fflush(stdout);
	// -- %p
	// 8
	h = printf("..%-13p..\n", NULL);
	printf("%li\n", h);
    printf("6\n");
	fflush(stdout);
	// 9
	ptr = malloc(sizeof(char));
	i = printf("..%-20p..\n", ptr);
	printf("%li\n", i);
    printf("7\n");
	fflush(stdout);
	free(ptr);
	// 10
	j = printf("..%2p..\n", NULL);
	printf("%li\n", j);
    printf("8\n");
	fflush(stdout);
    // -- %i/d
    // 11
    k = printf("..%i..\n", 0);
	printf("%li\n", k);
    printf("9\n");
	fflush(stdout);
    // 12
    l = printf("..%+042i..\n", 0);
	printf("%li\n", l);
    printf("10\n");
	fflush(stdout);
    // 12.1
    la = printf("..% 042i..\n", 0);
	printf("%li\n", la);
    printf("11\n");
	fflush(stdout);
    // 12.2
    lb = printf("..%-+42i..\n", 0);
	printf("%li\n", lb);
    printf("12\n");
	fflush(stdout);
    // 12.3
    lc = printf("..%- 42i..\n", 0);
	printf("%li\n", lc);
    printf("13\n");
	fflush(stdout);
    // 13
    m = printf("..%-042i..\n", 0);
	printf("%li\n", m);
    printf("14\n");
	fflush(stdout);
    // 14
    n = printf("..% 042i..\n", 6);
	printf("%li\n", n);
    printf("15\n");
	fflush(stdout);
    // 15
    o = printf("..%+042i..\n", 7);//
	printf("%li\n", o);
    printf("16\n");
	fflush(stdout);
    // 16
    p = printf("..%-42.5i..\n", -7);//
	printf("%li\n", p);
    printf("17\n");
	fflush(stdout);
    // 17
    q = printf("..%+042.1i..\n", 7);//
	printf("%li\n", q);
    printf("18\n");
	fflush(stdout);
    // 18
    r = printf("..%+042.0i..\n", -7);//
	printf("%li\n", r);
    printf("19\n");
	fflush(stdout);
    // 19
    s = printf("..%+042.i..\n", 7);//
	printf("%li\n", s);
    printf("20\n");
	fflush(stdout);

    // -- %u
    // 20
    k = printf("..%u..\n", 0);
	printf("%li\n", k);
    printf("21\n");
	fflush(stdout);
    // 21
    l = printf("..%042u..\n", 0);
	printf("%li\n", l);
    printf("22\n");
	fflush(stdout);
    // 23
    la = printf("..%042u..\n", 0);
	printf("%li\n", la);
    printf("23\n");
	fflush(stdout);
    // 24 
    lb = printf("..%-42u..\n", 0);
	printf("%li\n", lb);
    printf("24\n");
	fflush(stdout);
    // 25
    lc = printf("..%-42u..\n", 0);
	printf("%li\n", lc);
    printf("25\n");
	fflush(stdout);
    // 26
    m = printf("..%-042u..\n", 0);
	printf("%li\n", m);
    printf("26\n");
	fflush(stdout);
    // 27
    n = printf("..%042u..\n", 6);
	printf("%li\n", n);
    printf("27\n");
	fflush(stdout);
    // 28
    o = printf("..%042u..\n", 7);
	printf("%li\n", o);
    printf("28\n");
	fflush(stdout);
    // 29
    p = printf("..%-42.5u..\n", UINT_MAX);
	printf("%li\n", p);
    printf("29\n");
	fflush(stdout);
    // 30
    q = printf("..%042.3u..\n", 7);
	printf("%li\n", q);
    printf("30\n");
	fflush(stdout);
    // 31
    r = printf("..%042.0u..\n", UINT_MAX);
	printf("%li\n", r);
    printf("31\n");
	fflush(stdout);
    // 32
    s = printf("..%42.4u..\n", 7);
	printf("%li\n", s);
    printf("32\n");
	fflush(stdout);

    // -- %x
    // 33
    k = printf("..%x..\n", 0);
	printf("%li\n", k);
    printf("33\n");
	fflush(stdout);
    // 34
    l = printf("..%042x..\n", 0);
	printf("%li\n", l);
    printf("34\n");
	fflush(stdout);
    // 35
    la = printf("..%042x..\n", 0);
	printf("%li\n", la);
    printf("35\n");
	fflush(stdout);
    // 36
    lb = printf("..%-42x..\n", 0);
	printf("%li\n", lb);
    printf("36\n");
	fflush(stdout);
    // 37
    lc = printf("..%-42x..\n", 0);
	printf("%li\n", lc);
    printf("37\n");
	fflush(stdout);
    // 38
    m = printf("..%-042x..\n", 0);
	printf("%li\n", m);
    printf("38\n");
	fflush(stdout);
    // 39
    n = printf("..%042x..\n", 6);
	printf("%li\n", n);
    printf("39\n");
	fflush(stdout);
    // 40
    o = printf("..%0#42x..\n", 7);
	printf("%li\n", o);
    printf("40\n");
	fflush(stdout);
    // 41
    p = printf("..%-#42.5x..\n", UINT_MAX);
	printf("%li\n", p);
    printf("41\n");
	fflush(stdout);
    // 42
    q = printf("..%0#42.3x..\n", 7);
	printf("%li\n", q);
    printf("42\n");
	fflush(stdout);
    // 43
    r = printf("..%0#42.0x..\n", UINT_MAX);
	printf("%li\n", r);
    printf("43\n");
	fflush(stdout);
    // 44
    s = printf("..%42.4x..\n", 7);
	printf("%li\n", s);
    printf("44\n");
	fflush(stdout);

    // -- %X
    // 45
    k = printf("..%#.X..\n", 0);
	printf("%li\n", k);
    printf("45\n");
	fflush(stdout);
    // 46
    l = printf("..%042X..\n", 0);
	printf("%li\n", l);
    printf("46\n");
	fflush(stdout);
    // 47
    la = printf("..%042X..\n", 0);
	printf("%li\n", la);
    printf("47\n");
	fflush(stdout);
    // 48
    lb = printf("..%-42X..\n", 0);
	printf("%li\n", lb);
    printf("48\n");
	fflush(stdout);
    // 49
    lc = printf("..%-42X..\n", 0);
	printf("%li\n", lc);
    printf("49\n");
	fflush(stdout);
    // 50
    m = printf("..%-042X..\n", 0);
	printf("%li\n", m);
    printf("50\n");
	fflush(stdout);
    // 51
    n = printf("..%042X..\n", 6);
	printf("%li\n", n);
    printf("51\n");
	fflush(stdout);
    // 52
    o = printf("..%0#42X..\n", 7);
	printf("%li\n", o);
    printf("52\n");
	fflush(stdout);
    // 53
    p = printf("..%-#42.5X..\n", UINT_MAX);
	printf("%li\n", p);
    printf("53\n");
	fflush(stdout);
    // 54
    q = printf("..%0#42.3X..\n", 7);
	printf("%li\n", q);
    printf("54\n");
	fflush(stdout);
    // 55
    r = printf("..%0#42.0X..\n", UINT_MAX);
	printf("%li\n", r);
    printf("55\n");
	fflush(stdout);
    // 56
    s = printf("..%42.4X..\n", 7);
	printf("%li\n", s);
    printf("56\n");
	fflush(stdout);

	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Took : %f seconds\n", cpu_time_used);
	return (1);
}
