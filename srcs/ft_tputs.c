/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tputs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:51:59 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/15 17:55:20 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>
// TODO : Virer cette fonction de merde
void		ft_tputs(char *id)
{
	char *s;

	if ((s = tgetstr(id, NULL)) == NULL)
		exit(0);
	tputs(s, 0, tputc);
}		
