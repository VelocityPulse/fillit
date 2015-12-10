/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:27 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/10 15:43:57 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_form	*ft_getform(char *str, int x, int y, int i)
{
	t_form	*form;
	t_form	*begin;

	begin = ft_newform(1);
	form = begin;
	while (str[i])
	{
		x = 0;
		while (x < 4 && str[i])
		{
			form->shape[y][x] = str[i];
			x++;
			i++;
		}
		i++;
		y++;
		if (y == 4)
		{
			form->next = ft_newform(form->index++);
			form = form->next;
			y = 0;
			i++;
		}
	}
	YOLO
		ft_putnbr(ft_strlen(str));
	YOLO
	return (i - (5 * form->index + 1) == (form->index * 16) ? NULL : begin);
}

char	*ft_fdcapture(char *path)
{
	int		fd;
	char	c;
	char	*str;
	t_str	*l_str;

	l_str = NULL;
	str = NULL;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (read(fd, &c, 1))
		l_str = ft_addc(l_str, c);
	str = ft_exportstr(l_str);
	ft_freelststr(l_str);
	return (str);
}
