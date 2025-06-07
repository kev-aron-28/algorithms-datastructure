#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(int argc, char const *argv[])
{
  int matrix[2][2] = {
    { 2, 0 },
    { 0, 2 }
  };

  double angleRadians = -90 * (PI / 180.0);

  double rotationMatrix[2][2] = {
    { cos(angleRadians), -1 * sin(angleRadians) },
    { sin(angleRadians), cos(angleRadians) }
  };

  double rotatedMatrix[2][2];

  for (size_t i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
      rotatedMatrix[i][j] = 0;

      for (size_t k = 0; k < 2; k++)
      {
        rotatedMatrix[i][j] += rotationMatrix[i][k] * matrix[k][j];
      }
      
    }
    
  }
  

  printf("Rotated Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f ", rotatedMatrix[i][j]);
        }
        printf("\n");
    }


  return 0;
}
