#include<iostream>
using namespace std;

	void Mult(int a,int b)
	{
		
		int c = a*b;
		cout<<"Multiplication= "<<c<<endl;
	}
	void Add(int a,int b)
	{
		int c =a+b;
		cout<<"Addition ="<<c<<endl;
	}
	void Sub(int a,int b)
	{
		int c =a-b;
		cout<<"Substraction ="<<c<<endl;
	}
	void Div(int a,int b)
	{
	
		int c = a/b;
		cout<<"Division ="<<c<<endl;
	}
	
	int main()
	{
	
		Mult(10,5);
		Add(10,5);
		Sub(15,5);
		Div(15,5);
	
	}
	
	
