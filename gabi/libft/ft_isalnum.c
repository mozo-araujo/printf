/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:49:10 by gsenra-a          #+#    #+#             */
/*   Updated: 2020/01/27 14:58:24 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int e)
{
	if (e >= '0' && e <= '9')
		return (1);
	if ((e >= 65 && e <= 90) || (e >= 97 && e <= 122))
		return (1);
	return (0);
}