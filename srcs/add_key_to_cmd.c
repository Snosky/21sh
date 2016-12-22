/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_key_to_cmd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:07:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 14:20:56 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		add_key_to_cmd(int key)
{
	t_term	*term;
	t_lstd	*tmp;
	char	str[2];

	term = ft_term();
	str[0] = key;
	str[1] = 0;
	if (!(tmp = ft_lstdnew(ft_strdup(str), sizeof(char *))))
		return (-1);
	ft_lstdadd(&(term->cmd.cursor), tmp, 1);
	if (!tmp->prev)
		term->cmd.first = tmp;
	if (!tmp->next)
		term->cmd.last = tmp;
	return (1);
}
