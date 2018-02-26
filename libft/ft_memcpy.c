#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (n == 0 || d == s)
		return ((void *)d);
	while (--n)
		*d++ = *s++;
	*d = *s;
	return (dst);
}
