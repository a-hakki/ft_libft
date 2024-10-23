#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i = n - 1;
    unsigned char    *ptr = (unsigned char *)dest;
    unsigned const char    *ptr2 = (unsigned const char *)src;

    if (ptr < ptr2)
        ft_memcpy(ptr, ptr2, n);
    else
    {
        while (i < n)
        {
            ptr[i] = ptr2[i];    
            i--;    
        }
    }
    return  ptr;
}
/*
int main()
{
    // char dest[] = "";
    char src[]= "hello world!";
    size_t i = 8;

    ft_memmove(src + 3, src, i);
    printf("%s\n", src);
    memmove(src + 3, src, i);
    printf("%s", src);

}*/