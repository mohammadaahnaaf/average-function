#include<stdio.h>
float avg(float a, float b, float c);
float avg(float a, float b, float c)
{
	float avg;
	avg = (a + b + c) / 3;
	return(avg);
}
int main()
{
	float m, n, o, p;
	printf("Enter 3 numbers\n");
	scanf_s("%f %f %f", &m, &n, &o);
	p = avg(m, n, o);
	printf("average value of (%f , %f , %f) = %f", m, n, o, p);
}