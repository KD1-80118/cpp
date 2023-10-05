#include<iostream>
using namespace std;

class Cylinder{
    private:
    const double pi;
    double radius;
    double height;
    public:
    Cylinder():pi(3.14)
    {
        this->radius=1.0;
        this->height=1.0;

    }
    Cylinder(double radius,double height):pi(3.14)
    {
        this->radius=radius;
        this->height=height;

    }
    double getRadius(){
        return this->radius;
    }
     double getHeight(){
        return this->height;
    }
    double getVolume(){
        return (this->pi * this->radius*this->radius*this->height);
    }
    void setRadius(double radius){
        this->radius=radius;
    }
    void setHeight(double height){
        this->height=height;
    }
    void printVolume(){
        cout<< "Volume of Given Cylinder is : " <<this->getVolume()<< endl;
    }



};
int main(){
    Cylinder c1;
    cout<<
    "Height of c1(default) : "<<
    c1.getHeight()<<
    "\nRadius of c1(default) : "<<
    c1.getRadius()<<
    "\nVolume of this Cylinder is : "<<
    c1.getVolume()<<
    endl;
    double r=0,h=0;
    cout<< "Enter the new Radius and Height.\n" <<
    "Radius :";
    cin>>r;
    cout<<"\nHeight : ";
    cin>>h;

    c1.setHeight(h);
    c1.setRadius(r);

    c1.printVolume();





    Cylinder c2(15.0,14.0);
    cout<<
    "Height of c2 : "<<
    c2.getHeight()<<
    "\nRadius of c2 : "<<
    c2.getRadius()<<
    "\nVolume of this Cylinder is : "<<
    c2.getVolume()<<
    endl;

    cout<< "Enter the new Radius and Height.\n" <<
    "Radius :";
    cin>>r;
    cout<<"\nHeight : ";
    cin>>h;

    c2.setHeight(h);
    c2.setRadius(r);

    c2.printVolume();




    return 0;
}