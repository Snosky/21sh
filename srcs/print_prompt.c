/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_prompt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 16:01:22 by tpayen            #+#    #+#             */
/*   Updated: 2017/01/22 01:58:19 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		print_prompt(void)
{
	char	*prompt;
	t_term	*term;

	term = ft_term();
	prompt = ft_strdup("21sh> ");
	tputs(prompt, 0, tputc);
	term->cmd.cursor_pos = ft_strlen(prompt);
	return (1);
}
