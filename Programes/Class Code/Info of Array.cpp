// store the marks of 50 students and store them:
// How to use Arrays:
//How to store data using Arrays:
//We can use array to store data in bulk:

#include<iostream>
using namespace std;


int main()
{
/*	int a [5];   //In this example compiler make 5 boxes and give them number to every indivual and numbering is start with character '0' 
	a[0]=10;	 //When compiler read [] compiler understand than this is an array:
	a[1]=20;     //We have to show the size of array how mush data we want to store in a singal array:	
	a[2]=30;
	a[3]=40;
	a[4]=50;
	a[5]=60;
	a[6]=70;
	cout<<"Value of first index is:"<<a[3];
	cout<<"value of any index:"<<a[5];
	cout<<"value of any index:"<<a[6];*/
	
	int size=5;
	int a[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter your value =";
		cin>>a[i];
		cout<<"Your value ="<<a[i]<<endl;
	
	}
	
	
}

