#include <stdio.h>
#include <math.h>

int main()
{
    double s = 0; //Нахождение площади и периметра прямоугольника
    double p = 0;
    double a = 0;
    double b = 0;
    scanf_s("%lf%lf", &a, &b);
    s = a * b;
    p = (a + b) * 2;
    printf("S=%lf\nP=%lf", s, p);

    double d = 0; //Нахождение длины окружности
    double pi = 3.14;
    double l = 0;
    scanf_s("%lf", &d);
    l = pi * d;
    printf("L=%lf", l);

    double m = 0; //Нахождение среднего арифметического 
    double n = 0;
    double sr = 0;
    scanf_s("%lf%lf", &m, &n);
    sr = (m + n) / 2;
    printf("Sr=%lf", sr);

    double x = 0; //Нахождение суммы, разности, произведения и частного квадратов чисел
    double y = 0;
    double su = 0;
    double ra = 0;
    double pr = 0;
    double de = 0;
    scanf_s("%lf%lf", &x, &y);
    x = x * x;
    y = y * y;
    su = x + y;
    ra = x - y;
    pr = x * y;
    de = x / y;
    printf("%lf %lf %lf %lf", su, ra, pr, de);

    double x1 = 0; //Нахождение суммы, разности, произведения и частного модулей чисел
    double y1 = 0;
    double su1 = 0;
    double ra1 = 0;
    double pr1 = 0;
    double de1 = 0;
    scanf_s("%lf%lf", &x, &y);
    x1 = fabs(x);
    y1 = fabs(y);
    su1 = x1 + y1;
    ra1 = x1 - y1;
    pr1 = x1 * y1;
    de1 = x1 / y1;
    printf("%lf %lf %lf %lf", su1, ra1, pr1, de1);
}
