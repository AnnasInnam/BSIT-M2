#include<iostream>
using namespace std;
int main()
{
	// In this program we can find the sum of 1000 integers starting from 1
	int sum,number;  // Initializing two variables
	sum = 0;
	number = 1;
	
	while(number<=1000) //using while loop to get 1000 number automatically
	{
		sum=sum+number;
		//In this statment sum get a value  
		number=number+1;
		//In this statment number is add by 1 until it reach the given condition of while loop
	}
	
	cout<<"Sum of first 1000 number are="<<sum;
}
