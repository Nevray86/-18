#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
//задача 1
inline double sum(double a, double b) {
	return (a + b) / 2;
}
//задача 2
int sum(int a, int b, int c) {
	int max = 0;
	if (a > b && a > c)
		max = a;
	else if (b > a && b > c)
		max = b;
	else
		max = c;

	return max;
}
double sum(double a, double b, double c) {
	double max = 0;
	if (a > b && a > c)
		max = a;
	else if (b > a && b > c)
		max = b;
	else
		max = c;

	return max;
}
float sum(float a, float b, float c) {
	float max = 0;
	if (a > b && a > c)
		max = a;
	else if (b > a && b > c)
		max = b;
	else
		max = c;

	return max;
}

//задача 3



template<typename T> void maxArray(T arr[], int length) {
	T max = 0;
	cout << "[";
	for (int i = 0; i < length; i++) {
		
	
		cout << arr[i] << " ,";
		
		if (arr[i] > max)
			max = arr[i];
	
	}
	cout <<"\b]\n"<< "Максимальное число в массиве = " << max;
}


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//задача 1
	cout << sum(2, 3)<<endl;

	//задача 2
	cout << sum(4.4, 6.6, 2.6)<<"\n";
	cout << sum(2, 6, 9);
		cout << endl;
	//задача 3
	double array[10]={0.3, 5, 7.9, 4, 3.5, 5.6, 2.3, 0, 8.8, 11.4};
	
	cout << endl;
	maxArray(array, 10);
	return 0;
}