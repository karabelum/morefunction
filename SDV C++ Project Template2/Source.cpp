#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
//template <typename T1, typename T1> T1 fync(T1 num, T2 num){}
template <typename T> T fync(T num) {
	return num * num * num;
}

int func(int num) {
	cout << "число целое\n";
	return num * num * num;
}
float func(float num) {
	cout << "число вещественное\n";
	return num * num * num;
}
double func(double num1, int num2) {
	cout << "вы передали пару чисел\n";
	double res = num1 * num2;
	return res;
}
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cin >> n;
	cout << fync(n) << endl;
	cout << fync(5.5) << endl;
	float m;
	
	cout << func(n) << endl;//inline встраивается в код
	cin >> m;
	cout << func(m) << endl;
	double p;
	cin >> p;
	cout << func(p, n)<<endl;

	
	return 0;
}