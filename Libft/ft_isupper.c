/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmd-zaid <nmd-zaid@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:30:35 by nmd-zaid          #+#    #+#             */
/*   Updated: 2021/06/28 17:40:47 by nmd-zaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isupper(int c)
{
    if ((unsigned char)c >= 'A' || (unsigned char)c <= 'Z')
        return (1);
    else
        return (0);
}