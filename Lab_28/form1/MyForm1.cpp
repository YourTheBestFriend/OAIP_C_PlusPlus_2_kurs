#include "MyForm1.h"
#include "MyForm.h"

using namespace form1;

MyForm1::MyForm1(MyDelegate^ sender)//инициализация конструктора для объектов класса Form2
{
	InitializeComponent();//метод InitializeComponent() в конструкторах всегда пишите ПЕРВЫМ выражением
	deleg = sender;//deleg - это закрытое поле типа делегата (ссылки на метод), продекларированное в файле MyForm1.h: private: MyDelegate^ deleg;
}
void MyForm1::button1_Click(Object^ sender, EventArgs^ e)//инициализация метода button1_Click() для оконной формы MyForm1
{
	deleg(textBox1->Text);//вызываем делегат и передаем ему строку символов из тексБокса1. Делегат вызовет метод& Form1::GetData(String ^ param), который принимаемую строку символов поместит в поле текстБокса1 оконной формы MyForm
}