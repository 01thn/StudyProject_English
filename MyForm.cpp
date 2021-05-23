#include "MyForm.h"
#include"Song.h"

#include <Windows.h>
namespace Eng
{
	System::Void MyForm::SongClose() {
		Song^ f = gcnew Song();
		f->Hide();
		f->playerStop();
	}

}
using namespace Eng; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Downlands);
	return 0;
}

