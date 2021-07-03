/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:58:44 by ehakam            #+#    #+#             */
/*   Updated: 2021/05/25 18:38:49 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENV_H
# define FT_ENV_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "ft_types.h"
# include "../global_utils/global_utils.h"
# include "ft_vector.h"

typedef struct s_var
{
	char	*raw;
	char	*key;
	char	*value;
}			t_var;

t_var	*new_var_v(char *key, char *value, char *raw);
t_var	*new_var_kv(char *key, char *value);
t_var	*split_key_value(struct s_var *var, char *var_str);
t_var	*split_key_value_v(char *var_str);
t_bool	equals(void *item1, void *item2);
t_bool	equals_key(void *item1, void *item2);
t_bool	check_key(t_var *var);
t_bool	check_key2(char *key);
int		set_var(t_vector *env, char *var_str);
int set_var2(t_vector *env, char *key, char *value, t_bool check);
int		unset_var(t_vector *env, char *key);
char	*get_var(t_vector *env, char *key);
t_var	*get_var_2(t_vector *env, char *key);
int		list_vars(t_vector *env, t_bool sort_, int(*print)(t_var*));
char	*ft_substr2(char *str, int from, int to);
char	**extract_envp(t_vector *g_env);

#endif