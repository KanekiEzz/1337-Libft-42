/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:29:48 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/24 09:10:32 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char f(unsigned int n, char c)
// {
//     char k = c + n;
//     return ((k));
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && i < ft_strlen(s))
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[ft_strlen(s)] = '\0';
	return (ptr);
}

// int main ()
// {
//     char *ptr = ft_strmapi("abcd",f);
//     printf("%s\n", ptr);
// }