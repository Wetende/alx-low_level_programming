#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
	/* A variable that stores the total number of days in the year */
int total_days = (is_leap_year(year)) ? 366 : 365;

	/* A switch statement that checks the month and day values */
switch (month)
{
	case 1:
	/* January has no special cases*/
	break;
	case 2:
	/* February has one special case: leap years have an extra day*/
	if (day > (28 + is_leap_year(year)))
		{
		printf("Invalid date: %02d/%02d/%04d\n", month,
		day - days_in_month[month -1], year);
		return;
		}
	break;
	default:
	/* Other months have no special cases */
	if (day > days_in_month[month -1])
		{
		printf("Invalid date: %02d/%02d/%04d\n", month,
		day - days_in_month[month -1], year);
		return
		}
	}	

	/*A loop that adds up the number of days in previous months*/
	for (int i =0; i < month -1; i++)
	{
		day += days_in_month[i];
	}

	/*print the output*/
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", total_days - day);
}
