#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (_SUCCESS_);
	return (_ERROR_);
}
