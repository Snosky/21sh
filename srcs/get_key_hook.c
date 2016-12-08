/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_key_hook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 16:41:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/08 16:44:14 by tpayen           ###   ########.fr       */
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
			ft_putchar(key[0]); // TODO : Dans la liste
		else if (key[0] == K_RETURN)
			return (1);
		else if (key[0] == K_ESC)
			return (-1);
	}
	return (-1);
}
