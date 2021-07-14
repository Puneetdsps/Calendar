#include "../inc/calendar_operations.h"
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year 
    if (year % 400 == 0)
        {
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)   
    {
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        {
            printf("this is a leap year\n");
            return true;
        }
    
    }
        }
   else
   printf("this is not a leap year\n");
   return false;
}
  

char* MonthName(int monthNumber)
{
    char* month;
  
    switch (monthNumber) {
    case 0:
        month = "January";
        
        break;
    case 1:
        month = "February";
        break;
    case 2:
        month = "March";
        break;
    case 3:
        month = "April";
        break;
    case 4:
        month = "May";
        break;
    case 5:
        month = "June";
        break;
    case 6:
        month = "July";
        break;
    case 7:
        month = "August";
        break;
    case 8:
        month = "September";
        break;
    case 9:
        month = "October";
        break;
    case 10:
        month = "November";
        break;
    case 11:
        month = "December";
        break;
    }
    return month;
}

int DaysInMonth(int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);
  
    // February
    if (monthNumber == 1) {
        // If the year is leap then Feb
        // has 29 days
        if (year % 400 == 0
            || (year % 4 == 0
                && year % 100 != 0))
            return (29);
        else
            return (28);
    }
  
    // March
    if (monthNumber == 2)
        return (31);
  
    // April
    if (monthNumber == 3)
        return (30);
  
    // May
    if (monthNumber == 4)
        return (31);
  
    // June
    if (monthNumber == 5)
        return (30);
  
    // July
    if (monthNumber == 6)
        return (31);
  
    // August
    if (monthNumber == 7)
        return (31);
  
    // September
    if (monthNumber == 8)
        return (30);
  
    // October
    if (monthNumber == 9)
        return (31);
  
    // November
    if (monthNumber == 10)
        return (30);
  
    // December
    if (monthNumber == 11)
        return (31);
}
        // Function that returns the index of the
// day for date DD/MM/YYYY
int dayIndex(int day, int month, int year)
{
  
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return (year + year / 4
            - year / 100
            + year / 400
            + t[month - 1] + day)
           % 7;
}

void CalendarPrint(int year)
{
    printf("     Calendar - %d\n\n", year);
    int days;
  
    // Index of the day from 0 to 6
    int current = dayIndex(1, 1, year);
  
    // i for Iterate through months
    // j for Iterate through days
    // of the month - i
    for (int i = 0; i < 12; i++) {
        days = DaysInMonth(i, year);
  
        // Print the current month name
        printf("\n***************%s***************\n",
               MonthName(i));
  
        // Print the columns
        printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
  
        // Print appropriate spaces
        int k;
        for (k = 0; k < current; k++)
            printf("     ");
  
        for (int j = 1; j <= days; j++) {
            printf("%5d", j);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");
  
        current = k;
    }
  
    return;
}
  void AddEvent(int monthNumber)
 
  {
    char event[100];
    
     if (monthNumber==0)
    { 
         
        scanf("%s",&event);
        printf("Januar -%s",&event);
  }
  if (monthNumber==1)
    { 
         
        scanf("%s",&event);
        printf("February - %s",&event);

  }
  if (monthNumber==2)
    { 
         
        scanf("%s",&event);
        printf("March -%s",&event);
  }
  if (monthNumber==3)
    { 
         
        scanf("%s",&event);
        printf("April -%s",&event);
  }
  if (monthNumber==4)
    { 
         
        scanf("%s",&event);
        printf("May- %s",&event);
    

  }
  if (monthNumber==5)
    { 
         
        scanf("%s",&event);
        printf("June-%s",&event);
    

  }
  if (monthNumber==6)
    { 
         
        scanf("%s",&event);
        printf("July - %s",&event);
  }
  if (monthNumber==7)
    { 
         
        scanf("%s",&event);
        printf("August - %s",&event);
    

  }
  if (monthNumber==8)
    { 
         
        scanf("%s",&event);
        printf("September - %s",&event);
  }
  if (monthNumber==9)
    { 
         
        scanf("%s",&event);
        printf("October - %s",&event);
  }
   if (monthNumber==10)
    { 
         
        scanf("%s",&event);
        printf("November - %s",&event);
  }
   if (monthNumber==11)
    { 
         
        scanf("%s",&event);
        printf("December - %s",&event);
  }
  
  }
void mainMenu()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    checkYear(year); 
    
    int month_1;
    printf("enter the month number\n");
    scanf(" %d",&month_1);
    
    printf("%s\n",MonthName(month_1));
    
    printf("Number of days in the month is  %d\n",DaysInMonth(month_1,year));
    printf("press 0 to print the calender or press 1 to mark an event\n");
    int press;
    scanf("%d",&press);
    if (press == 0)
    CalendarPrint(year);
    else if (press ==1)
    {
        int monthnum;
        printf("enter the month number in which you want to set an event\n" );
        scanf("%d",&monthnum);
        printf("enter a single key word as an event reminder\n");
        
    AddEvent(monthnum);
    CalendarPrint(year);
    }
}