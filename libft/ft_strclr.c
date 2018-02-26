#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	while (i--)
		s[i] = '\0';
}
