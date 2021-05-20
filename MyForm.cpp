#include "MyForm.h"
#include <Windows.h>
using namespace Eng; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Downlands);
	return 0;
}

