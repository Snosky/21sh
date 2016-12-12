/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:27:27 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/13 00:42:48 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>
/*
int		init_term(void)
{
	t_term	*term;
	int		success;

	term = ft_term();
	if ((term->fd = open(ttyname(STDIN_FILENO), O_WRONLY)) == -1)
		return (-1); // TODO : Print Error
	term->name = getenv("TERM");
	if (term->name == NULL)
		return (-1); // TODO : Print Error
	success = tgetent(0, term->name);
	if (success < 0)
		return (-1); // TODO : Print Error
	else if (success == 0)
		return (-1); // TODO : Print Error
	if (tcgetattr(0, &(term->term)) == -1 ||
			tcgetattr(0, &(term->default_term)) == -1) // TODO : Peut etre save une copie
		return (-1); // TODO : Print Error
	term->term.c_lflag &= ~(ICANON | ECHO);
	//term->term.c_oflag &= OPOST;
	term->term.c_cc[VMIN] = 1;
	term->term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &(term->term));
	return (0);
}
*/
int		main(void)
{
	t_term	*term;
	
	//t_lstd	*lst = NULL;
	//t_lstd	*tmp;

	if (init_hook() == -1)
		exit(EXIT_FAILURE);
	term = ft_term();
	while (42)
	{
		ft_putstr("21sh> ");
		if (get_key_hook() == -1)
			break ;
	}

	tcsetattr(0, TCSADRAIN, &(term->default_term));
	return (0);
}
