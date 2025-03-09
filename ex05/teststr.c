#include <unistd.h>

void ft_putstr(char *str)
{
	int	i = 3;
        write(1, &str[i], 1); // 输出当前字符
    
}

int	main (void)
{
	ft_putstr("hi there!!!");
	return (0);
}
