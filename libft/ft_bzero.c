#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			ret[i] = '\0';
			i++;
		}
	}
}
