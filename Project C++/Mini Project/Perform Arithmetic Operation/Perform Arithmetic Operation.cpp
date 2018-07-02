/*
    Program : Perform Arithmetic Operation
*/ 

#include <iostream>
using namespace std;

void showMenu();
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main()
{
	double number1, number2;
	int operation;
	do
	{
		showMenu();
		cin >> operation;
		
		if ( (1<=operation) && (operation<=4) )
		{
           cout << "Enter first number: ";
		   cin >> number1 ;
		   cout << "Enter second number: ";
		   cin >> number2 ;
		   
           while ( (operation==4) && (number2==0) )
		   {
                cout << "The divisor cannot be zero. Please re-enter the second number for divisor" << endl;
    			cin >> number2 ;                 
           }
        }
		
        switch (operation)
		{
    		case 1:
    			cout << "Sum is " << add(number1,number2) <<endl;
    			break;
    		case 2:
    			cout << "Difference is " << subtract(number1,number2) <<endl;
    			break;
    		case 3:
    			cout << "Product is " << multiply(number1,number2) <<endl;
    			break;
    		case 4:
    			cout << "Quotient is " << divide(number1,number2) <<endl;
    			break;
    		case 5:
                break;
    		default:
                    cout << "Invalid input. Please re-enter your choice" << endl;
		}
		
	}while (operation != 5);

    system("PAUSE");
	return 0;
}

void showMenu()
{
	cout << endl << endl;
    cout << "MENU" << endl;
	cout << "1: Add " << endl;
	cout << "2: Subtract" << endl;
	cout << "3: Multiply" << endl;
	cout << "4: Divide" << endl;
	cout << "5: Exit" << endl;
	cout <<  "\nEnter your choice:";
}

double add(double a, double b)
{
	return a+b;
}

double subtract(double a, double b)
{
	return a-b;
}

double multiply(double a, double b)
{
	return a*b;
}

double divide(double a, double b)
{
	return a/b;
}
