#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>



using namespace std;


//������ 1
inline int sumNum(int num1, int num2) {
	return (num1 + num2) / 2;
}

//������ 2
int maxNum(int n1, int n2, int n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}

float maxNum(float n1, float n2, float n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}

double maxNum(double n1, double n2, double n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}

//������ 3
template <typename T> T maxEl(T Arr[], int length) {
	T max = 0;
	for (int i = 0; i < length; i++)
		if (Arr[i] > max)
			max = Arr[i];
	return max;
}

template <typename T> void showArr(T array[], int length);


int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;


	//������ 1
	cout << "������ 1\n������� ��� �����: ";
	cin >> a >> b;
	cout << "������� �������������� ���� ����� = " << sumNum(a, b) << endl << endl;

	//������ 2
	cout << "������ 2" << endl;
	cout << "int " << maxNum(2, 100, -10) << endl;
	cout << "float " << maxNum(0.6f, 1.5f, 3.3f) << endl;
	cout << "double " << maxNum(7968.99, 3056.3131, -388.234) << endl << endl;

	//������ 3
	cout << "������ 3" << endl;
	float Arr[6] = { 2.6, -2.8, 90.1, 0, -10.56, 0.75 };
	showArr(Arr, 5);
	cout << "������������ ������� �������: " << maxEl(Arr, 6) << endl;
	int Arr2[4] = { 5, 100, -100, 0 };
	showArr(Arr2, 4);
	cout << "������������ ������� ����� �������: " << maxEl(Arr2, 4) << endl << endl;



	return 0;
}

template <typename T> void showArr(T array[], int length) {
	cout << "����������� ������:\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}