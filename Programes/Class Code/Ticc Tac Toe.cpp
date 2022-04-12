#include<iostream>
#include<stdlib.h>

using namespace std;

		char a[50]={'1','2','3','4','5','6','7','8','9'};
		int player;	
		int choice=0;
		int checkwin()
{
		if (a[0] == a[1]  && a[1] == a[2] )
		{	if ( a [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (a[3] == a [4]  && a[4] == a[5] )
			{	if ( a [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (a[6] == a [7]  && a[7] == a[8] )
			{	if ( a[6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (a[0] == a [3]  && a[3] == a[6] )
			{	if ( a [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (a[1] == a[4]  && a[4] == a[7] )
			{	if (a[1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (a[2] == a [5]  && a[5] == a[8] )
			{	if ( a [2] == 'X' )			
			return 1;
			else
			return 2; 
		}

	else if (a[0] == a [4]  && a[4] == a[8] )
			{	if ( a [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	
	else if (a[2] == a [4]  && a[4] == a[6] )
			{	if ( a [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	
	else if (a[0] == a[3]  && a[3] == a[6] )
			{	if ( a [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else 
		return 0;

//replace 'X' values
	void pos1()
	{
			if(choice==1)
		{
			a[0]='X';
		}
		else if(choice==2)
		{
			a[1]='X';
		}
		else if(choice==3)
		{
			a[2]='X';
		}
		else if(choice==4)
		{
			a[3]='X';
		}
		else if(choice==5)
		{
			a[4]='X';
		}
		else if(choice==6)
		{
			a[5]='X';
		}
		else if(choice==7)
		{
			a[6]='X';
		}
		else if(choice==8)
		{
			a[7]='X';
		}
		else if(choice==9)
		{
			a[8]='X';
		}
		else
		{
			cout<<"Invalid Choice";
		}
	}
	
	
		
	

//replace '0' values
	
	void pos2()
	{
		if(choice==1)
		{
			a[0]='0';
		}
		else if(choice==2)
		{
			a[1]='0';
		}
		else if(choice==3)
		{
			a[2]='0';
		}
		else if(choice==4)
		{
			a[3]='0';
		}
		else if(choice==5)
		{
			a[4]='0';
		}
		else if(choice==6)
		{
			a[5]='0';
		}
		else if(choice==7)
		{
			a[6]='0';
		}
		else if(choice==8)
		{
			a[7]='0';
		}
		else if(choice==9)
		{
			a[8]='0';
		}
		else{
			cout<<"Invalid Choice!!!";
				}
				
		
	}
void board(){
	
    cout<<"\t\t\t   <TIC TAC TOE>"<<endl<<endl;
	cout<<"\t\t\tWelcome to the game!!!!!"<<endl<<endl<<endl;
	cout<<"\t\t\t|_________________|"<<endl;
	cout<<"\t\t\t|  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  |"<<endl;
	cout<<"\t\t\t|_________________|"<<endl;
	cout<<"\t\t\t|  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  |"<<endl;
	cout<<"\t\t\t|_________________|"<<endl;
	cout<<"\t\t\t|  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  |"<<endl;
	cout<<"\t\t\t|_________________|"<<endl;

			}
int main()
{
	checkwin();
	board();
		for(int i=0; i<=8; i++)
	{
		
			if(i%2==0)
			{	cout<<"***Player 1(\"X\")***:";
				cin>>choice;
				system("CLS");
				pos1();
				board();
				checkwin();
			}
				
			
			if(i%2!=0)
			{	cout<<"***Player 2***(\"0\"):";
				cin>>choice;
				system("CLS");
				pos2();
				board();
				checkwin();
			}	
    }



}
