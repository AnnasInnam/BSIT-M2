#include <iostream>

using namespace std;

void MyInfo(string name, string fatherName, int rollNumber){
    string evenOrOdd = rollNumber % 2 == 0? "even": "odd";
    
    cout<<"My name is "<<name<<".\n";
    cout<<"My father's name is "<<fatherName<<" and my roll number is "<<evenOrOdd<<".";
}

int main()
{
    MyInfo("Fahad", "Ghafoor", 50);

    return 0;
}
