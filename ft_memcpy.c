#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char    *ptr = (unsigned char *)dest;
    unsigned const char    *ptr2 = (unsigned const char *)src;

    while (i < n)
    {
        ptr[i] = ptr2[i];    
        i++;    
    }
    ptr[i] = '\0';
    return  ptr;
}

/*int main()
{
    char dest[] = "";
    const char src[]= "hello world!";
    size_t i = 8;

    ft_memcpy(dest, src, i);
    printf("%s", dest);
}*/