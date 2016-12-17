/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:11:07 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/16 17:35:46 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

void	cmd_delone(void *content, size_t size)
{
	(void)size;
	free(content);
	content = NULL;
}

void	delete_left(void)
{
	t_term	*term;

	term = ft_term();
	if (term->cmd.cursor->prev)
	{
		/*if (term->cmd.cursor->prev == term->cmd.first)
			term->cmd.first = term->cmd.first->next;*/
		ft_lstddelone(&(term->cmd.cursor->prev), cmd_delone);
		refresh_cmd();
	}
}
