#include<iostream>
using namespace std;

int choice;

class Box{
private:
double length;
double breadth;
double width;
public:
	Box(){
	this->length=0;
	this->breadth=0;
	this->width=0;
	
	}
	Box(double length,double breadth=10,double width=10){
	this->length=length;
	this->breadth=breadth;
	this->width=width;
	}

void boxInit(){
	this->length=1.0;
	this->breadth=1.0;
	this->width=1.0;
}

void displayDimension(){

	cout
	<<"\n---------------------------------\n"
	<<"Dimension of your box is"
	<<"\nLenght : "
	<<this->length
	<<"\nBreadth : "
	<<this->breadth
	<<"\nWidth : "
	<<this->width
	<<"\n---------------------------------\n"
	<<endl;




}

void calculateVolume(){
	double vol= this->length*this->breadth*this->width;
	cout<<"\nVolume of your box is : " <<vol <<"\n"<< endl;
}

void acceptDimension(){
	cout<<"Enter the Dimension of your box as directed\n"
	<<"Enter the Lenght :" <<endl;
	cin>>this->length;
	cout<<"\nEnter the breadth :"<<endl;
	cin>>this->breadth;
	cout<<"\nEnter the witdh :"<<endl;
	cin>>this->width;



}
};


int menu(){
	cout
	<<"\n0. Exit the program.\n"
	<<"1. Enter the dimension of your box.\n"
	<<"2. Initialize your box with default dimensions.\n"
	<<"3. Display dimension of your box in console.\n"
	<<"4. Calculate the volume of your box"
	<<endl;
	cin>>choice;
	return choice;

}












int main(){

Box b1;
while(menu()){
	switch(choice){
		case 1:
		b1.acceptDimension();

		break;
		case 2:
		b1.boxInit();
		break;
		case 3:
		b1.displayDimension();
		break;
		case 4:
		b1.calculateVolume();
		break;
		default:
			cout<<"\nEnter correct value"<<endl;

	}


}

return 0;
}
