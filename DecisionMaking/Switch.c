#include <stdio.h>

/*
    // syntax of switch case statement in c.
    //==============================================//
    switch(expression)
    {
        case value1: statement_1;
             break;
        case value2: statement_2;
             break;
        .
        .
        .
        case value_n: statement_n;
              break;

        default: default_statement;
    }
    //=====================================//

    Rules of the switch case statement

        1. In a switch statement, the “case value” must be of “char” and “int” type.
        2. There can be one or N number of cases.
        3. The values in the case must be unique.
        4. Each statement of the case can have a break statement. It is optional.
        5. The default Statement is also optional.

        trick : expression == case_value ==> true;

    //=========================================//
    How switch Statement Work?
    The working of the switch statement in C is as follows:
        -------------------------------------------------------
            Step 1: The switch variable is evaluated.

            Step 2: The evaluated value is matched against all the present cases.

            Step 3A: If the matching case value is found, 
                the associated code is executed.

            Step 3B: If the matching code is not found, 
                then the default case is executed if present.

            Step 4A: If the break keyword is present in the case, 
                then program control breaks out of the switch statement.

            Step 4B: If the break keyword is not present, then 
                all the cases after the matching case are executed.
            
            Step 5: Statements after the switch statement are executed.

    //=====================================================//

    Break in switch case :

            1.This keyword is used to stop the execution inside a switch block. 
            
            2.It helps to terminate the switch block and break out of it. 
            
            3.When a break statement is reached, the switch terminates, 
                and the flow of control jumps to the next line following 
                the switch statement.

            4.The break statement is optional. If omitted, 
                execution will continue on into the next case. 
            
            5.The flow of control will fall through to subsequent cases until
                a break is reached.
    // ==============================================================
    Default in switch case :

        1. The default keyword is used to specify the set of statements 
            to execute if there is no case match. 

        2. It is optional to use the default keyword in a switch case. 
        
        3. Even if the switch case statement does not have a default statement,
             it would run without any problem.

    // ===============================================================
    Advantages of C switch Statement :

        1.Easier to read than if else if.

        2.Easier to debug and maintain for a large number of conditions.
        
        3.Faster execution speed.

     //=============================================================   
    Disadvantages of C switch Statement :
    
        1.Switch case can only evaluate int or char type.

        2.No support for logical expressions.
    
        3.Have to keep in mind to add a break in every case.
*/

int main(){

    int number ;
    printf("Enter a number 1 to 3 : ");
    scanf("%d",&number);

    switch(number){

        case 1:
            printf("Case 1 is Match.");
            break;
        case 2:
            printf("Case 2 is Match.");
            break;
        case 3:
            printf("Case 3 is Match.");
            break;
        default:
            printf("you have entered invalid number.");
    }
    return 0;
}