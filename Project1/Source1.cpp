#include<iostream>
#include<windows.h>
using namespace std;

int inputNumber() {   /*Ввод числа пользователем*/
	int number;
	cout << "Введите число: ";
	cin >> number;
	return number;
}

int degreeNumber() {    /*Степень числа*/
	int degree, x, y;
	cout << "Введите основание степени: ";
	cin >> x;
	cout << "Введите показатель степени: ";
	cin >> y;
	degree = pow(x, y);
	return degree;
}

int summNumber(int &x, int &y) {  /*Нахождение суммы чисел в заданном диапозоне*/
	int summ = 0;
	if (x < y) {
		for (int i = (x + 1); i < y; i++)
			summ += i;
	}
	else {
		for (int i = (y + 1); i < x; i++)
			summ += i;
	}
	return summ;
}

void perfectNumber(int &x, int &y) {  /*Определяем совершенное число*/
	int sum = 0;
	cout << "Совершенные числа, из заданного промежутка: ";
	if (x < y) {
		for (int i = x; i < (y + 1); i++) {
			for (int j = 1; j < i; j++) {
				if (i % j == 0)
					sum += j;
			}
			if (sum == i)
				cout << i << "\t";
			sum = 0;
		}
	}
	else {
		for (int i = y; i < (x + 1); i++) {
			for (int j = 1; j < i; j++) {
				if (i % j == 0)
					sum += j;
			}
			if (sum == i)
				cout << i << "\t";
			sum = 0;
		}
	}
	cout << endl;
}

void vivodMass(int size, char A[]) {     /*Ввывод массива типа char*/
	for (int i = 0; i < size; i++) {
		cout << A[i] << "\t";
	}
	cout << endl;
}

void playCards() {                       /*Функция вывода заданной карты*/
	char suit, face;
	cout << "Выберите масть карты: ";
	cin >> suit;
	cout << "Выберите номинал карты: ";
	cin >> face;
	if (suit == 'P') {
		if (face == '6')
			cout << "Ваша карта ШЕСТЬ ПИКИ";
		if (face == '7')
			cout << "Ваша карта СЕМЬ ПИКИ";
		if (face == '8')
			cout << "Ваша карта ВОСЕМЬ ПИКИ";
		if (face == '9')
			cout << "Ваша карта ДЕВЯТЬ ПИКИ";
		if (face == '10')
			cout << "Ваша карта ДЕСЯТЬ ПИКИ";
		if (face == 'V')
			cout << "Ваша карта ВАЛЕТ ПИКИ";
		if (face == 'D')
			cout << "Ваша карта ДАМА ПИКИ";
		if (face == 'K')
			cout << "Ваша карта КОРОЛЬ ПИКИ";
		if (face == 'T')
			cout << "Ваша карта ТУЗ ПИКИ";
	}
	if (suit == 'T') {
		if (face == '6')
			cout << "Ваша карта ШЕСТЬ ТРЕФ";
		if (face == '7')
			cout << "Ваша карта СЕМЬ ТРЕФ";
		if (face == '8')
			cout << "Ваша карта ВОСЕМЬ ТРЕФ";
		if (face == '9')
			cout << "Ваша карта ДЕВЯТЬ ТРЕФ";
		if (face == '10')
			cout << "Ваша карта ДЕСЯТЬ ТРЕФ";
		if (face == 'V')
			cout << "Ваша карта ВАЛЕТ ТРЕФ";
		if (face == 'D')
			cout << "Ваша карта ДАМА ТРЕФ";
		if (face == 'K')
			cout << "Ваша карта КОРОЛЬ ТРЕФ";
		if (face == 'T')
			cout << "Ваша карта ТУЗ ТРЕФ";
	}
	if (suit == 'C') {
		if (face == '6')
			cout << "Ваша карта ШЕСТЬ ЧЕРВИ";
		if (face == '7')
			cout << "Ваша карта СЕМЬ ЧЕРВИ";
		if (face == '8')
			cout << "Ваша карта ВОСЕМЬ ЧЕРВИ";
		if (face == '9')
			cout << "Ваша карта ДЕВЯТЬ ЧЕРВИ";
		if (face == '10')
			cout << "Ваша карта ДЕСЯТЬ ЧЕРВИ";
		if (face == 'V')
			cout << "Ваша карта ВАЛЕТ ЧЕРВИ";
		if (face == 'D')
			cout << "Ваша карта ДАМА ЧЕРВИ";
		if (face == 'K')
			cout << "Ваша карта КОРОЛЬ ЧЕРВИ";
		if (face == 'T')
			cout << "Ваша карта ТУЗ ЧЕРВИ";
	}
	if (suit == 'B') {
		if (face == '6')
			cout << "Ваша карта ШЕСТЬ БУБНЫ";
		if (face == '7')
			cout << "Ваша карта СЕМЬ БУБНЫ";
		if (face == '8')
			cout << "Ваша карта ВОСЕМЬ БУБНЫ";
		if (face == '9')
			cout << "Ваша карта ДЕВЯТЬ БУБНЫ";
		if (face == '10')
			cout << "Ваша карта ДЕСЯТЬ БУБНЫ";
		if (face == 'V')
			cout << "Ваша карта ВАЛЕТ БУБНЫ";
		if (face == 'D')
			cout << "Ваша карта ДАМА БУБНЫ";
		if (face == 'K')
			cout << "Ваша карта КОРОЛЬ БУБНЫ";
		if (face == 'T')
			cout << "Ваша карта ТУЗ БУБНЫ";
	}
}

void happyNumber(int &Num) {  /*Проверка шестизначного числа: счастливое ли оно*/
	int sum1 = 0, sum2 = 0;  /*если сумма первых трёх цифр числа равна сумме последних трёх цифр числа,*/
	sum1 = (Num % 10) + (Num % 100) / 10 + (Num % 1000) / 100; /*то число счастливое*/
	sum2 = (Num % 10000) / 1000 + (Num % 100000) / 10000 + (Num / 100000);
	if (sum1 == sum2)
		cout << "Ваше число счастливое" << endl;
	else
		cout << "Ваше число несчастливое" << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int degree;                 /*Задание 1*/
	degree = degreeNumber();
	cout << degree << endl;
	cout << endl;

	int A1, A2, Summ = 0;     /*Задание 2*/
	A1 = inputNumber();
	A2 = inputNumber();
	Summ = summNumber(A1, A2);
	cout << "Сумма чисел из диапозона между числами " << A1 << " и " << A2 << " равна: " << Summ << endl;
	cout << endl;

	int B1, B2;            /*Задание 3*/
	B1 = inputNumber();
	B2 = inputNumber();
	perfectNumber(B1, B2);
	cout << endl;

	const int SIZE1 = 4;      /*Задание 4*/
	const int SIZE2 = 9;
	char Suit[SIZE1] = { 'P','T','C','B' };
	char Face[SIZE2] = { '6','7','8','9','10','V','D','K','T' };
	vivodMass(SIZE1, Suit);
	vivodMass(SIZE2, Face);
	playCards();
	cout << endl;
	cout << endl;

	int Number;              /*Задание 5*/
	cout << "Введите шестизначное число: ";
	cin >> Number;
	happyNumber(Number);

	return 0;
}