#include <stdio.h>

int ft_strncmp(const char *s, const char *s2, size_t n)
{
    int num_compared;

    num_compared = 0;
    while (*s && *s2 && num_compared < n )
    {
        if (*s != *s2)
        {
            return *s - *s2;
        }
        s++;
        s2++;
        num_compared++;
    }
    return 0;
}
