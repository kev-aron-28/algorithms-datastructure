#include <stdio.h>
#include <string.h>

// Count the Frequency of Each Character:

// Use a hash map or an array (for fixed-size alphabets like ASCII) to store character counts.
// Check the Odd Counts:

// Count how many characters have an odd frequency.
// If more than one character has an odd frequency, the string is not a permutation of a palindrome.

int main(int argc, char const *argv[])
{
  char *string = "ccic";

  char hashChar[128] = {0};

  for (size_t i = 0; i < strlen(string); i++)
  {
    int currentCharCode = string[i];
    if(!hashChar[currentCharCode]) {
      hashChar[currentCharCode] = 1;
    } else {
      hashChar[currentCharCode] += 1;
    }
  }
  int oddOccurences = 0;

  
  for (size_t i = 0; i < 128; i++)
  {
    if(hashChar[i] % 2 != 0) {
      oddOccurences++;
    }
  }

  if(oddOccurences <= 1) {
    printf("IS PERMUTATION OF A PALINDROME");
  } else {
    printf("IS NOT A PERMUATION");
  }
  
  return 0;
}
