#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//function definition ma hamara pas data type or variable hota ha jisa hum parameters kahta han>>>|| 
// Jab ka function call-in ma hamara pas value hoti ha jisa ham argument kahta han.     
   int number(int number1,int number2,int number3,int number4)
{


//	            int number1,number2,number3,number4;
//          cout<<"Enter first number: "<<endl;
//          cin>>number1;
//          cout<<"Enter second number: "<<endl;
//          cin>>number2;
//          cout<<"Enter third number: "<<endl;
//          cin>>number3;
//		  cout<<"Enter fourth number: "<<endl;
//		  cin>>number4;
		  cout <<"Number 1 is: "<< number1<<endl;	
		  cout <<"Number 2 is: "<< number2<<endl;
		  cout <<"Number 3 is: "<< number3<<endl;
		  cout <<"Number 4 is: "<< number4<<endl; 
		  return number1;     
}
	  
//		cout <<"Number 1 is: "<< number1<<endl;	
//		cout <<"Number 2 is: "<< number2<<endl;
//		cout <<"Number 3 is: "<< number3<<endl;
//		cout <<"Number 4 is: "<< number4<<endl;

    int main() {
		number(45,85,95,75);
       
        
		 getch (); 
		 return 0;
}

