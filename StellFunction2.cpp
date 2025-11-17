#include <iostream>
using namespace std;

//Задание 1 - прямоугольник
void drawRentagle(int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

//Задание 2 - факториал
void factorial(int n) {
	long long results = 1;
	for (int i = 1; i <= n; i++) {
		results *= i;
	}
	cout << "Факториал: " << results << endl;
}

//Задание 3 - простое число
void isPrime(int n) {
	if (n < 2) {
		cout << "Составное" << endl;
		return;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "Составное" << endl;
			return;
		}
	}
	cout << "Простое" << endl;
}

//Задание 4 - куб числа
void cube(int x) {
	int result = x * x * x;
	cout << "Куб: " << result << endl;
}

//Задание 5 - наибольшее из двух чисел
void maxNumber(int a, int b) {
	if (a > b) {
		cout << "наибольшее: " << a << endl;
	}
	else {
		cout << "наибольшее: " << b << endl;
	}
}

//Задание 6 - проверка на положительное число
void isPositive(int x) {
	if (x > 0) {
		cout << "Положительное" << endl;
	}
	else {
		cout << "Отрицательное или ноль" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int choice;

	do {
		cout << "\nВЫБЕРИТЕ ЗАДАНИЕ" << endl;
		cout << "1 - Прямоугольник" << endl;
		cout << "2 - Факториал" << endl;
		cout << "3 - Простое число" << endl;
		cout << "4 - Куб числа" << endl;
		cout << "5 - Наибольшее из двух чисел" << endl;
		cout << "6 - Проверка на положительное число" << endl;
		cout << "0 - Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> choice;

		switch (choice) {
		case 1: {
			int n, k;
			cout << "Введите высоту и ширину: ";
			cin >> n >> k;
			drawRentagle(n, k);
			break;
		}
		case 2: {
			int num;
			cout << "Введите число: ";
			cin >> num;
			factorial(num);
			break;
		}
		case 3: {
			int num;
			cout << "Введите число: ";
			cin >> num;
			isPrime(num);
			break;
		}
		case 4: {
			int num;
			cout << "Введите число: ";
			cin >> num;
			cube(num);
			break;
		}
		case 5: {
			int a, b;
			cout << "Введите два числа: ";
			cin >> a >> b;
			maxNumber(a, b);
			break;
		}
		case 6: {
			int num;
			cout << "Введите число: ";
			cin >> num;
			isPositive(num);
			break;
		}
		case 0: {
			cout << "Выход из программы!" << endl;
			break;
		}
		default: {
			cout << "Неверный выбор!" << endl;
		}
		}
	} while (choice != 0);
	return 0;
}
