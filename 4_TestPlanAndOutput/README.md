# test plan and test ouput

* # TEST PLAN:

## Table no 1: Future test plan

| **Test ID** | **Description**                                              | **Implementation**  |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------|------------------|
|  F_01       |Reminder Check, to test whether the reminder notification works or not|  Future|Requirement based |
|  F_02       |Adding Event                                                  |  Future     | Scenario based    |
|  F_03       |Editing and Removing Event                                    | Future |Scenario based    |
|  F_04       |Views, i.e Monthly view, Daily view, Weekly view              | Future |Preference based    |

## Table no 2: Current test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  C_01       |Year checking- To make sure only the integers between 1900 to 2900 are entered. Also, there are no alpabets or special symbols.| int between 1900 to 2900|Year between 1900-2900|Year between 1900-2900|Requirement based |
|  C_02       |Month checking- To make sure the integers between 1-12 are entered. Also, there are no alpabets or special symbols.| int between 1-12|The Calendar for the entered month in the following year|The Calendar for the entered month in the following year|Requirement based    |
|  C_03       |Leap Years- To make sure all the Leap years have 29 days in Febuary| integer 2 as the month|29 days in Feb|29 days in Feb |Boundary based    |
|  C_04       |28 days in Feb- To make sure Feb has 28 days| integer 2 as the month|28 days in Feb|28 days in Feb |Requirement based    |
|  C_05       |To make sure single week has 7 days | year and month |7 days of week |7 days a week |Requirement based    |