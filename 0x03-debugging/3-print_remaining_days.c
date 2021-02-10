#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * leap_year - returned if year is leap
 * non_leap_year - returned if year not leap
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void leap_year(int day, int month, int year)
{
	if (month == 2 && day > 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}

void non_leap_year(int day, int month, int year)
{
	if (month >= 2 && day >= 60)
	{
		day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
}

void print_remaining_days(int month, int day, int year)
{
	if (year % 400 == 0)
	{
		leap_year(day, month, year);
	}
	else if (year % 100 == 0)
	{
		non_leap_year(day, month, year);
	}
	else if (year % 4 == 0)
	{
		leap_year(day, month, year);
	}
	else
	{
		non_leap_year(day, month, year);
	}
}
