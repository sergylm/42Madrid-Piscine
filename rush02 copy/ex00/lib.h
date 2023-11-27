/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:54:48 by selopez-          #+#    #+#             */
/*   Updated: 2023/11/26 22:10:16 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define ENGLISH "numbers.dict"
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>

// rush02.c
void	start(const char *path, char *str);

// file.c
int		open_file(const char *path);

// dict.c
typedef struct t_dict_entry {
	const char	*key;
	char		*value;
}	t_dict_entry;

typedef struct t_dict {
	t_dict_entry	*entry;
	int				len;
	int				cap;
}	t_dict;

typedef struct t_dict *t_dict_ptr;

t_dict_ptr	dict_new(void);

void	dict_free(t_dict_ptr dict);

int	dict_find(t_dict_ptr dict, const char *key);

void	dict_add(t_dict_ptr dict, const char* key, char *value);

int	dict_load(t_dict_ptr dict, char *buffer);

char *find_value(t_dict_ptr dict, const char *key);

// transcript.c

void	alg(t_dict_ptr dict, char *str);

void	alg_x(t_dict_ptr dict, char *str);

// print.c
void	print(char *str);

void	print_chr(char chr);

void	ft_read(char *str, int size);

// check.c
int	check_number(char *str);

// aux.c
int		length(char *str);

int	ft_strcmp(const char *s1, const char *s2);

char *ft_strdup(const char *str);

char *parse_str(char *buffer, int size);

int	file_length(int fd);

// aux2.c

char	*fill_zeros(int n);

#endif
