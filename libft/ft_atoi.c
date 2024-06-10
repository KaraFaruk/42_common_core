#include "libft.h"

// ft_atoi: Bir dizi karakteri (string) tam sayıya çeviren fonksiyon
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result * sign);
}