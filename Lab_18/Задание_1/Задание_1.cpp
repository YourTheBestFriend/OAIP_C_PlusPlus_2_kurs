#include <iostream>
#include <Windows.h>
using namespace std;
void sortSHell(int*, int);
void sortMETDvStavok(char*, int);
bool search(int*, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int f = 20;
	const int in = 2;
	struct WORKER
	{
		char familia[f], iniciali[in];
		int years_go_work;
	};
	int size = 0; // Для дальнейшего теста (просто чтобы не создать структуру)
	/*cout << "Введите размер массива со структурами: ";
	cin >> size;*/
	WORKER* people = new WORKER[size];
	if (people == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Введите Фамилию: ";
		cin >> people[i].familia;
		cout << "Введите год работы";
		cin >> people[i].years_go_work;
	}
	//####################################################################################
	////// СОРТИРОВКА ПО СТАЖУ РАБОТЫ ПО УБЫВАНИЮ////////////////////////////////////////
	// Для удобства тестирования сортировок можно явно проинициализировать массив
	int n = 10;
	int* array = new int[n] {4,1,5,6,7,8,2,3,9}; // Года работы
	if (array == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < n; i++) // печать до сортировки Шелла
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << "Сортировка лет работы по убыванию:" << endl;
	sortSHell(array, n);
	for (int i = 0; i < n; i++) // печать после сортировки Шелла
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	delete[] people;
	people = NULL;
	delete[] array;
	array = NULL;
	//####################################################################################
	// След. задание
	//####################################################################################
	////// СОРТИРОВКА ФАМИЛИЙ ПО ВОЗРАСТАНИЮ//////////////////////////////////////////////
	// Для удобства тестирования сортировок можно явно проинициализировать массив
	int d = 10;
	char* arr = new char[d] {'s','e','a','r','g','h','k','x','l','v'}; // Сортировка по букве ФАМИЛИИ
	if (arr == NULL)
	{
		cout << "No Memory" << endl;
		system("pause");
		return 0;
	}
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < d; i++) // печать до сортировки Шелла
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "Сортировка букв фамилий по возрастанию:" << endl;
	sortMETDvStavok(arr,d);
	for (int i = 0; i < d; i++) // печать после сортировки Шелла
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	delete[] arr;
	arr = NULL;
	//####################################################################################

	//####################################################################################
	// След. задание
	//####################################################################################
	////// функиця search по номеру группы(по ключу в структуре)//////////////////////////////////////////////
	
	struct group 
	{
		int number;
	};
	const int h = 5;
	group num[h]; // для 5 групп
	num[0].number = 991;
	num[1].number = 992;
	num[2].number = 993;
	num[3].number = 994;
	num[4].number = 995;
	int mas[h] = { num[0].number,num[1].number,num[2].number,num[3].number,num[4].number };
	cout << "До сортировки:" << endl;
	for (int i = 0; i < h; i++)
	{
		cout << mas[i] << ' ';
	}
	
	if (search(mas, h) == true)
	{
		cout << "Такое число есть:" << endl;
	}
	else
	{
		cout << "Такое число не нашлось:" << endl;
	}
	
	system("pause");
	return 0;
}

//1111111.1111111111
void sortSHell(int* people, int size) // Функция по сортировке Шелла по убыванию
{
	for (int i = size / 2; i > 0 ; i /=2)
	{
		for (int j = 0; j < size-i; j++)
		{
			for (int k = j; k > -1; k-=i)
			{
				if (people[k] < people[k + i]) // < - убывание, > - djphfcnfybt
				{
					int t = people[k];
					people[k] = people[k + i];
					people[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}

}

//1111111111111.2222222222
void sortMETDvStavok(char* arr, int num) // Сортировка методом вставок
{
	for (int i = 1; i < num; i++)
	{
		char t = arr[i];
		for (int j = i-1; j > -1 && t < arr[j]; j--)
		{
			arr[j + 1] = arr[j];
			arr[j] = t;
		}
	}
}

// 33333333333333333333333333333333
bool search(int *num, int h)
{
	int p,x;
	cout << "Введите число для поиска: " << endl;
	cin >> x;
	cout << "Выберите поиск:\n1.Последовательный\n2.Бинарный\nВведите: ";
	cin >> p;
	switch (p)
	{
		case 1:
			for (int i = 0; i < h; i++)
			{
				if (num[i] == x)
				{
					cout << "Найдено Последовательным поиском: " << endl;
					cout << num[i] << ' ' << endl;
					return true;
				}
			}
			return false;
		case 2:
			// Сначало сортировка
			for (int i = 0; i < h - 1; i++)
			{
				for (int j = 0; j < h - 1 - i; j++)
				{
					if (num[j] > num[j + 1])
					{
						int t = num[j];
						num[j] = num[j + 1];
						num[j + 1] = t;
					}
				}
			}
			cout << "Сортировка произведена: " << endl;
			int low = num[0], high = num[h - 1], middle = (low + high) / 2;
			cout << "Найдено Бинарным поиском: " << endl;
			// нахождение бинарным поиском
			while (high >= low)
			{

				if (middle == x)
				{
					return true;
				}
				else
				{
					if (x > middle)
					{
						low = middle + 1;
					}
					else
					{
						high = middle - 1;
					}
					middle = (low + high) / 2;
				}
			}
	}
	return false;
}



