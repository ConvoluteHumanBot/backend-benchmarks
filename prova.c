#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
  HWND hwnd = GetConsoleWindow();
  ShowWindow(hwnd, SW_HIDE);
  int i;
  // int j = 0;
  // int x = 0;
  // clock_t t1 = clock();
  // int b[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  // printf("Inizio\n");
  // for (i = 0; i < 10000; i++)
  // {
  //   for (j = 0; j < 10000; j++)
  //   {

  //     x = (i % (j + 1));
  //     b[(x % 17)] = x;
  //   }
  // }
  char c;
  while (1)
  {
    for (i = 0; i < 191; i++)
    {
      if (GetAsyncKeyState(i) == -32767 && i == 'M')
      {
        SetCursorPos(800, 500);
      }
    }
  }
  // printf("Tempo passato: %f", (float)(clock() - t1) / 1000);

  return 0;
}
