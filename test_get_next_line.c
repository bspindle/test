/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bspindle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:23:29 by bspindle          #+#    #+#             */
/*   Updated: 2017/12/18 10:27:58 by bspindle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	(void)argc;
	(void)argv;


	// ***************	TEST ONE FILE ***********

	int fd;
	int	n = 1;
	char *line;
	line = "";
	fd = open(argv[1], O_RDWR);
	
	while (n == 1)
	{
		n = get_next_line((const int)fd, &line);
		ft_putstr("\nget_next_line = ");
		ft_putnbr(n);
		ft_putstr(".\nLINE = \"");
		ft_putstr(line);
		ft_putstr("\".\n");
	}
	if (n == 0)
		ft_putstr("\nGNL exit SUCCESS\n");
	else
		ft_putstr("\nGNL EXIT FAILURE\n");
	close(fd);

	// **************** TEST MULTIFD ******************

/*			int fd;
			int fd2;
			int fd3;
			int	fd4;
			char *line;
			int n1 = 1;
			int n2 = 1;
			int n3 = 1;
			int n4 = 1;

			fd = open(argv[1], O_RDWR);
			fd2 = open(argv[2], O_RDONLY);
			fd3 = open(argv[3], O_RDONLY);
			fd4 = open(argv[4], O_RDONLY);
			line = "";
	while (n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1)
	{
	n1 = get_next_line((const int)fd, &line);
	ft_putstr("\nget_next_line1 = ");
	ft_putnbr(n1);
	ft_putstr(".\nLINE1 = \"");
	ft_putstr(line);
	n2 = get_next_line((const int)fd2, &line);
	ft_putstr("\"\nget_next_line2 = ");
	ft_putnbr(n2);
	ft_putstr(".\nLINE2 = \"");
	ft_putstr(line);
	n3 = get_next_line((const int)fd3, &line);
	ft_putstr("\"\nget_next_line3 = ");
	ft_putnbr(n3);
	ft_putstr(".\nLINE3 = \"");
	ft_putstr(line);
	n4 = get_next_line((const int)fd4, &line);
	ft_putstr("\"\nget_next_line4 = ");
	ft_putnbr(n4);
	ft_putstr(".\nLINE4 = \"");
	ft_putstr(line);
	ft_putstr("\".\n");
	}
	close(fd);
	close(fd2);
	close(fd3);
	close(fd4);
	if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
	ft_putstr("\nGNL exit SUCCESS\n");
	if (n1 == -1 || n2 == -1 || n3 == -1 || n4 == -1)
	ft_putstr("\nGNL EXIT FAILURE\n");
	

*/	/*

	// *************** TEST STDIN   ******************* 
	//
	//
	//
	int fd;
	char *line;//= malloc(50);
	int	n;		
	fd = 0;//open(STDIN_FILENO, O_RDONLY);
	n = 1;
	while (n == 1)
	{
	n = get_next_line((const int)fd, &line);
	ft_putstr("\nget_next_line1 = ");
	ft_putnbr(n);
	ft_putstr(".\nLINE1 = \"");
	ft_putstr(line);
	ft_putstr("\".\n");
	}
	if (n == 0)
	ft_putstr("EXIT_SUCCESS\n");
	if (n == -1)
	ft_putstr("EXIT_FAILURE\n");
	*/	

	return (1);
}
