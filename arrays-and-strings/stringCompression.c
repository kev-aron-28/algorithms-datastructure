#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

  char *string = "aabcccccaaa";

  int windowInit = 0;
  int windowFinish = 1;

  int counter = 0;
  while((windowInit < windowFinish) && windowFinish <= strlen(string)) {
    char currentChar = string[windowInit];

    char nextChar = string[windowFinish];
   
    if(currentChar == nextChar) {
      counter++;
      windowFinish++;
    } else {
      printf("%c%d", currentChar, counter + 1);
      counter = 0;
      windowInit = windowFinish;
      windowFinish++;
    }
  }

  return 0;
}

