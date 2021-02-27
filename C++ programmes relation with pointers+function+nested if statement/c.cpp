#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
 int size=5;
void copy_arry(int arry[],int size)
	{
		system("Color f5");
	//Display-Old Array..............
	cout<<"Old Array"<<endl;
	//
	for(int a=0;a<size;a++)
	{
		cout<<"Element at "<<a<<" Index  :"<<arry[a]<<endl;
	}
	//New Array Declare..........
	int new_arry[size]; 
	//copy Array from to Old.........
	for(int a=0;a<size;a++){
		new_arry[a]=arry[a];
	}
		//Display-New Array..............
	cout<<"New Array"<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"Element at "<<a<<" Index  :"<<new_arry[a]<<endl;
	}
 }
 //2.Update Value.....
int update_element(int arry[],int size)
{ system("Color b6");
		//Display-Old Array..............
	cout<<"Old Array"<<endl;
	//
	for(int a=0;a<size;a++)
	{
		cout<<"Element at "<<a<<" Index  :"<<arry[a]<<endl;
	}
	int up, up_ele; // Declare Variable for of index or New Value
	cout<<"Enter Index No Which Element Update : ";
	cin>>up;
	cout<<"Enter Updated Element : ";
	cin>>up_ele;
//Update Value from User.........
	cout<<"Update Array"<<endl;
	//Display Updated Array.......
	for(int a=0;a<size;a++)	{
		if(a==up){
			arry[a]=up_ele;     // Replace Value by New Value.......
		}
	cout<<"Element at "<<a<<" Index  :"<<arry[a]<<endl;
	}
cout<<endl<<endl;	
}
//3.Clear Array...
int clear_arry(int arry[], int size)
{ system("Color 61");
	//Display-Old Array..............
	cout<<"Old Array"<<endl;
	for(int a=0;a<size;a++)	
	{
	cout<<"Element at "<<a<<" Index  : "<<arry[a]<<endl;
    }
	size=0; //Array Size is Equal the Array is clear.......
	cout<<"Array is Clear........"<<endl;
system("Color 94");
cout<<endl<<endl;
}
int get_element(int arry[], int size)
{ system("Color 61");
	//Display-Old Array..............
	cout<<"Old Array"<<endl;
	for(int a=0;a<size;a++)	
	{
	cout<<"Element at "<<a<<" Index  : "<<arry[a]<<endl;
    }
    int get;
	cout<<"Enter Index No which value You Get : ";
	cin>>get;
	for(int a=0;a<size;a++)	
	{
		if(a==get){
		cout<<"The Value Is : "<<arry[a]<<endl;
		}	
    }
  cout<<endl<<endl;  
}
main()
{
	
	int size=5,op;
	int arry[size]={1,2,3,4,5};
	while(1){
	cout<<"1.Copy Array in New Array......"<<endl;
	cout<<"2.Update Any Element of Array......"<<endl;
	cout<<"3.Clear list Remove All Element....."<<endl;
	cout<<"4.Get Element by Position....."<<endl;
	cout<<"0.Exit The Program......"<<endl;
		cout<<"Select Option : ";
	cin>>op;
	system("CLS");
switch(op) 
{
	   	case 1:
		copy_arry(arry,size);
			break;
		case 2:
		update_element(arry,size);
			break;
		case 3:
		clear_arry(arry,size);
			break;
		case 4:
		get_element(arry,size);
			break;
		case 0:
			exit(0);
			return 0;
				getch();
		default:
		cout<<"You Select Wrong Option Select Again......."<<endl;
			break;
}
	}
return 0;
	getch();
}


