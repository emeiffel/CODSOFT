#include<iostream>
using namespace std;
int main()
{
	char op,choice;
	float num1,num2;
	
	cout<<"\t\t\tWELCOME TO SIMPLE CALCULATOR"<<endl;
    do{
	
		cout<<"\n\nENTER OPERAND FOR PERFORMING OPERATIONS"<<endl;
		cout<<"\nEnter first number"<<endl;
		cin>>num1;
		cout<<"\nEnter second number\t"<<endl;
		cin>>num2;
		cout<<"\n\nENTER THE OPEARTION + or - or * or /."<<endl;
		cin>>op;
		switch(op)
		{
			case'+':
				cout<<"ADDITION IS:"<<num1+num2;
				
			    break;
			case'-':
				cout<<"SUBSTRACTION IS:"<<num1-num2;
				break;
			case'*':
				cout<<"MULTIPLICATION IS:"<<num1*num2;
				break;
			case '/':
	                if (num2 != 0) {
	                    cout << "DIVISION IS: " << num1 / num2;
	                } else {
	                    cout << "ERROR: Division by zero is undefined.";
	                }
	                break;
	            default:
	                cout << "YOU HAVE ENTERED INCORRECT OPERATION";
	        }
	
	        cout << "\n\nDo you want to perform another calculation? (y/n): ";
	        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended. Thank you for using the calculator." << endl;

    return 0;
}
