#include "RegistrationForm.h"
#include <string>
#include <fstream>
#include <Windows.h>
#include <queue> 
#include <vector>
#include <string>

using namespace Kursach;


[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RegistrationForm()); // RegistrationForm
	return 0;
}