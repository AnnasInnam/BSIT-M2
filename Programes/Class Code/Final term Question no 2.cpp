#include<iostream>
#include<string>
using namespace std;

void MyInfo(string Myname ,string Fathername,int Rollno)
{
	cout<<"MY Name is:"<<Myname<<endl;
	cout<<"My Father name is:"<<Fathername<<endl;
	cout<<"Enter your Roll No:"<<Rollno<<endl;
	if(Rollno % 2 ==0)
	{
		cout<<Rollno<<" =is even:";
	}
	else
	{
		cout<<Rollno<<" =is odd:";
	}
	
}
int main()
{
	MyInfo("M.Hamza","Usman Ghani",11);
	
}
