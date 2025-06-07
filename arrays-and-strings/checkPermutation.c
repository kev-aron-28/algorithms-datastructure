#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char * string1 = "abc";
  char * string2 = "cba";

  char hashChar[128] = { 0 };

  for (size_t i = 0; i < strlen(string1); i++)
  {
    int currentCharCode = string1[i];
    if(!hashChar[currentCharCode]) {
      hashChar[currentCharCode] = 1;
    } else {
      hashChar[currentCharCode] += 1;
    }
  }

  for (size_t i = 0; i < strlen(string2); i++)
  {
    int currentCharCode = string2[i];

    if(!hashChar[currentCharCode]) {
      hashChar[currentCharCode] = 0;
    } else {
      hashChar[currentCharCode] -= 1;
    }
  }

  for (size_t i = 0; i < 128; i++)
  {
    if(hashChar[i] ) {
      printf("NOT PERMUTATION");

      return 1;
    }
  }
  
  printf("IS A PERMUTATION");
  
  return 0;
}
