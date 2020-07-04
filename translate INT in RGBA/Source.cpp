#include <stdio.h>
#include <math.h>
#include <cstdlib>


#define RAD 57.297

int main()
{
  char endP;
  short rgba[4][100000], r[8], g[8], b[8], a[8];
  int bifore = 104358, after = 0;
  while (true) {
    for (int i = 0; i < 8; i++) {//R - шифрование
      r[i] = bifore % 2;
      bifore = bifore / 2 - r[i];
    }
    rgba[0][0] = r[0] + (r[1] * 2) + (r[2] * 4) + (r[3] * 8) + (r[4] * 16) + (r[5] * 32) + (r[6] * 64) + (r[7] * 128);//запись в R
    for (int i = 0; i < 8; i++) {//G - шифрование
      r[i] = bifore % 2;
      bifore = bifore / 2 - r[i];
    }
    rgba[1][0] = r[0] + (r[1] * 2) + (r[2] * 4) + (r[3] * 8) + (r[4] * 16) + (r[5] * 32) + (r[6] * 64) + (r[7] * 128);//запись в G
    for (int i = 0; i < 8; i++) {//B - шифрование
      r[i] = bifore % 2;
      bifore = bifore / 2 - r[i];
    }
    rgba[2][0] = r[0] + (r[1] * 2) + (r[2] * 4) + (r[3] * 8) + (r[4] * 16) + (r[5] * 32) + (r[6] * 64) + (r[7] * 128);//запись в B
    for (int i = 0; i < 8; i++) {//A - шифрование
      r[i] = bifore % 2;
      bifore = bifore / 2 - r[i];
    }
    rgba[3][0] = r[0] + (r[1] * 2) + (r[2] * 4) + (r[3] * 8) + (r[4] * 16) + (r[5] * 32) + (r[6] * 64) + (r[7] * 128);//запись в A

    if (rgba[0][0] > 255 || rgba[1][0] > 255 || rgba[2][0] > 255 || rgba[3][0] > 255) { printf("Error!!! Durak! Memory!!!"); }
    else {
      for (int i = 0; i < 4; i++) {//Вывод
        printf("[%d] - ", i + 1);
        printf("%d\n", rgba[i][0]);
      }
    }
    if (false) {
      for (int i = 0; i < 8; i++) {
        printf("%d ", r[i]);
      }
      printf("\n");
      for (int i = 0; i < 8; i++) {
        printf("%d ", g[i]);
      }
      printf("\n");
      for (int i = 0; i < 8; i++) {
        printf("%d ", b[i]);
      }
      printf("\n");
      for (int i = 0; i < 8; i++) {
        printf("%d ", a[i]);
      }
      printf("\n");
    }

    if (false)
    {
      for (int i = 0; i < 8; i++) {
        after += pow(2 * r[7 - i], i);
        printf("r[%d] = %d\n", i, pow(2 * r[7 - i], i));
      }
      for (int i = 0; i < 8; i++) {
        after += pow(2 * g[7 - i], i * 2);
        printf("r[%d] = %d\n", i, pow(2 * g[7 - i], i * 2));
      }
      for (int i = 0; i < 8; i++) {
        after += pow(2 * b[7 - i], i * 3);
        printf("r[%d] = %d\n", i, pow(2 * b[7 - i], i * 3));
      }
      for (int i = 0; i < 8; i++) {
        after += pow(2 * a[7 - i], i * 4);
        printf("r[%d] = %d\n", i, pow(2 * a[7 - i], i * 4));
      }
    }

    printf("After = %d\n", after);
    printf("Vv END Char[y]: ");
    scanf_s("%c", &endP);
    if (endP == 'y') break;

    printf("Enter new number: ");
    scanf_s("%d", &bifore);
  }
  return 0;
}
