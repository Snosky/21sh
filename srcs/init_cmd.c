/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 00:43:05 by tpayen            #+#    #+#             */
/*   Updated: 2017/01/22 01:58:40 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		init_cmd(void)
{
	t_term	*term;

	term = ft_term();
	term->cmd.first = NULL;
	if (!(term->cmd.cursor = ft_lstdnew(NULL, sizeof(int))))
		return (-1);
	term->cmd.last = term->cmd.cursor;
	term->cmd.cursor_pos = 0;
	return (1);
}
