#include<iostream>
#include<stdlib.h>

using namespace std;

		char a[10]={'1','2','3','4','5','6','7','8','9'};
		int player;
		int choice=0;
		//Winner function
    winner()
    {
        if(a[0]=='X' && a[3]=='X' && a[6]=='X' || a[1]=='X' && a[4]=='X' && a[7]=='X' || a[2]=='X' && a[5]=='X' && a[8]=='X'
           || a[0]=='X' && a[1]=='X' && a[2]=='X' || a[3]=='X' && a[4]=='X' && a[5]=='X' || a[6]=='X' && a[7]=='X' && a[8]=='X'
           || a[0]=='X' && a[4]=='X' && a[8]=='X' || a[2]=='X' && a[4]=='X' && a[6]=='X')
            {cout<<"Player 0ne is Winner.";
            exit(1);}

        if(a[0]=='0' && a[3]=='0' && a[6]=='0' || a[1]=='0' && a[4]=='0' && a[7]=='0' || a[2]=='0' && a[5]=='0' && a[8]=='0'
           || a[0]=='0' && a[1]=='0' && a[2]=='0' || a[3]=='0' && a[4]=='0' && a[5]=='0' || a[6]=='0' && a[7]=='0' && a[8]=='0'
           || a[0]=='0' && a[4]=='0' && a[8]=='0' || a[2]=='0' && a[4]=='0' && a[6]=='0')
            {cout<<"Player Two is Winner.";
            exit(1);}
    }

//replace 'X' values
	
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
	cout<<"\t\t\t _______"<<endl;
	cout<<"\t\t\t|_______|"<<endl;
	cout<<"\t\t\t|  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  |"<<endl;
	cout<<"\t\t\t|_______|"<<endl;
	cout<<"\t\t\t|  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  |"<<endl;
	cout<<"\t\t\t|_______|"<<endl;
	cout<<"\t\t\t|  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  |"<<endl;
	cout<<"\t\t\t|_______|"<<endl;

			}
int main()
{
	board();
		for(int i=0; i<=8; i++)
	{
			if(i%2==0)
			{	cout<<"**Player 1(\"X\")**:";
				cin>>choice;
				system("CLS");
				pos1();
				winner();
				board();
			}


			if(i%2!=0)
			{	cout<<"**Player 2**(\"0\"):";
				cin>>choice;
				system("CLS");
				pos2();
				winner();
				board();
			}
}
}
