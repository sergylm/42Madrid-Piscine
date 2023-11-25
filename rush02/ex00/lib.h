/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:48 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/25 17:48:21 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>

// russh02.c
void	start(const char *path);

// file.c
int		open_file(const char *path);

// dict.c
typedef struct t_dict_entry {
	const char	*key;
	char		*value;
} T_dict_entry;

typedef struct t_dict {
	T_dict_entry	*entry;
	int				len;
	int				cap;
} T_dict, *T_dict_ptr;

T_dict_ptr	dict_new(void);

void	dict_free(T_dict dict);

// print.c
void	print(char *str);

void	print_chr(char chr);

void	ft_read(char *str, int size);

// aux.c
int		length(char *str);

#endif
