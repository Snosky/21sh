/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_prompt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 16:01:22 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/15 16:14:27 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		print_prompt(void)
{
	char	*prompt;

	prompt = ft_strdup("21sh> ");
	tputs(prompt, 0, tputc);
	return (1);
}
