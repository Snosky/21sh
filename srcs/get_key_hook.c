/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_key_hook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 16:41:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/19 02:50:22 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		get_key_hook(void)
{
	int		key;

	while (42)
	{
		key = 0;
		read(0, &key, sizeof(int));
		if (ft_isprint(key))
			printable_key_hook(key);
		else if (key == K_LEFT)
			move_cursor_left();
		else if (key == K_RIGHT)
			move_cursor_right();
		else if (key == K_BACKSPACE)
			delete_left();
		else if (key == K_RETURN)
		{
			t_term 	*term = ft_term();
			t_lstd	*lst = term->cmd.first;
			while (lst)
			{
				tputs(lst->content, 0, tputc);
				lst = lst->next;
			}
			return (1);
		}
		else if (key == K_ESC)
			return (-1);
	}
	return (-1);
}
