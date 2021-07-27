/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:29:46 by arporto-          #+#    #+#             */
/*   Updated: 2021/07/26 23:37:28 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-- Check for any printable character including space.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
