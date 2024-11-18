#include <iostream>
#include <iomanip>

using namespace std;

int qw4(int n)
{
	if (n <= 0) return 1;
	return n * qw4(n - 1);
}

int qw5(int a, int b)
{
	while (b != 0)
	{
		int qwer = b;
		b = a % b;
		a = qwer;
	}
	return a;
}

int qw10(int* arr, int size) {
	int sm10 = 0;
	for (int q10 = 0; q10 < size; q10++) 
	{
		sm10 += arr[q10];
	}
	return sm10;
}

void qw11(int* arr, int size) {
	int* st = arr;
	int* nd = arr + size - 1;

	while (st < nd) 
	{
		int qwer11 = *st;
		*st = *nd;
		*nd = qwer11;

		st++;
		nd--;
	}
}

int qw14(int a, int b) {
	int array = (a + b) / 2;

	return array;
}

int qw15(int n){
	if (n <= 0) 
	{
		return 0;
	}
	else if (n == 1) 
	{
		return 1;
	}
	else 
	{
		return qw15(n - 1) + qw15(n - 2);
	}
}

double qw16(int* arr, int size) {
	if (size <= 0)
	{
		return 0;
	}

	int sm16 = 0;
	for (int i = 0; i < size; i++)
	{
		sm16 += arr[i];
	}

	return static_cast<double>(sm16) / size;
}

