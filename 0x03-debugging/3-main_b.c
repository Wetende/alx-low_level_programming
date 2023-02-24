/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days = 0;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days = 1;
    }

    if (month > 2)
    {
        day += days;
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else if (day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else if (month == 2 && ((days == 0 && day > 28) || (days == 1 && day > 29)))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        int day_of_year = day;

        switch (month - 1)
        {
            case 11:
                day_of_year += 30;
            case 10:
                day_of_year += 31;
            case 9:
                day_of_year += 30;
            case 8:
                day_of_year += 31;
            case 7:
                day_of_year += 31;
            case 6:
                day_of_year += 30;
            case 5:
                day_of_year += 31;
            case 4:
                day_of_year += 30;
            case 3:
                day_of_year += 31;
            case 2:
                day_of_year += 28 + days;
            case 1:
                day_of_year += 31;
        }

        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 365 + days - day_of_year);
    }
}

