#include "Downlands.h"
#include "MyForm.h"
namespace Eng
{
	System::Void Downlands::Tof() {
		MyForm^ f = gcnew MyForm(this);
		f->Show();
		this->Hide();
	}

}
