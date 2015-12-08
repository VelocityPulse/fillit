/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:26:41 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 01:39:54 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_fillit(char *path)
{
	l_form	*list_form;

	list_form = ft_getform(ft_fdcapteur(path));
	if (ft_checklinkedform(list_form))
	{
		ft_displaylstform(list_form)
	}
	ft_putstr("error\n");
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_fillt(argv[1]);
	else
		ft_putstr("error\n");
	return (0);
}
