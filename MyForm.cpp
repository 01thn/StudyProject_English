#include "MyForm.h"
#include <Windows.h>
using namespace Eng; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Downlands);
	return 0;
}

