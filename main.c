/**
 ******************************************************************************
 * @file           : Application.c
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
int main()
{   unsigned short number , rev_number;
    printf("enter the number: ");
    scanf("%d",&number);
    rev_number=(number % 10) * 100;
    rev_number=rev_number+((number / 10) % 10) * 10;
    rev_number=rev_number+(number / 100);
    printf("\n the reversed number is %d",rev_number);
    return 0;
}
/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      28jan2024            first task e
*/
