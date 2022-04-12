#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	int a[100];
	
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter"<<n<<"numbers:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
			if(a[i]>0){
			cout<<"Number is positive";
	}
	
		}
	
	
	cout<<"\nOdd numbers\n:";
	for(i=0;i<n;i++){
			if(a[i]%2==1)
	        cout<<" "<<a[i];
	}
	cout<<"\nEven numbers:\n";
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		cout<<" "<<a[i];
		
	}

}

