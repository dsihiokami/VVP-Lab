﻿#include <stdio.h>
#include <math.h>
int main()
{
	//1)Секунды
	int n, n1; //Секунды 
	//int m; //Минуты

	printf("1)\nN = ");
	scanf_s("%d", &n); //Ввод секунд 
	//m = n / 60; //Вычисление прошедших минут
	//n1 = n - m * 60;  //Вычисление секунд сверх последней минуты
	n1 = n % 60; //Вычисление секунд сверхпоследней минуты
	printf("N1 = %d", n1); //Вывод результата


    //2)Дни недели
	int k; //К
	int d; //Номер дня недели
	//int n2; //Количесто недель

	printf("\n\n2)\nK = ");
	scanf_s("%d", &k); //Ввод К
	//n2 = k / 7;  //Вычисление количества недель
	//d = k - n2 * 7;  //Вычисление номера дня недели
	if (k>365 || k<1) 
		printf("Nevernye dannye");
	else
	{
		d = k % 7; //Вычисление номера дня недели
		printf("day = %d", d); //Вывод результата
	}
	

    //3)Дни недели
	int k1, n3; //K и N
	int d1; //Номер дня недели
	//int n4; //Количесто недель

	printf("\n\n3)\nK = ");
	scanf_s("%d", &k1); //Ввод К
	printf("N = ");
	scanf_s("%d", &n3); //Ввод N
	//n4 = k1 / 7;//Вычисление количества недель
	//d1 = k1 - (n4 * 7 - (n3 - 1)); //Вычисление номера дня недели
	if (k > 365 || k < 1 || n > 7 || k < 1)
		printf("Nevernye dannye");
	else
	{

		d1 = k1 % 7 + n3 - 1; //Вычисление номера дня недели
		if (d1 > 7)
			d1 = d1 - 7;
		printf("day = %d", d1); //Вывод результата 
	}
						   
 
	//4)Квадраты в прямоугольнике
	int a, b, c; //А, В и С
	int a1, b1, c1; //Вспомогательные переменные
	int n5; //Количество квадратов

	printf("\n\n4)\nA = ");
	scanf_s("%d", &a); //Ввод A
	printf("B = ");
	scanf_s("%d", &b); //Ввод В
	printf("C = ");
	scanf_s("%d", &c); //Ввод С
	n5 = (a / c) * (b / c); //Вычисление количества квадратов
	a1 = a % c; //printf("a1 = %d", a1);
	b1 = b % c; //printf("b1 = %d", b1);
	c1 = a1 * b + b1 * a - a1 * b1; //Вычисление свободной площади
	printf("N = %d\nS = %d", n5, c1); //Вывод результата


	//5)Век
	int x, x1; //Год и номер века

	printf("\n\n5)\nXXXX = ");
	scanf_s("%d", &x); //Ввод года
	x1 = x / 100 + 1; //Вычисление века
	printf("S = %d", x1); //Вывод результата
}