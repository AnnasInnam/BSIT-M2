#include<iostream>
using namespace std;
int main()
{
	// declaring Variable
	string outside;
	outside = "raining";
	
	if(outside=="raining") //if this condition is true compiler go in the body of if statment
	{
		cout<<"wear a rain coat"<<endl;
	}
	else				   //if condition of (if)is wrong compiler move to body of (else)
	{
		cout<<"dont wear a rain coat"<<endl;//compiler use this condition   
	}
	cout<<"we are done";
}
