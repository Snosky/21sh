/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 00:48:32 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/13 00:50:10 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		ft_error(char *msg)
{
	//TODO : exit_hook();
	ft_putstr_fd("21sh: error: ", 2);
	ft_putendl_fd(msg, 2);
	exit(EXIT_FAILURE);
}
