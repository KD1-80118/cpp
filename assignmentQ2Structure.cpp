#include<iostream>
using namespace std;


int yearCheck;
int choice;

struct Date{
	int day;
	int month;
	int year;
	
};

void initDate(struct Date* ptrDate){
	ptrDate->day=9;
	ptrDate->month=9;
	ptrDate->year=2023;
	yearCheck=ptrDate->year;
	cout<<"\n Your Date is Successfully Initialize.    \n"<< endl; 
	

}



void printDateOnConsole(struct Date* ptrDate){

cout<<
"\n-------------------------------------\nYour entered Date is " 
<< ptrDate->day << 
" - " 
<< ptrDate->month 
<< " - " << 
ptrDate->year 
<< ".\n-------------------------------------\n"
<<endl;
	 

}
void acceptDateFromConsole(struct Date* ptrDate){
cout<< "\nEnter your date.\n" <<endl;
cin>> ptrDate->day >> ptrDate->month>> ptrDate->year ;
cout<<"\n";
yearCheck=ptrDate->year;


}
bool isLeapYear(){
bool check= false;
if((yearCheck%4)==0){
	check= true;
}

if((yearCheck%100)==0 ){
	if((yearCheck%400) == 0){check=true;}
	else{
	check=false;
	}
}

return check;
}


int menu(){
	
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












int main(){
struct Date d1;
struct Date* d2;
d2=&d1;

while(menu()){
	
	switch(choice){
		case 1:
		acceptDateFromConsole(d2);
		break;
		case 2:
		printDateOnConsole(d2);
		break;
		case 3:
		initDate(d2);
		break;
		case 4:
		if(isLeapYear()){
		cout<< "\nYour date does comes in leap year, congratulations.\n" <<endl;
		}else{
		cout<< "\nYour date does not come under Leap year, Try again! \n"<<endl;
		}
		break;
		default:
		cout<< "\nEnter the correct digit and Try again.......... \n" <<endl;
	
	
	


	}



}






//initDate(d2);
//acceptDateFromConsole(d2);
//printDateOnConsole(d2);


return 0;
}
