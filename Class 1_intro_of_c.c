#include <stdio.h>

/*
		Now our entry point is main function.

		1. () => round bracket or paranthesis 
		2. {} => curly bracket 
		3. [] => square bracket

		statement : it is code continuous of single line and
					multiple line terminated by semicolon ";".
					; => it tells the compiler that our statement
					ends here.
		
		string : it is a sequence of characters.
				 or Simple text message.
			   : encolsed by double quotes [""].
		
		
		Keywords : it is predefined word which is reserved 
				   for doing special kind of operation.
				 : int , float , void , char,....etc.

		
		Identifier : Identifiers in C language represent the 
					 names of various entities such as arrays,
					 functions, variables, user-defined data types,
					 labels, etc.

		
		Variable : it is holder which can hold values inside it.
				 : Note => A variable can only store/hold the 
				           single type of value which is defined
						   during declaration of variable.


		Declaratin of variable : data-type variableName;


		our main data type : int , void , float , double , char.
		modifiers		   : short, long

		
		Number	  : int , float , void.
		Charaters : char

		format specifier : it is used to specify that what kind 
						   of value we are going to print.
						   
						 : 1. int    = %d
						 : 2. float  = %f
						 : 3. double = %lf
						 : 4. char   = %c
						 : 5. string = %s

						 : \n = new line character

*/

void main() {

		// here main and printf both are identifiers.
		printf("Hello World...!\n");// \n ==> new line 

		int integer_number;// declaring a variable named as integer_number variable.

		integer_number = 1599;// assinging a value to integer_number variable.

		printf("%d", integer_number);

}
