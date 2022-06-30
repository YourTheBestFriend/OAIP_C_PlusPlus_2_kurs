#define _CRT_SECURE_NO_WARNINGS // Для разрешения старых функций работы с символами и строками
#include <iostream>
#include <string.h> // Для обработки строк
#include <ctype.h> // Для обрабоки симвалов
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// setlocale(LC_ALL, "ru");
	string s;
	s = "So she was considering in her own mind, as well as she could,\
 for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy - chain would be worth the trouble\
of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her";
	
	// а
	int flag_glas_slov = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] == ' ') && ( (s[i - 1] == 'a') || (s[i - 1] == 'e') || (s[i - 1] == 'y') || (s[i - 1] == 'u') || (s[i - 1] == 'i') || (s[i - 1] == 'o')))
		{
			flag_glas_slov++;
		}
	}
	cout << flag_glas_slov << endl;

	// б
	int sredn_arifm = 0, colvo_sredn = 0;
	double otv = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?' && s[i] == '\0')
		{
			colvo_sredn++;
		}
		else
		{
			sredn_arifm++;
		}
	}
	otv = colvo_sredn / sredn_arifm;
	cout << "Средн: "<< otv << endl;
	// в
	int flag = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?')
		{
			flag++;
		}
		else
		{
			if (flag % 5 == 0)
			{
				cout << s[i];
			}
			cout << ' ';
		}
	}
	system("pause");
	return 0;
	
}
