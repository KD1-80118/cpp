#include<iostream>
using namespace std;

namespace NStudent{
    int choice;
class Student
{

private:
	int rollNo;
	string name;
	int marks;
public:

	void initStudent(){
		this->rollNo=0;
		this->name="Initalized Name(substiute later)";
		this->marks=0;
		cout<<"\nStudent data has been initialized.\n" <<endl;
	}


	void printStudentOnConsole()
	{
	cout<< 
	"\n-----------------------------------------------------------\n" <<
	"Your entered Student Data is : \n"<<
	"Roll no.: "<<
	this-> rollNo <<
	"\nName of Student : "<<
	this->name << 
	"\nMarks Obtained : "<<
	this->marks << "/100" <<
	"\n-----------------------------------------------------------\n" <<
	endl;
	}
	
	void acceptStudentFromConsole(){
	cout<< "Please Enter Student Data-------------  \n" <<endl;
	cout<< "Enter Your Roll no.: " <<endl;
	cin>>this->rollNo;
	cout<< "Enter Your Name : ";
	cin>>this->name;
	//getline(cin,this->name);
	cout<< "Enter the Marks you obtained(out of 100): " <<endl;
	cin>>this->marks;
    cout<<"/n"<<endl;
	
	}
	
	

};



}
int menu()
{
	
	cout <<
	"Enter the digit currosponding to menu. \n" <<
	"Press '0' for existing the Program. \n"<<
	"Press '1' for Entering Student Data. \n"<<
	"Press '2' for Printing Student Information to console.\n" <<
	"Press '3' for Initializing Student Student with Temporary Values. \n"<<
	"Enter the Digit...........................\n" <<
	endl;
	
	
	cin>> NStudent::choice;
	



	return NStudent::choice;
}

int main(){

NStudent::Student student1;



while(menu()){
	
	switch(NStudent::choice){
		
		case 1:
		student1.acceptStudentFromConsole();
		break;
		
		case 2:
		student1.printStudentOnConsole();
		break;
		
		case 3:
		student1.initStudent();
		break;
		
		default:
		cout<< "\nEnter the correct digit and Try again.......... \n" <<endl;
	
	
	}



}

cout<<"\n***********Thank you for using my Program.************ \n"<<endl;

return 0;
}