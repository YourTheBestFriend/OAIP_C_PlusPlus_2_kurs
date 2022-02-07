#include "MyForm.h" // Подключаю оконную форму MyForm.h
#include "MyForm1.h" // Подключаю оконную форму MyForm1.h

using namespace form1;
void MyForm::button1_Click(Object^ sender, EventArgs^ e)
{
	MyForm1^ f = gcnew MyForm1(gcnew MyDelegate(this, &MyForm::GetData));//передается 2 параметра
	f->ShowDialog();//окно f откроется как МОДАЛЬНОЕ окно, а если f->Show();//окно f откроется  как НЕмодальное окно
}