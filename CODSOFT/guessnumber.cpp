#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number=(rand() % 100)+1;
	int guess=0;
	cout<<"\t\t\t\t\t\tWELCOME TO NUMBER GUESSING GAME";
	do
	{
		cout<<"\n\nENTER THE GUESS NUMBER BETWEEN (0-100)"<<endl;
		cin>>guess;
		if (guess>number)
		   cout<<"GUESS LOWER!"<<endl;
		else if (guess<number)
		    cout<<"GUESS HIGHER!"<<endl;
		else
			cout<<"YOU WON, YOU HAVE GUESS CORRECT NUMBER";
	}
	while(guess!=number);
	return 0;
	
}
