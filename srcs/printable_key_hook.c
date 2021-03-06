/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printable_key_hook.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:04:07 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/19 03:19:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		printable_key_hook(int key)
{
	if (add_key_to_cmd(key) == -1)
		exit(EXIT_FAILURE); // TODO : Meilleure gestion erreur
	refresh_cmd(CURSOR_NEXT);
	return (1);
}
