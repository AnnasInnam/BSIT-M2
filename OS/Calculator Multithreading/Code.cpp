#include <iostream>
using namespace std;
int main()
{
    char op;
  //Using float because values also be in
  //floating point numbers
    float num1, num2;
cout<<"Annas inam: Roll no 47"<<endl;
cout<<"......CALCULATOR......."<<endl;
//Getting operator from user
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

//Getting two operands from user
    cout << "Enter two operands";
    cin >> num1 >> num2;

//Using switch case and running code with on the bases of operator
    switch (op)
    {
//Addition case        
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
//Substraction case
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
//Multiplication case
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
//Division case
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;

    default:
        break;
    }
}
