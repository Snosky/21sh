/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_key_to_cmd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:07:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/12 16:13:30 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		add_key_to_cmd(char *key)
{
	t_term	*term;
	t_lstd	*tmp;

	term = ft_term();
	if (!(tmp = ft_lstdnew(key, sizeof(char *))))
		return (-1);
	ft_lstdadd(&(term->cmd.cmd), tmp);
	term->cmd.cursor = tmp;
	return (1);
}
