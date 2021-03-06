/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:05:20 by abrault           #+#    #+#             */
/*   Updated: 2013/11/28 16:46:32 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int n)
{
	return (('A' <= n && n <= 'Z') || ('a' <= n && n <= 'z') ||
			('0' <= n && n <= '9'));
}
