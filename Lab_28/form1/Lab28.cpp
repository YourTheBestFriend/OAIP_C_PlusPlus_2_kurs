#include "MyForm.h"//���������� ������� ����� MyForm
#include <Windows.h>
using namespace form1;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());//�������� ����������� MyForm() � ������� ������������ ����������� ��������� ������ ������
	return 0;
}