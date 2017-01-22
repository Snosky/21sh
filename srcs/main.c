/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:27:27 by tpayen            #+#    #+#             */
/*   Updated: 2017/01/22 02:10:29 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		main(void)
{
	t_term	*term;
	
	if (init_hook() == -1)
		exit(EXIT_FAILURE);
	term = ft_term();
	while (42)
	{
		print_prompt();
		if (get_key_hook() == -1)
			break ;
	}

	tcsetattr(0, TCSADRAIN, &(term->default_term));
	return (0);
}
