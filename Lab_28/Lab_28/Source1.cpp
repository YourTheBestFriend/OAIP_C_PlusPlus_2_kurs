#include <iostream>
#include <stdexcept> // Содержит определения ошбок std::logic_error, std::runtime_error и всех ошибок, от них унаследованных
#include <exception> // Сожержит определения ошибок std::bad_exception, std::bad_alloc
#include <typeinfo> // содержит определения ошибок std::bad_cast и std::bas_typeid
#include <Windows.h>
#include <Map>
#include <cmath>
//#include <new>
#include <complex> // Для работы с комплексными числами - Для R3

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b, h;
	cout << "Введите диапазон x[a,b] с шагом h: \n" << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "h: ";
	cin >> h;
	cout << "y(x)\n";
	// Смена значений местами - Понравился способ через - xor(^)
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (int x = a; x < b; x+=h) // x[a,b] с шагом h
	{
		try
		{
			if (x <= 1) // Если меньше 1 то меняю например на 2, так как в чисителе по условию будет извлекаться корень из отрицательного числа, а это невозможно
			{ 
				throw 2; // Для исскустве нной ошибки
			}
			double y = sqrt(pow(x, 3) - 1) / sqrt(pow(x, 2) - 1); // Само выражение (тут x не может быть отрицательным)
			cout << y << "\n";
		}
		catch(int)
		{
			cout << "error - x не может быть отрицательным (!<0), !=0 & != 1" << endl;
		}
		// Попробовал чисто на интерес тоже с int впихнуть - ошибка а если другое - норм
		/*catch (char)
		{
			cout << "error - прикол" << endl;
		}*/
		catch (std::logic_error x) // Подвиды исключения std::logic_error: std::logic_error & std:out_of_range & std::length_error & std::invalid_argument & std::domain_error
		{
			cout << "Дошло до std::logic_error при обработке" << x.what();
		}
		catch (std::runtime_error x) // Подвиды исключения std::runtime_error: std::range_error & std::overflow_error & std::underflow_error
		{
			cout << "Дошло до std::runtime_error при обработке " << x.what();
		}
		// finally которое не работает хз почему
		
		//finally // почему то поддчеркивает и выводит ошибку
		//{
		//	cout << "test" << endl;
		//}
	}
	// Тут след задание СХЕМУ на этом закончил

	cout << "____Следующие задание____" << endl;
	bool f = true;
	while (f)
	{
		if (f != true) 
		{
			break;
		}
		// Tan(R2%R1) / R1 + Cmod(R3)
		// Деление на 0 (будет ошибка)
		int R1, R2, deistv_chast_R3, mnimaya_chast_R3;
		double rezult_deistv;
		cout << "R1: ";
		cin >> R1;
		cout << "R2: ";
		cin >> R2;
		//////////////////////////////////////////////////////////////////////////////////////////////////// Работа с Комплексными числами
		cout << "Комплексное число:\n" << "действительная часть: ";
		cin >> deistv_chast_R3;
		cout << "мнимая чать: ";
		cin >> mnimaya_chast_R3;
		complex <int> R3(deistv_chast_R3, mnimaya_chast_R3);
		//////////////////////////////////////////////////////////////////////////////////////////////////// Проверка на исключения 
		try
		{
			if (R1 == 0)
			{
				throw 1;
			}
			// Действительня складывается с действительной мнимая с мнимой
			rezult_deistv = tan(R2 % R1) / R1 + R3.real();
			cout << "rezult: " << rezult_deistv << " + " << R3.imag() << "i" << endl;  // Соединенное комплексное число
		}
		catch (int)
		{
			cout << "Ошибка! R1 не может равняться 0" << endl; 
		}
		catch (...)
		{
			cout << "Дошло до - универсального исключения" << endl;
		}
		// И опять finally не хочет работать

		/*finally
		{
			cout << "";
		}*/
		int flag_f;
		cout << "Хотите продолжить?: 0 - Нет (Любое другое) - Да: ";
		cin >> flag_f;
		if (flag_f == 0)
		{
			f = false;
		}
		else
		{
			continue;
		}
		
	}

	// dict C++
	/*int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";*/
	// map < <L>, <R> > <имя>; L - тип данных ключа R - тип данных зачения
	/*map <string, int> mp;  

	mp["key"] = 12;
	mp["key2"] = 15;

	cout << mp["key"] << ' ' << mp["key2"] << endl;*/
	
	system("pause");
	return 0;
}
