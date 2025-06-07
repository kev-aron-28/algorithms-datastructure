#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char *string1 = "pale";
  char *string2 = "bake";

  char hashChar[128] = {0};

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
      hashChar[currentCharCode] = 1;
    } else {
      hashChar[currentCharCode] -= 1;
    }
  }

  int leftChars = 0;

  for (size_t i = 0; i < 128; i++)
  {
    int current = hashChar[i];

    if(current >= 1) leftChars++;
  }
  
  if(leftChars > 2) {
    printf("MORE THAN ONE MOVE AWAY");
  } else {
    printf("LESS THAN ONE MOVE AWAY");
  }

  return 0;
}
