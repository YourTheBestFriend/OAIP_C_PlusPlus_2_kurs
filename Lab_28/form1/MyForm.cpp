#include "MyForm.h" // ��������� ������� ����� MyForm.h
#include "MyForm1.h" // ��������� ������� ����� MyForm1.h

using namespace form1;
void MyForm::button1_Click(Object^ sender, EventArgs^ e)
{
	MyForm1^ f = gcnew MyForm1(gcnew MyDelegate(this, &MyForm::GetData));//���������� 2 ���������
	f->ShowDialog();//���� f ��������� ��� ��������� ����, � ���� f->Show();//���� f ���������  ��� ����������� ����
}