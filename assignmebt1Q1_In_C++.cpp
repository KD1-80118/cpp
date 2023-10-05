#include<iostream>
using namespace std;

struct Date{
	int day;
	int month;
	int year;


};

void initDate(struct Date* ptrDate){
	ptrDate->day = 9;
	ptrDate->month = 9;
	ptrDate->year = 2023;
	

}
void printDateOnConsole(struct Date* ptrDate){
cout<<"\n\n_____________________________________\n\nYour given date is " << ptrDate->day << "-" <<ptrDate->month <<"-" << ptrDate->year<< "\n____________________________________\n\n"<< endl;

}
void acceptDateFromConsole(struct Date* ptrDate){
cin>>ptrDate->day >> ptrDate->month >> ptrDate->year;
}

int menu(){
int choice;
 cout<< "Enter the digit corresponding what you want to do \nPress '0' for Exit. \nPress '1' for initalize Date to current date. \nPress '2' to Initalize Date using Console. \nPress '3' to print your date to console. \nEnter the digit......."<< endl; 
cin>>choice;
return choice;


}


int main(){

struct Date d;
struct Date *d1;
d1=&d;
int choice;


while((choice=menu())!=0){
switch(choice){
	case 1:
		initDate(d1);
		cout<< "Your date has been initalize.\n"<<endl;
		break;
	case 2:
		acceptDateFromConsole(d1);
		cout<< "Enter your date.\n"<<endl;
		break;
	case 3:
		printDateOnConsole(d1);
		break;	
	default:
		cout<< "Press correct number. Retry!!!\n"<<endl;			



}


}



//initDate(d1);
//acceptDateFromConsole(d1);
//printDateOnConsole(d1);


return 0;
}
