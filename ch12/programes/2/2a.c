#include <stdio.h>
#include "2.h"

void collect_info()
{
	switch (mode)
	{
	case 0:
		puts("Enter distance traveled in kilometers:");
		break;
	case 1:
		puts("Enter distance traveled in miles:");
		break;
	}
	scanf("%f", &distance, 20);
	switch (mode)
	{
	case 0:
		puts("Enter fuel consumed in liters:");
		break;
	case 1:
		puts("Enter fuel consumed in gallon:");
		break;
	}
	scanf("%f", &fuel, 20);
}
void show_info()
{
	switch (mode)
	{
	case 0:
		printf("Fuel consumption is %.2f liters per 100km\n", fuel / distance * 100.0);
		break;
	case 1:
		printf("Fuel condumption is %.2f miles per gallon\n", distance / fuel);
		break;
	}
}