bool qwr17(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

bool qwt17(char c) {
	c = tolower(c);
	return (c >= 'a' && c <= 'z' && !qwr17(c));
}


int main()

{

	setlocale(LC_ALL, "RU");

	int x;
	cout << "Введите номер задания:";
	cin >> x;

	

	switch (x)
	{

	case 1:
	{

		double nmbrs{};
		cout << "Введите число с плавующей запятой:";
		cin >> nmbrs;

		cout << scientific << setprecision(6) << nmbrs << endl;

	}	break;

	case 2:
	{
		int num;

		std::cout << "Введите число:";
		std::cin >> num;

		if (num % 2 == 0)
		{
			std::cout << "Число: " << num << ", является четным." << std::endl;
		}
		else
		{
			std::cout << "Число: " << num << ", является нечетным." << std::endl;
		}

		return 0;
	}	break;

	case 3:
	{
		int nm;
		bool st = true;

		std::cout << "Введите число:";
		std::cin >> nm;

		if (nm < 2)
		{
			st = false;
		}
		else
		{
			for (int i = 2; i < nm; i++)
			{
				if (nm % i == 0)
				{
					st = false;
					break;
				}
			}
		}

		if (st)
		{
			std::cout << "Число: " << nm << ", является простым." << std::endl;
		}
		else
		{
			std::cout << "Число: " << nm << ", не является простым." << std::endl;
		}
	}	break;

	case 4:
	{
		int c{};
		cout << "Введите число:";
		cin >> c;
		cout << "Факториал числа: " << qw4(c);

	}	break;

	case 5:
	{
		int q{}, w{}, qwe{};
		cout << "Введите первое число:" << endl;
		cin >> q;
		cout << "Введите второе число" << endl;
		cin >> w;

		qwe = qw5(q, w);
		cout << "НОД чисел:" << q << " и " << w << " равен " << qwe << endl;
	}	break;

	case 6:
	{
		cout << "Таблица умножения от 1 до 10: ";	

		for (int x = 1; x <= 10; x++) {
			for (int xs = 1; xs <= 10; xs++) {
				cout << x * xs << "\t";
			}
			cout << endl;
		}
	}	break;

	case 7:
	{
		int q7{}, sm{};
		cout << "Введите число N:" << endl;
		cin >> q7;

		for (int w7 = 1; w7 <= q7; w7++) 
		{
			sm += w7;
			++w7;
		}

		cout << "Cумма чисел от 1 до N равна: " << sm;
	}	break;

	case 8:
	{
		int q8{}, w8{};
		char qwer8{};
		cout << "Введите первое число:" << endl;
		cin >> q8;
		cout << "Введите вид вычисления:(+,-,*,/)" << endl;
		cin >> qwer8;
		cout << "Введите второе число:" << endl;
		cin >> w8;


		switch (qwer8) {
		case '+':
			cout << "Результат: " << (q8 + w8) << endl;
			break;
		case '-':
			cout << "Результат: " << (q8 - w8) << endl;
			break;
		case '*':
			cout << "Результат: " << (q8 * w8) << endl;
			break;
		case '/':
			if (w8 != 0) {
				cout << "Результат: " << (q8 / w8) << endl;
			}
			else {
				cout << "Ошибка, деление на ноль невозможно!" << endl;
			}
			break;
		default:
			cout << "Не корректный оператор!" << endl;
		}
	}   break;

	case 9:
	{
		int q9{};
		cout << "Введите число дня недели" << endl;
		cin >> q9;

		switch (q9) {
		case 1:
			cout << "День недели - Понедельник" << endl;
			break;
		case 2:
			cout << "День недели - Вторник" << endl;
			break;
		case 3:
			cout << "День недели - Среда" << endl;
			break;
		case 4:
			cout << "День недели - Четверг" << endl;
			break;
		case 5:
			cout << "День недели - Пятница" << endl;
			break;
		case 6:
			cout << "День недели - Суббота" << endl;
			break;
		case 7:
			cout << "День недели - Воскресенье" << endl;
			break;
		default:
			cout << "Неверный ввод значения!" << endl;
		}

	}   break;

	case 10:
	{
		int size;
		cout << "Введите размер массива:" << endl;
		cin >> size;

		int * arr = new int[size];

		cout << "Введите элементы массива:" << endl;
		for (int i = 0; i < size; i++) 
		{
			cin >> arr[i];
		}

		cout << "Итоговый массив: " << endl;
		for (int i = 0; i < size; i++) 
		{
			cout << arr[i] << " ";
		}

		int totalSum = qw10(arr, size);
		cout << "\n" << "Сумма всех элементов массива равна:" << totalSum << endl;

	}   break;

	case 11:
	{
		int size;
		cout << "Введите размер массива:" << endl;
		cin >> size;

		int* arr = new int[size];

		cout << "Введите элементы массива:" << endl;
		for (int i = 0; i < size; i++) 
		{
			cin >> arr[i];
		}

		cout << "Итоговый массив: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		qw11(arr, size);

		cout << "Реверсированый массив:" << std::endl;
		for (int i = 0; i < size; i++) 
		{
			cout << arr[i] << " ";
		}

	}   break;

	case 12:
	{
		int size;
		cout << "Введите размер массива:" << endl;
		cin >> size;

		int* arr = new int[size];

		cout << "Введите элементы массива:" << endl;
		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}

		cout << "Итоговый массив: " << endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

		int min = arr[0];
		int max = arr[0];

		for (int i = 1; i < size; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
			if (arr[i] > max) {
				max = arr[i];
			}
		}

		cout << "Минимальное значение: " << min << endl;
		cout << "Максимальное значение: " << max << endl;

	}   break;

	case 13:
	{
		int size;

		cout << "Введите количество строк: ";
		cin >> size;

		cin.ignore();
		char** arr = new char* [size];

		cout << "Введите строки:" << endl;
		for (int i = 0; i < size; i++) 
		{
			arr[i] = new char[100];
			cin.get(arr[i], 100);
			cin.ignore();
		}


		for (int i = 0; i < size - 1; i++) 
		{
			for (int j = 0; j < size - 1 - i; j++) 
			{
				if (strcmp(arr[j], arr[j + 1]) > 0) 
				{
					char* temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

		cout << "Отсортированные строки:" << endl;
		for (int i = 0; i < size; i++) 
		{
			cout << arr[i] << endl;
		}
	}   break;

	case 14:
	{
		int q14{}, w14{}, qwe14{};
		cout << "первое число:" << endl;
		cin >> q14;
		cout << "второе число:" << endl;
		cin >> w14;

		qwe14 = qw14(q14, w14);

		cout << "Средннее значение: " << qwe14 << endl;

	}   break;

	case 15:
	{
		int q15;

		cout << "Введите номер числа Фибоначчи:";
		cin >> q15;

		if (q15 < 0) {
			cout << "Введите неотрицательное число:" << endl;
		}
		else {
			cout << "Число Фибоначчи под номером: " << q15 << " равно " << qw15(q15) << endl;
		}
	}   break;

	case 16:
	{
		int sr16;

		cout << "Введите размер массива: " << endl;
		cin >> sr16;

		if (sr16 <= 0)
		{
			cout << "Размер массива должен быть положительным:" << endl;
			return 1;
		}

		int* arr = new int[sr16];

		cout << "Введите элементы массива:" << endl;
		for (int i = 0; i < sr16; ++i)
		{
			cin >> arr[i];
		}

		double over = qw16(arr, sr16);
		cout << "Среднее значение массива:" << over << endl;
	}	break;

	case 17:
	{
		const int mx_ln = 100;
		char str[mx_ln];

		cin.ignore();

		cout << "Введите строку:";
		cin.getline(str, mx_ln);

		int qw17 = 0;
		int qwe17 = 0;

		for (int i = 0; str[i] != '\0'; ++i)
		{
			char c = str[i];
			if (qwr17(c))
			{
				qw17++;
			}
			else if (qwt17(c))
			{
				qwe17++;
			}
		}

		cout << "Колличество гласных:" << qw17 << endl;
		cout << "Количество согласных:" << qwe17 << endl;
	}	break;

		default:
		break;
	}
}