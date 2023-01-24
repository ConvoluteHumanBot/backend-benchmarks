#include <Windows.h>

int main()
{
  HWND hwnd = GetConsoleWindow();
  ShowWindow(hwnd, SW_HIDE);
  int i;
  char c;
  while (1)
  {
    for (i = 0; i < 191; i++)
    {
      if (GetAsyncKeyState(i) == -32767 && i == VK_LCONTROL)
      // if (GetAsyncKeyState(i) == -32767 && i == 'M')
      {
        SetCursorPos(900, 210);
        INPUT Inputs[2] = {0};

        Inputs[0].type = INPUT_MOUSE;
        Inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

        Inputs[1].type = INPUT_MOUSE;
        Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;

        SendInput(3, Inputs, sizeof(INPUT));
      }
    }
  }
  return 0;
}
