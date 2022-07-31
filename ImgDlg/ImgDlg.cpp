  // ImgDlg.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "ImgDlg.h"

#include <gdiplus.h>
#pragma comment(lib, "gdiplus")
using namespace Gdiplus;

INT_PTR CALLBACK DIgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetWindowPos(hDlg, HWND_TOP, 0, 0, 800, 600, NULL);
        return (INT_PTR)TRUE;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hDlg, &ps);
        Graphics gp(hdc);
        Image img = TEXT("img1.jpg");
        gp.DrawImage(&img, 0, 0, 800, 600);
        EndPaint(hDlg, &ps);
    }
    return TRUE;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    ULONG_PTR up;
    GdiplusStartupInput gpsi;
    GdiplusStartup(&up, &gpsi, NULL);

    
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DIgProc);

    GdiplusShutdown(up);
}



// 정보 대화 상자의 메시지 처리기입니다.