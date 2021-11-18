#include <stdio.h>
#include <math.h>
int main()
{
	//1)A > 2 и B ≤ 3
	int a, b; //A,B

	printf("1)\nA = ");
	scanf_s("%d", &a); //Ввод A
	printf("B = ");
	scanf_s("%d", &b); //Ввод B 
	if (a > 2 && b<= 3)
		printf("(A > 2 and B <= 3) = 1"); //Истина
	else
		printf("(A > 2 and B <= 3) = 0"); //Ложь


	//2)A < B < C
	int a1, b1, c1; //A, B, C 

	printf("\n\n2)\nA = ");
	scanf_s("%d", &a1); //Ввод A
	printf("B = ");
	scanf_s("%d", &b1); //Ввод B 
	printf("C = ");
	scanf_s("%d", &c1); //Ввод C
	if (a1 < b1 && b1 < c1)
		printf("(A < B < C) = 1"); //Истина
	else
		printf("(A < B < C) = 0"); //Ложь

	//3)Число является четным двузначным
	int y; //Число

	printf("\n\n3)\nY = ");
	scanf_s("%d", &y); //Ввод числа
	if (y / 100 == 0 && y / 10 > 0 && y % 2 == 0)
		printf("(Y = четное XX) = 1"); //Истина
	else
		printf("(Y = четное XX) = 0"); //Ложь


	//4)Цифры данного числа образуют возрастающую или убывающую последовательность
	int y1; //Число
	int a2, b2, c2; //Цифры данного числа

	printf("\n\n4)\nY = ");
	scanf_s("%d", &y1); //Ввод числа
	a2 = y1 / 100;
	b2 = y1 / 10 % 10;
	c2 = y1 % 10;
	//printf("%d %d %d\n", a2, b2, c2); 
	if ((a2 < b2 && b2 < c2) || (a2 > b2 && b2 > c2))
		printf("(Y = X1X2X3 or Y = X3X2X1) = 1"); //Истина
	else
		printf("(Y = X1X2X3 or Y = X3X2X1) = 0"); //Ложь


	//5)Данное число читается одинаково слева направо и справа налево
	int y2; //Число
	int a3, b3, c3, d3; //Цифры данного числа

	printf("\n\n5)\nY = ");
	scanf_s("%d", &y2); //Ввод числа
	a3 = y2 / 1000;
	b3 = y2 / 100 % 10;
	c3 = y2 / 10 % 10;
	d3 = y2 % 10;
	//printf("%d %d %d %d\n", a3, b3, c3, d3);
	if (a3 == d3 && b3 == c3)
		printf("(Y = X1X2X2X1) = 1"); //Истина
	else
		printf("(Y = X1X2X2X1) = 0"); //Ложь


	//6)Треугольник со сторонами a, b, c является прямоугольным
	int a4, b4, c4; //Цифры данного числа

	printf("\n\n6)\na = ");
	scanf_s("%d", &a4); //Ввод стороны a
	printf("b = ");
	scanf_s("%d", &b4); //Ввод стороны b 
	printf("c = ");
	scanf_s("%d", &c4); //Ввод стороны c
	a4 = a4 * a4;
	b4 = b4 * b4;
	c4 = c4 * c4;
	if (a4 == b4 + c4 || b4 == a4 + c4 || c4 == b4 + a4)
		printf("(ABC - right triangle) = 1"); //Истина
	else
		printf("(ABC - right triangle) = 0"); //Ложь


	//7)Существует треугольник со сторонами a, b, c
	int a5, b5, c5; //Цифры данного числа

	printf("\n\n7)\nA = ");
	scanf_s("%d", &a5); //Ввод стороны A
	printf("B = ");
	scanf_s("%d", &b5); //Ввод стороны B 
	printf("C = ");
	scanf_s("%d", &c5); //Ввод стороны C
	if (a5 < b5 + c5 && b5 < a5 + c5 && c5 < b5 + a5)
		printf("(triangle exists) = 1"); //Истина
	else
		printf("(triangle exists) = 0"); //Ложь
}
