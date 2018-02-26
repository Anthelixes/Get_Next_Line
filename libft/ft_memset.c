#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ret;

	ret = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (n > 0)
	{
		n--;
		ret[n] = (unsigned char)c;
	}
	s = (void *)ret;
	return (s);
}
