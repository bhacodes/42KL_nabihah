/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 22:55:22 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/28 23:04:17 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    const char  *d;

    d = malloc(ft_strlen(s1) * sizeof(char) + 1);
    if (!d)
        return (NULL);
    ft_strcpy(d, s1);
    return (d);
}