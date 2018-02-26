#include "libft.h"

int		ft_power(int nb, int pow)
{
	int x;

	x = nb;
	while (pow > 1)
	{
		nb *= x;
		pow--;
	}
	return (nb);
}
