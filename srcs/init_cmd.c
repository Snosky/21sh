/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 00:43:05 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 14:20:31 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		init_cmd(void)
{
	t_term	*term;

	term = ft_term();
	term->cmd.first = NULL;
	term->cmd.cursor = NULL;
	term->cmd.last = NULL;
	return (1);
}
