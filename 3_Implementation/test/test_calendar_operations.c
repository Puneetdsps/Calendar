#include "../unity/unity.h"
#include "../inc/calendar_operations.h"
#include <string.h>


void test_leap_year(void);
void test_month_name(void);
void test_days_in_month(void);
void test_day_index(void);


void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_leap_year);
  RUN_TEST(test_month_name);
  RUN_TEST(test_days_in_month);
  RUN_TEST(test_day_index);


  return UNITY_END();
}

void test_leap_year(void) 
{
  TEST_ASSERT_EQUAL(true, checkYear(2000));
}

void test_month_name(void)
{
  TEST_ASSERT_EQUAL(0,strcmp("January", MonthName(0)));
}

void test_days_in_month(void)
{
  TEST_ASSERT_EQUAL(29, DaysInMonth(1,2000));
}

void test_day_index(void)
{
  TEST_ASSERT_EQUAL(3, dayIndex(14,7,2021));
}