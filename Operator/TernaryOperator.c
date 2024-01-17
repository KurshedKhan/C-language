#include <stdio.h>

/*
        Conditional or Ternary Operator (?:) in C

    //=========================================================//

        1. The conditional operator in C is kind of similar to the if-else statement.

        2. The conditional operator takes less space and 
            helps to write the if-else statements in the shortest way possible.
        
        3. It is also known as the ternary operator in C as
            it operates on three operands.

    //========================================================//

        1.Syntax of Conditional/Ternary Operator in C
            variable = Expression1 ? Expression2 : Expression3;

        2.Syntax of Conditional/Ternary Operator in C
            variable = (condition) ? Expression2 : Expression3;

        3.Syntax of Conditional/Ternary Operator in C
           (condition) ? (variable = Expression2) : (variable = Expression3);
        
        4.Syntax of Conditional/Ternary Operator in C
           variable = (condition) ? True(Statement) : False(Statement);

    //=========================================================//
        The Conditional Operator ‘?:’ takes three operands :

            1.Condition
            2.True (Statement)
            3.False (Statement)

    //==========================================================//
        The working of the conditional operator in C is as follows:

            Step 1: Expression 1 is the condition to be evaluated.

            Step 2A: If the condition(Expression1) is True then 
                Expression2 will be executed.

            Step 2B: If the condition(Expression1) is false then
                Expression3 will be executed.

            Step 3: Results will be returned.

    //=========================================================//

    Example 1: C Program to Store the greatest of the two Numbers
        using the ternary operator

*/
int main(){
    printf("\n=================================================\n");
    int Num1,Num2;
    printf("Enter a first Number :\n");
    scanf("%d",&Num1);
    printf("\nEnter a second Number :\n");
    scanf("%d",&Num2);
    printf("\n--------------------------------------------------\n");
    (Num2 < Num1) ? printf(" Num2 : %d is greater than Num1 : %d  .", Num2, Num1) : printf(" Num1 : %d is less than Num2 : %d .",Num1,Num2);
    printf("\n================================================\n");
    return 0;
}