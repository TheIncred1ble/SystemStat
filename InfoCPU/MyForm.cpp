#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	InfoCPU::MyForm form;

	Application::Run(% form);

}