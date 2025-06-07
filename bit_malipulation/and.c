#include <stdio.h>

// Used to clear bits

int main(int argc, char const *argv[])
{
  int a = 5; // 0101
  int b = 1; // 0001

  printf("%d\n", a & b);
  return 0;
}

