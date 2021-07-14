#ifndef __CALENDAR_OPERATIONS_H__
#define __CALENDAR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 

//#include <stdio_ext.h>
bool checkYear(int year);
char* MonthName(int monthNumber);
int DaysInMonth(int monthNumber, int year);
int dayIndex(int day, int month, int year);
void CalendarPrint(int year);
void AddEvent(int monthNumber);
void printeverything();
#endif  