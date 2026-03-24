/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 09:38:49 by akabbaj           #+#    #+#             */
/*   Updated: 2025/06/26 09:38:49 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

t_light	**realloc_light(t_light	**lights, t_light *new_light)
{
	int		len;
	int		i;
	t_light	**res;

	len = 0;
	while (lights[len])
		len++;
	res = ft_calloc(len + 2, sizeof(t_light *));
	if (!res)
		return (0);
	i = 0;
	while (lights[i])
	{
		res[i] = lights[i];
		i++;
	}
	res[i++] = new_light;
	res[i] = 0;
	free(lights);
	return (res);
}
