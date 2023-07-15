#include <stdio.h>

/*
		Now our entry point is main function.

  		function :  function is a set of instruction in which mutiple line of 
    			    statement(instruction) are defined.
	   
	 		 :  These instruction can be executed by calling the function 
      			    by it's name.

  		subfunctions :
			
		These subfunctions declaration is given in the global declaration seciton.
		Note: if we don't give the declaration of these function in the global 
  			decleration then compiler will give you an error of undeclaration.
			
		1. void kurshed(): 
		2. void sanu(): 
  
		statement : it is code continuous of single line and
					multiple line terminated by semicolon ";".
					; => it tells the compiler that our statement
					ends here.

       		global declaration area : it is the area (memory area) outside the every 
	 				  function including main funtion in which we declare
       					  those variable or function, that can be accessed by
	     				  any function.
	   
		1. () => round bracket or paranthesis 
		2. {} => curly bracket 
		3. [] => square bracket

		
		
		string : it is a sequence of characters.
				 or Simple text message.
			   : encolsed by double quotes [""].
		
		
		Keywords : it is predefined word which is reserved 
				   for doing special kind of operation.
				 : int , float , void , char,....etc.
		
		int : it is a keyword used to store the integer type values
  		     (whole numbers).
		
		float : it is a keyword used to store the decimal type values
  		       (deciaml values like 1.24, 3.14).
		
		char: it is keyword used to store the character value in a variable.
		
		const : it is a keyword used to define a variable as constant variable,
  		        that can be initialized only once.
		      : const variable value cannot be changed.
		
		void:  it is a keyword used to define the return type of the function.
		
		return type: if a function return a something to the caller function then
  			     the value must be return in specified data type, that type is
	  		     called return type.
     
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
