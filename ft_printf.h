/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaterno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:04:04 by jpaterno          #+#    #+#             */
/*   Updated: 2021/10/12 19:05:22 by jpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void				ft_putstr(char *str);
char				*ft_itoa(int n);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
int					ft_tri(char choice, va_list strin);
int					ft_printf(const char *strin, ...);
int					ft_wint(int nb);
int					ft_wchar(int nb);
int					ft_wstr(char *str);
int					ft_wptr(void *ptr);
int					ft_wuint(unsigned int nb);
int					ft_whex(unsigned int nb, char *base);

#endif
