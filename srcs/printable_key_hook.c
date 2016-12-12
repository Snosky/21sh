/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printable_key_hook.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:04:07 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/12 16:15:25 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		printable_key_hook(char *key)
{
	if (add_key_to_cmd(key) == -1)
		exit(EXIT_FAILURE); // TODO : Meilleure gestion erreur
	ft_putchar(key[0]);
	return (1);
}
