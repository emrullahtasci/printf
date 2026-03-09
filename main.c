#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s\n", "42");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hex: %x\n", 255);
	ft_printf("Percent: %%\n");
	ft_printf("Unknown: %k\n");
}

