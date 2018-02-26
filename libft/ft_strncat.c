#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		size;
	int		cpt;

	cpt = 0;
	size = ft_strlen(s1);
	while (s2[cpt] && n--)
		s1[size++] = s2[cpt++];
	s1[size] = '\0';
	return (s1);
}
