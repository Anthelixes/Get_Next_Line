#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dst;

	i = 0;
	size_dst = 0;
	while (dst[i] && i < size)
		i++;
	size_dst = i;
	while (src[i - size_dst] && i < size - 1)
	{
		dst[i] = src[i - size_dst];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (size_dst + ft_strlen(src));
}
