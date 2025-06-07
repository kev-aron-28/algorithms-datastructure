#include <stdio.h>

int is_bit_set(int num, int pos) {
  return (num & (1 << pos)) != 0;
}

int set_bit(int num, int pos) {
  return num | (1 << pos);
}

int clear_bit(int num, int pos) {
  return num & ~(1 << pos);
}

int toggling_bit(int num, int pos) {
  return num ^ (1 << pos);
}

int count_set_bits(int num) {
  int count = 0;

  while(num) {
    num &= (num - 1); // Clears the rightmost bit
  }

  return count;
} 

int is_power_two(int num) {
  return num > 0 && (num & (num - 1 )) == 0;
}

int main(int argc, char const *argv[])
{
  printf("is bit set %d\n", is_bit_set(0b000, 2));
  return 0;
}

