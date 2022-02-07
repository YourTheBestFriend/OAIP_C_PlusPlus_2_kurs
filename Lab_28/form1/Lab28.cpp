#include "MyForm.h"//подключаем оконную форму MyForm
#include <Windows.h>
using namespace form1;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());//вызываем конструктор MyForm() и создаем динамический управл€емый —борщиком мусора объект
	return 0;
}