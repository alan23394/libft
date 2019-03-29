/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:15:00 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/28 21:10:58 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gnl_file.h"
#include "ft_mem.h"
#include "ft_string.h"
#include "ft_list.h"
#include <unistd.h>

#define BUFF_SIZE 128

#define FD(cur) (((t_gnl_file *)(cur->content))->fd)
#define BUF(cur) (((t_gnl_file *)(cur->content))->buf)

static t_list	*get_fd(t_list *head, int fd)
{
	t_gnl_file	*file;

	if (!head)
	{
		file = new_gnl_file(fd);
		head = ft_lstnew(file, sizeof(t_gnl_file));
		if (head && head->content)
			BUF(head) = ft_strnew(BUFF_SIZE);
		ft_memdel((void **)&file);
	}
	while (head && head->content)
	{
		if (FD(head) == fd)
			return (head);
		if (!head->next)
		{
			file = new_gnl_file(fd);
			head->next = ft_lstnew(file, sizeof(t_gnl_file));
			if (head->next && head->next->content)
				BUF(head->next) = ft_strnew(BUFF_SIZE);
			ft_memdel((void **)&file);
		}
		head = head->next;
	}
	return (0);
}

static char		*stresize(char **buf, int start, size_t size)
{
	char	*new;
	int		baselen;

	baselen = ft_strlen(*buf + start);
	new = ft_strnew(baselen + size);
	if (!new)
		return (0);
	new = ft_strncpy(new, *buf + start, baselen);
	ft_strdel(buf);
	return (new);
}

static int		process_line(t_list *cur, int ret, char **line)
{
	char	*newline_cur;
	int		new_strlen;

	newline_cur = ft_strchr(BUF(cur), '\n');
	new_strlen = newline_cur - BUF(cur);
	if (!newline_cur && !ret)
	{
		*line = stresize(&BUF(cur), 0, 0);
		if (!*line)
			return (-1);
		if (!**line)
			return (0);
		return (1);
	}
	else
		*line = ft_strnew(new_strlen);
	if (!*line)
		return (-1);
	*line = ft_strncpy(*line, BUF(cur), new_strlen);
	BUF(cur) = stresize(&BUF(cur), new_strlen + 1, 0);
	if (!*line || !BUF(cur))
		return (-1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*head;
	t_list			*cur;
	int				ret;

	if (read(fd, 0, 0) == -1 || !line)
		return (-1);
	if (!head && !(head = get_fd(0, fd)))
		return (-1);
	if (!(cur = get_fd(head, fd)))
		return (-1);
	if (!BUF(cur))
		return (0);
	ret = 1;
	while (!ft_strchr(BUF(cur), '\n') && ret > 0)
	{
		BUF(cur) = stresize(&BUF(cur), 0, BUFF_SIZE);
		if (!BUF(cur))
			return (-1);
		ret = read(fd, (BUF(cur) + ft_strlen(BUF(cur))), BUFF_SIZE);
		if (ret < 0)
			return (-1);
	}
	return (process_line(cur, ret, line));
}
