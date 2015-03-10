/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_file_foo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:44:43 by pdecrat           #+#    #+#             */
/*   Updated: 2014/12/17 15:48:15 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/stat.h>

int		ft_is_file_foo(char *p_name, char *type)
{
	struct stat		*buf;
	int				ret;

	ret = 0;
	if (!(buf = (struct stat *)ft_memalloc(sizeof(*buf))))
		ret = -1;
	if ((ret = lstat(p_name, buf)) == -1)
		ret = -1;
	if (ret == 0 && ft_strequ(type, "dir") && S_ISDIR(buf->st_mode))
		ret++;
	else if (ret == 0 && ft_strequ(type, "file") && S_ISREG(buf->st_mode))
		ret++;
	else if (ret == 0 && ft_strequ(type, "link") && S_ISLNK(buf->st_mode))
		ret++;
	else if (ret == 0 && ft_strequ(type, "block") && S_ISBLK(buf->st_mode))
		ret++;
	ft_memdel((void **)&buf);
	return (ret);
}
