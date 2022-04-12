#include<iostream>
using namespace std;
int main()

	//Ask user to enter his or her grade
	//if your grade is A "Exellent"
	//if your grade is B "Good"
	//if your grade is C "Satisfactory"
	//if your grade is D "Poor"
	//if your grade is F "Fail"
{
	char grade;
	
	cout<<"Enter your grades=";
	cin>>grade;
	//We have multiple options in over problem
	if(grade=='A')
	{
		cout<<"Your grade is Exellent"<<endl;
	}
	else if(grade=='B')
	{
		cout<<"your grade is Good"<<endl; 
	}
	else if(grade=='C')
	{
		cout<<"your grade is Satisfactory"<<endl; 
	}
	else if(grade=='D')
	{
		cout<<"your grade is Poor"<<endl; 
	}
	else if(grade=='F')
	{
		cout<<"your grade is Fail"<<endl;
	}
	
	cout<<"We are done";
	
		
}
