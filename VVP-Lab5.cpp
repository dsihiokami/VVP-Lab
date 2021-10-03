#include <stdio.h>
#include <math.h>

int main()
{
	//1)Расстояние между двумя точками
	double x, y; //Расстояния между абсциссами и ординатами точек
	double x1, y1; //Координаты первой точки
	double x2, y2; //Координаты второй точки
	double h; //Расстояние

	printf("1)\n(x1,y1)=");
	scanf_s("%lf,%lf", &x1, &y1); //Ввод координат первой точки
	printf("(x2,y2)=");
	scanf_s("%lf,%lf", &x2, &y2); //Ввод координат второй точки
	x = fabs(x2 - x1); //Расстояние между абсциссами точек, a
	y = fabs(y2 - y1); //Расстояние между ординатами точек, b
	h = sqrt(x * x + y * y); //Расстояние между точками, вычисляется по теореме Пифагора c^2=a^2+b^2
	printf("H=%lf", h); //Вывод ответа


	//2)Длины отрезков AC и BC, их сумма
	double a, b, c; //Длины отрезков
	double x3, x4, x5;// Координаты точек на оси

	printf("\n\n2)\nA=");
	scanf_s("%lf", &x3); //Ввод координаты A
	printf("B=");
	scanf_s("%lf,", &x4); //Ввод координаты B
	printf("C=");
	scanf_s("%lf,", &x5); //Ввод координаты С
	a = fabs(x5 - x3); //Длина AC
	b = fabs(x5 - x4); //Длина BC
	c = a + b; //AC + BC
	printf("AC=%lf\nBC=%lf\nAC+BC=%lf", a, b, c); //Вывод ответов


	//3)Произведение длин отрезков AC и BC
	double a1, b1, c1; //Длины отрезков
	double y3, y4, y5;// Координаты точек на оси

	printf("\n\n3)\nA=");
	scanf_s("%lf", &y3); //Ввод координаты A
	printf("B=");
	scanf_s("%lf,", &y4); //Ввод координаты B
	printf("C=");
	scanf_s("%lf,", &y5); //Ввод координаты С
	if ((y4 > y5 && y5 > y3) || (y3 > y5 && y5 > y4))
	{
		a1 = fabs(y5 - y3); //Длина AC
		b1 = fabs(y5 - y4); //Длина BC
		c1 = a1 * b1; //AC * BC
		printf("AC=%lf\nBC=%lf\nAC*BC=%lf", a1, b1, c1); //Вывод ответов

	}
	else
	{
		printf("Nevernye dannye. C ne prinadlezhit otrezku AB"); //Ошибка
	}


	//4)Периметр и площадь прямоугольника заданного координатами двух противоположных вершин
	double p, s; //Периметр и площадь
	double n, m; //Ширина и высота
	double n1, m1; //Координаты первой вершины
	double n2, m2; //Координаты второй вершины

	printf("\n\n4)\n(x1,y1)=");
	scanf_s("%lf,%lf", &n1, &m1); //Ввод координат первой вершины
	printf("(x2,y2)=");
	scanf_s("%lf,%lf", &n2, &m2); //Ввод координат второй вершины
	n = fabs(n2 - n1); //Ширина 
	m = fabs(m2 - m1); //Высота
	p = (n + m) * 2; //Периметр 
	s = n * m;//Площадь
	printf("P=%lf\nS=%lf", p, s); //Вывод ответа


	//5)Периметр и площадь треугольника заданного координатами вершин
	double p1, p2, s1; //Периметр, полупериметр и площадь
	double a2, b2, c2; //Стороны треугольника
	double w1, z1; //Координаты вершины A
	double w2, z2; //Координаты вершины B
	double w3, z3; //Координаты  вершины C
	double w, z; //Расстояния между абсциссами и ординатами двух вершин

	printf("\n\n5)\nA(x,y)=");
	scanf_s("%lf,%lf", &w1, &z1); //Ввод координат вершины A
	printf("B(x,y)=");
	scanf_s("%lf,%lf", &w2, &z2); //Ввод координат вершины B
	printf("C(x,y)=");
	scanf_s("%lf,%lf", &w3, &z3); //Ввод координат вершины С
	w = fabs(w2 - w1);
	z = fabs(z2 - z1);
	a2 = sqrt(w * w + z * z); //Сторона AB
	w = fabs(w3 - w2);
	z = fabs(z3 - z2);
	b2 = sqrt(w * w + z * z); //Сторона BC
	w = fabs(w1 - w3);
	z = fabs(z1 - z3);
	c2 = sqrt(w * w + z * z); //Сторона CA
	if (a2 >= b2 + c2 || b2 >= a2 + c2 || c2 >= a2 + b2)
	{
		printf("Takogo treugolnika ne sushestvuet"); //Ошибка
	}
	else
	{
		p1 = a2 + b2 + c2; //Периметр ABC
		p2 = p1 / 2; //Полупериметр
		s1 = sqrt(p2 * (p2 - a2) * (p2 - b2) * (p2 - c2)); //Площадь ABC          
		printf("P=%lf\nS=%lf", p1, s1); //Вывод ответов
	}
}