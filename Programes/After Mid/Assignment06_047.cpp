#include<iostream>
using namespace std;
int main()
{
	//Declaring variables
	int value1;
	int value2;
	
	//Assigning values
	value1 = 0;
	value2 = 0;
	
	//Getting value from user 
	cout<<"Enter first value=";
	cin>>value1;
	cout<<"Enter second value=";
	cin>>value2;
	
	//Using (if)statment
	if(value1==value2) //if statment is correct compiler move inside the body of (if)
	{
		cout<<"Your values are equal";
	}
	else			  //if statment is wrong compiler run this command
	{
		cout<<"Your values are not equal";
	}
}
