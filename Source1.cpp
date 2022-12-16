
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h> 
using namespace std;
//LRESULT WINAPI WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
//{
//    switch (msg) {
//    case WM_CREATE: { 
//        HWND hBtn = CreateWindow(
//            L"BUTTON",
//            L"click here",
//            WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,  // Styles 
//            0,
//            0,
//            100,
//            100,
//            hwnd,
//            NULL,
//            NULL,
//            NULL);  break;
//
//    }
//    case WM_DESTROY: {
//        PostQuitMessage(0);
//        break;
//    }
//    default:
//        return DefWindowProc(hwnd, msg, wparam, lparam);
//    }
//}
void pushX(int num) {
    for (int i = 0; i < num; i++)
        cout << " ";

}
void q1()
{

    for (int i = 0; i < 2222; i++) {
        for (int j = 0; j < 150; j++) {
            system("CLS");

            pushX(j); if (j % 2 != 0)  printf("\033[32;5m      *\n \033[m");
            else printf("\033[31;5m      *\n \033[m");
            pushX(j); if (j % 2 != 0) printf("\033[35;5m    ***\n \033[m");
            else  printf("\033[94;5m    ***\n \033[m");
            pushX(j); if (j % 2 != 0) printf("\033[32;5m   *****\n \033[m");
            else printf("\033[31;5m   *****\n \033[m");
            pushX(j); if (j % 2 != 0)printf("\033[35;5m  *******\n \033[m");
            else printf("\033[94;5m  *******\n \033[m");
            pushX(j); if (j % 2 != 0) printf("\033[32;5m *********\n \033[m");
            else printf("\033[31;5m *********\n \033[m");
            pushX(j); if (j % 2 != 0) printf("\033[35;5m    **    \n \033[m");
            else printf("\033[94;5m    **    \n \033[m");
        }
        Sleep(10);
    }


}



int main() {

    q1();
    return 0;
}