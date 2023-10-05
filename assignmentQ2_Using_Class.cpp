#include<iostream>
using namespace std;

#define LB() cout<<"\n"<<endl //Line Break macro


//global variable defination and declaration

int choice;

//class declaration & defination
class Date
{

private:
	int day;
	int month;
	int year;
public:

	void initDate(Date* ptrDate){
		ptrDate->day=10;
		ptrDate->month=9;
		ptrDate->year=2023;
		cout<<"Your Date has been initialized.\n" <<endl;
	}


	void printDateOnConsole(Date* ptrDate)
	{
	cout<< 
	"\n-----------------------------------------------------------\n" <<
	"Your entered Date is : "<<
	ptrDate->day <<
	" - "<<
	ptrDate->month << 
	" - "<<
	ptrDate->year <<
	"\n-----------------------------------------------------------\n" <<
	endl;
	}
	
	void acceptDateFromConsole(Date* ptrDate){
	cout<< "Please Enter your Date  :  \n" <<endl;
	cin>>ptrDate->day >>ptrDate->month >>ptrDate->year;
	LB();
	
	
	}
	
	bool isLeapYear()
	{
	bool check= false;
	if((year%4)==0){
	check= true;
	}

	if((year%100)==0 ){
		if((year%400) == 0){check=true;}
	else{
		check=false;
	    }
	}

	return check;
	}

};

int menu()
{
	
	cout <<
	"Enter the digit currosponding to menu. \n" <<
	"Press '0' for existing the Program. \n"<<
	"Press '1' for Entering your Date. \n"<<
	"Press '2' for Printing your Date to console.\n" <<
	"Press '3' for Initializing your Date with Current Day. \n"<<
	"Press '4' for Checking if your Date belong to Leap year. \n" <<
	"Enter the Digit...........................\n" <<
	endl;
	
	
	cin>> choice;
	



	return choice;
}




int main()
{

Date d1;
Date* d2;

d2=&d1;

while(menu()){
	
	switch(choice){
		case 1:
		d1.acceptDateFromConsole(d2);
		break;
		case 2:
		d1.printDateOnConsole(d2);
		break;
		case 3:
		d1.initDate(d2);
		break;
		case 4:
		if(d1.isLeapYear()){
		cout<< "\nYour date does comes in leap year, congratulations.\n" <<endl;
		}else{
		cout<< "\nYour date does not come under Leap year, Try again! \n"<<endl;
		}
		break;
		default:
		cout<< "\nEnter the correct digit and Try again.......... \n" <<endl;
	
	
	}



}

cout<<"\nThank you for using my Program.\n"<<endl;
 

return 0;
}
