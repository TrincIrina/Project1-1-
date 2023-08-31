#include<iostream>
#include<windows.h>
using namespace std;

int inputNumber() {   /*���� ����� �������������*/
	int number;
	cout << "������� �����: ";
	cin >> number;
	return number;
}

int degreeNumber() {    /*������� �����*/
	int degree, x, y;
	cout << "������� ��������� �������: ";
	cin >> x;
	cout << "������� ���������� �������: ";
	cin >> y;
	degree = pow(x, y);
	return degree;
}

int summNumber(int &x, int &y) {  /*���������� ����� ����� � �������� ���������*/
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

void perfectNumber(int &x, int &y) {  /*���������� ����������� �����*/
	int sum = 0;
	cout << "����������� �����, �� ��������� ����������: ";
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

void vivodMass(int size, char A[]) {     /*������ ������� ���� char*/
	for (int i = 0; i < size; i++) {
		cout << A[i] << "\t";
	}
	cout << endl;
}

void playCards() {                       /*������� ������ �������� �����*/
	char suit, face;
	cout << "�������� ����� �����: ";
	cin >> suit;
	cout << "�������� ������� �����: ";
	cin >> face;
	if (suit == 'P') {
		if (face == '6')
			cout << "���� ����� ����� ����";
		if (face == '7')
			cout << "���� ����� ���� ����";
		if (face == '8')
			cout << "���� ����� ������ ����";
		if (face == '9')
			cout << "���� ����� ������ ����";
		if (face == '10')
			cout << "���� ����� ������ ����";
		if (face == 'V')
			cout << "���� ����� ����� ����";
		if (face == 'D')
			cout << "���� ����� ���� ����";
		if (face == 'K')
			cout << "���� ����� ������ ����";
		if (face == 'T')
			cout << "���� ����� ��� ����";
	}
	if (suit == 'T') {
		if (face == '6')
			cout << "���� ����� ����� ����";
		if (face == '7')
			cout << "���� ����� ���� ����";
		if (face == '8')
			cout << "���� ����� ������ ����";
		if (face == '9')
			cout << "���� ����� ������ ����";
		if (face == '10')
			cout << "���� ����� ������ ����";
		if (face == 'V')
			cout << "���� ����� ����� ����";
		if (face == 'D')
			cout << "���� ����� ���� ����";
		if (face == 'K')
			cout << "���� ����� ������ ����";
		if (face == 'T')
			cout << "���� ����� ��� ����";
	}
	if (suit == 'C') {
		if (face == '6')
			cout << "���� ����� ����� �����";
		if (face == '7')
			cout << "���� ����� ���� �����";
		if (face == '8')
			cout << "���� ����� ������ �����";
		if (face == '9')
			cout << "���� ����� ������ �����";
		if (face == '10')
			cout << "���� ����� ������ �����";
		if (face == 'V')
			cout << "���� ����� ����� �����";
		if (face == 'D')
			cout << "���� ����� ���� �����";
		if (face == 'K')
			cout << "���� ����� ������ �����";
		if (face == 'T')
			cout << "���� ����� ��� �����";
	}
	if (suit == 'B') {
		if (face == '6')
			cout << "���� ����� ����� �����";
		if (face == '7')
			cout << "���� ����� ���� �����";
		if (face == '8')
			cout << "���� ����� ������ �����";
		if (face == '9')
			cout << "���� ����� ������ �����";
		if (face == '10')
			cout << "���� ����� ������ �����";
		if (face == 'V')
			cout << "���� ����� ����� �����";
		if (face == 'D')
			cout << "���� ����� ���� �����";
		if (face == 'K')
			cout << "���� ����� ������ �����";
		if (face == 'T')
			cout << "���� ����� ��� �����";
	}
}

void happyNumber(int &Num) {  /*�������� ������������� �����: ���������� �� ���*/
	int sum1 = 0, sum2 = 0;  /*���� ����� ������ ��� ���� ����� ����� ����� ��������� ��� ���� �����,*/
	sum1 = (Num % 10) + (Num % 100) / 10 + (Num % 1000) / 100; /*�� ����� ����������*/
	sum2 = (Num % 10000) / 1000 + (Num % 100000) / 10000 + (Num / 100000);
	if (sum1 == sum2)
		cout << "���� ����� ����������" << endl;
	else
		cout << "���� ����� ������������" << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int degree;                 /*������� 1*/
	degree = degreeNumber();
	cout << degree << endl;
	cout << endl;

	int A1, A2, Summ = 0;     /*������� 2*/
	A1 = inputNumber();
	A2 = inputNumber();
	Summ = summNumber(A1, A2);
	cout << "����� ����� �� ��������� ����� ������� " << A1 << " � " << A2 << " �����: " << Summ << endl;
	cout << endl;

	int B1, B2;            /*������� 3*/
	B1 = inputNumber();
	B2 = inputNumber();
	perfectNumber(B1, B2);
	cout << endl;

	const int SIZE1 = 4;      /*������� 4*/
	const int SIZE2 = 9;
	char Suit[SIZE1] = { 'P','T','C','B' };
	char Face[SIZE2] = { '6','7','8','9','10','V','D','K','T' };
	vivodMass(SIZE1, Suit);
	vivodMass(SIZE2, Face);
	playCards();
	cout << endl;
	cout << endl;

	int Number;              /*������� 5*/
	cout << "������� ������������ �����: ";
	cin >> Number;
	happyNumber(Number);

	return 0;
}