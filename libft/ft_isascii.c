#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (_SUCCESS_);
	return (_ERROR_);
}
