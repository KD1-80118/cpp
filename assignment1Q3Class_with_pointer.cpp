#include<iostream>
#include<string>
using namespace std;

#define LB() cout<<"\n"<<endl //Line Break macro


//global variable defination and declaration

int choice;

//class declaration & defination
class Student
{

private:
	int rollNo;
	string name;
	int marks;
public:

	void initStudent(Student* ptrStudent){
		ptrStudent->rollNo=0;
		ptrStudent->name="Initalized Name(substiute later)";
		ptrStudent->marks=0;
		cout<<"Student data has been initialized.\n" <<endl;
	}


	void printStudentOnConsole(Student* ptrStudent)
	{
	cout<< 
	"\n-----------------------------------------------------------\n" <<
	"Your entered Student Data is : \n"<<
	"Roll no.: "<<
	ptrStudent-> rollNo <<
	"\nName of Student : "<<
	ptrStudent->name << 
	"\nMarks Obtained : "<<
	ptrStudent->marks << "/100" <<
	"\n-----------------------------------------------------------\n" <<
	endl;
	}
	
	void acceptStudentFromConsole(Student* ptrStudent){
	cout<< "Please Enter Student Data-------------  \n" <<endl;
	cout<< "Enter Your Roll no.: " <<endl;
	cin>>ptrStudent->rollNo;
	cout<< "Enter Your Name : " <<endl;
	cin>>ptrStudent->name;
	cout<< "Enter the Marks you obtained(out of 100): " <<endl;
	cin>>ptrStudent->marks;
	LB();
	
	}
	
	

};

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
	
	
	cin>> choice;
	



	return choice;
}




int main()
{

Student student1;
Student* ptrStudent;

ptrStudent=&student1;

while(menu()){
	
	switch(choice){
		
		case 1:
		student1.acceptStudentFromConsole(ptrStudent);
		break;
		
		case 2:
		student1.printStudentOnConsole(ptrStudent);
		break;
		
		case 3:
		student1.initStudent(ptrStudent);
		break;
		
		default:
		cout<< "\nEnter the correct digit and Try again.......... \n" <<endl;
	
	
	}



}

cout<<"\n***********Thank you for using my Program.************ \n"<<endl;
 

return 0;
}
