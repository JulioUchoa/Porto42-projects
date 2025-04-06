#include <stdlib.h>

int ft_strlen(char *str)
{
   int i;

   i = 0;
   while (str[i] != '\0')
   {
      i++;
   }
   return (i);
}

char *ft_strdup(char *src)
{
   int i;
   char *dest;

   dest = malloc(ft_strlen(src) * (sizeof(char)+1));
   if (dest == NULL)
       return ("error");
   i = 0;
   while (src[i] != '\0')
   {
     dest[i] = src[i];
     i++;
   }
   dest[i] = '\0';
   return (dest);
      
}

#include <stdio.h>
int main(void)
{
  char *palavra;
  char *duplica;

  palavra = "bitcoin";
  ft_strlen(palavra);
  duplica = ft_strdup(palavra);
  printf("%s", duplica);
  free(duplica);
  return (1);
}

