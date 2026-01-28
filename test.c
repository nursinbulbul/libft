
#include <string.h>
#include <stdio.h>


void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    
    const unsigned char *temp;
    temp = src;
    unsigned char *temp2;
    temp2 = dest;
    
    while (i < n)
    {
        temp2[i] = temp[i];
        i++;
        
    }
    
    return((void *)dest);
}


int main()
{
  char dest[] = "yusufcengizx";
  char dest2[] = "yusufcengizx";
  char dest3[] = "yusufcengizx";

  ft_memcpy(dest3 + 1,dest3,9);
  memcpy(dest + 1,dest,9);
  memmove(dest2 + 1 ,dest2,9);
  printf("%s \n%s \n%s",dest,dest2,dest3);

}