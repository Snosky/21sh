/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 00:43:05 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/15 17:29:44 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		init_cmd(void)
{
	t_term	*term;

	term = ft_term();
	term->cmd.first = NULL;
	if (!(term->cmd.cursor = ft_lstdnew(NULL, sizeof(int))))
		ft_error(ERR_CMD_INIT);
	term->cmd.last = term->cmd.cursor;
	return (1);
}
