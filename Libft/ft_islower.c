/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:40:58 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/28 23:08:46 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_islower(int c)
{
    if ((unsigned char)c >= 'a' || (unsigned char)c <= 'z')
        return (1);
    else
        return (0);
}