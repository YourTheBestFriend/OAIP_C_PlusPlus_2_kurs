#include "MyForm1.h"
#include "MyForm.h"

using namespace form1;

MyForm1::MyForm1(MyDelegate^ sender)//������������� ������������ ��� �������� ������ Form2
{
	InitializeComponent();//����� InitializeComponent() � ������������� ������ ������ ������ ����������
	deleg = sender;//deleg - ��� �������� ���� ���� �������� (������ �� �����), ������������������ � ����� MyForm1.h: private: MyDelegate^ deleg;
}
void MyForm1::button1_Click(Object^ sender, EventArgs^ e)//������������� ������ button1_Click() ��� ������� ����� MyForm1
{
	deleg(textBox1->Text);//�������� ������� � �������� ��� ������ �������� �� ���������1. ������� ������� �����& Form1::GetData(String ^ param), ������� ����������� ������ �������� �������� � ���� ����������1 ������� ����� MyForm
}