#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	i = 0;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	while (c_s1[i] != '\0' && c_s2[i] != '\0' && c_s1[i] == c_s2[i])
		i++;
	return (c_s1[i] - c_s2[i]);
}
