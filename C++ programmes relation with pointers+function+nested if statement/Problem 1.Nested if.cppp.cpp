/*
		
		1.Write a program that prompts the user to enter an integer.If the number is a multiple 
		of 5,Print HiFive.If the number is divisible by 2,Print HiEven.
		
*/

#include<iostream>//preprocessor directives or main library of function
using namespace std;//Namespace library
int main()//Main function header file

{                //open block or body of function
	int number;        // integer variable declaration                      
	cout<<"Enter an integer number.\n";			// output statement and use extraction operator
	cin>>number;                             // cin is an input statement and use insertion operator
	                                            // write statement and declarations between these curley braces.{}
	
	if(number % 5==0)			//When a number will be multiple of 5 then on the console screen print "HiFive"
	   cout<<"HiFive"<<endl;
	 {
	    
	  else if(number % 2==0)		//when we enter any number and if it would be divisible of 2 then on console screen print HiEven.
	     cout<<"HiEven"<<endl;
	     
}       
	else
	{
		cout<<"Both are not valid.";
	}
	     return 0;
}                //close block or body of function
