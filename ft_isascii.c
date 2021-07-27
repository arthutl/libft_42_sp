/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:42:50 by arporto-          #+#    #+#             */
/*   Updated: 2021/07/26 23:48:28 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-- Check if a 7-bit unsigned char value that fits into ASCII character set.
   7-bit unsigned = 0 to 127
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
