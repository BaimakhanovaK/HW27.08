#include<iostream>
#include<ctime>

using namespace std;

//1 zadanie 1.	Написать функцию, которая получает указатель на массив и его размер, 
//и возвращает сумму и произведение его элементов в двух параметрах-указателях.
void h1(int* a, int n) {
	srand(time(NULL));

	int d=0, e=1;
	int* sum=&d;
	int* proizv = &e;
	for (int i=0; i < n; i++)
	{
		a[i] = 1 + rand() % 10;
		
		*sum += a[i];
		*proizv *= a[i];
	}
	cout << *sum << endl;
	cout << *proizv << endl;
}

//2 zadanie 2.	Написать функцию, которая получает указатель на массив и его размер, 
//и возвращает количество отрицательных, положительных и нулевых элементов массива.
void h2(int* a, int n) {
	srand(time(NULL));

	int g = 0, h = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 20;
		cout << a[i] << " ";

		if (a[i] < 0)
			g++;
		else if (a[i] > 0)
			h++;
		else if (a[i] == 0)
			j++;
	}
	cout << endl;
	cout <<g << " " << h << " " << j << endl;
}

//3 zadanie 3.	Написать следующие функции для работы с динамическим массивом:
//a.функция распределения динамической памяти
//b.функция инициализации динамического массива
//c.функция печати динамического массива
//d.функцию удаления динамического массива
//e.функцию добавления элемента в конец массива
//f.функцию вставки элемента по указанному индексу
//g.функцию удаления элемента по указанному индексу

//a
void h3(int* &a, int n) {
	a = new int[n];	
}

//b
void h4(int* &a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 20;
	}
}

//c
void h5(int* &a, int n) {
	for (int i = 0; i < n; i++)
	{		
		cout << a[i] << " ";
	}
	cout << endl;
}

//d
void h6(int* &a, int n) {
	delete[] a;
}

//e
void h7(int* &a, int &n, int x) {
	int* b;
	b = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	b[n] = x;
	delete[] a;
	a = b;
	n++;
}

//f
void h8(int* &a, int &n, int index, int x) {
	int* b;
	b = new int[n+1];
	for (int i = 0; i < index; i++)
	{
		b[i] = a[i];
	}
	b[index] = x;
	for (int i = index + 1; i < n + 1; i++)
	{
		b[i] = a[i - 1];
	}
	delete[] a;
	a = b;
	n++;
}

//g
void h9(int* &a, int&n, int index) {
	int* b;
	b = new int[n - 1];
	for (int i = 0; i < index; i++)
	{
		b[i] = a[i];
	}
	for (int i = index; i < n - 1; i++)
	{
		b[i] = a[i+1];
	}
	delete[] a;
	a = b;
	n--;
}

//4 zadanie 4.	Написать функцию, которая получает указатель на динамический массив и его размер. 
//Функция должна удалить из массива все отрицательные числа и вернуть указатель на новый динамический массив.
void h10(int *a, int n, int *&x, int &m) {	
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >=0)
			k++;
	}
	x = new int[k];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >=0)
			x[j++] = a[i];
	}
	m = k;
}


int main() {
	//3 zadanie
	/*int* a2;
	int n;
	cin >> n;
	h3(a2, n);
	h4(a2, n);
	h5(a2, n);
	h7(a2, n, 23);
	h5(a2, n);
	h8(a2, n, 4, 45);
	h5(a2, n);
	h9(a2, n, 5);
	h5(a2, n);
*/
	//4 zadanie
	/*int* x;
	int m = 0;
	h10(a2, n, x, m);
	h5(x, m);

	h6(a2, n);
	delete[] x;*/


	//2 zadanie
	/*int a[10];
	h2(a, 10);*/


	//1 zadanie
	/*int a[10];
	h1(a, 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}*/
	system("pause");
	return 0;
}