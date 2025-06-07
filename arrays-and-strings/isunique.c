#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

  int abc[127];
  
  char *string = "Cadena";

  for (size_t i = 0; i < strlen(string); i++)
  {
   int currentCharCode = string[i];

   if(abc[currentCharCode] == 1) {
    printf("REPITED CHARS");
    return 1;
   }

   abc[currentCharCode] = 1;
  }
  
  printf("NO REPITED CHARS");
  return 0;
}
