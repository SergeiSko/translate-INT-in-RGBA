#include <stdio.h>
#include <math.h>
#include <cstdlib>


#define RAD 57.297

int main()
{
  //11001011110100110
  char endP;
  short rgba[4][100000], rgbaFirst[32];
  int r[8] = { 7,7,7,7,7,7,7,7 };
  int g[8] = { 7,7,7,7,7,7,7,7 };
  int b[8] = { 7,7,7,7,7,7,7,7 };
  int a[8] = { 7,7,7,7,7,7,7,7 };
  int bifore = 104358, after = 0, length=1, temp;
  while (true) {
    for (int i = 0; i < 32; i++) {//������� � �� 10� � 2�
      if (bifore != 0) length++;
      rgbaFirst[i] = bifore % 2;
      bifore = (bifore - rgbaFirst[i]) / 2;
    }
    if (rgba[0][0] > 255 || rgba[1][0] > 255 || rgba[2][0] > 255 || rgba[3][0] > 255) { printf("Error!!! Durak! Memory!!!"); }
    else {
      for (int i = 0; i < 8; i++)
      {
        length--;
        if (length > 0) {
          r[i] = rgbaFirst[length];
          printf("%d", rgbaFirst[length]);
        }
        else
        {
          r[i] = 7;
          printf("%d", 7);
        }
      }
      for (int i = 0; i < 8; i++)
      {
        length--;
        if (length > 0) {
          g[i] = rgbaFirst[length];
          printf("%d", rgbaFirst[length]);
        }
        else
        {
          g[i] = 7;
          printf("%d", 7);
        }
      }
      for (int i = 0; i < 8; i++)
      {
        length--;
        if (length > 0) {
          b[i] = rgbaFirst[length];
          printf("%d", rgbaFirst[length]);
        }
        else
        {
          b[i] = 7;
          printf("%d", 7);
        }
      }
      for (int i = 0; i < 8; i++)
      {
        length--;
        if (length > 0) {
          a[i] = rgbaFirst[length];
          printf("%d", rgbaFirst[length]);
        }
        else
        {
          a[i] = 7;
          printf("%d", 7);
        }
      }

      printf("\n");
      if(false)//RGBA ���� �� �����
      for(int i = 0; i < 1; i++)
      for (int i = 0; i < 4; i++) {//����� RGBA �������
        printf("[%d]: ", i + 1);
        printf("%d\n", rgba[i][0]);
      }
    }
    if (false) {
      for (int i = 0; i < 32; i++) {
        printf("%d ", rgbaFirst[i]);
      }
      printf("\n");
    }

    if (false)
    {
      for (int i = 0; i < 32; i++) {
        after += pow(2 * rgbaFirst[7 - i], i);
        printf("r[%d] = %d\n", i, pow(2 * rgbaFirst[7 - i], i));
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
