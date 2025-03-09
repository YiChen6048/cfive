#include <stdio.h>

int ft_strlen(char *str)
{
        int count = 0;

        while (str[count] != '\0')
        {
                count++;
        }

        return count;
}

int main()
{
        printf("Length: %d\n",ft_strlen("Hello, World!"));
        return 0;
}

