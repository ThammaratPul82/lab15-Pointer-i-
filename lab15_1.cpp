#include <iostream>
#include <string>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	// แสดงค่าของตัวแปร a, b, c, x, y และ z 
	cout << a << " ";
	cout << b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " " <<"\n";
	// แสดงค่า Address ของตัวแปร a, b, c, x, y และ z 
	cout << &a << " ";
	cout << (void*)&b << " ";
	cout << (void*)&c << " ";
	cout << &x << " ";
	cout << &y << " ";
	cout << &z << " " << "\n";
	// เปลี่ยนค่าของตัวแปร b ให้เป็นตัวอักษร F โดยการกำหนดผ่านตัวแปร c
	c='F';
	cout << a << " ";
	cout << b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " " <<"\n";
	// เปลี่ยนค่าของตัวแปร b ให้เป็นตัวอักษร W โดยการกำหนดผ่าน Pointer y
	*y='W';
	cout << a << " ";
	cout << b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " " <<"\n";
	// เปลี่ยนค่าของตัวแปร a ให้เป็น 6 โดยการกำหนดผ่าน Pointer x
	*x=6;
	cout << a << " ";
	cout << b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " " <<"\n";
	//เปลี่ยนค่าของตัวแปร a ให้เป็น 7 โดยการกำหนดผ่าน Pointer z
	**z=7;
	cout << a << " ";
	cout << b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " " <<"\n";

	return 0;
}
