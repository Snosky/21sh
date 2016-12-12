/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_key_hook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 16:41:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/12 20:42:00 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		get_key_hook(void)
{
	char	key[1];

	while (42)
	{
		read(0, key, sizeof(int));
		if (ft_isprint(key[0]))
			printable_key_hook(key);
		else if (key[0] == K_RETURN)
		{
			t_term 	*term = ft_term();
			t_lstd	*lst = term->cmd.cmd;
			t_lstd	*first = term->cmd.cmd->next;
			while (lst->next != first)
			{
				ft_putchar(((char *)(lst->content))[0]);
				lst = lst->next;
			}
			return (1);
		}
		else if (key[0] == K_ESC)
			return (-1);
	}
	return (-1);
}
