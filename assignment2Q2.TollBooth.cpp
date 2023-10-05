#include<iostream>
using namespace std;

class tollbooth{
    private:
    unsigned int no_of_cars;
    double amount_money;
    public:
    tollbooth(){
        this->amount_money=0.0;
        this->no_of_cars=0;
    }
    void payingCar(){
        this->amount_money=this->amount_money+0.5;
        this->no_of_cars++;
    }


    void nopayCar(){
      this->no_of_cars=this->no_of_cars+1;  
    }

    void printOnConsole(){
        int noOfPayingCars= this->amount_money/0.5;
        int nonPayingCars=this->no_of_cars - noOfPayingCars;
        cout<<
        "----------------------------------------\n"<<
        "Total amount of money collected : " <<
        
        this->amount_money<<
        "\nTotal Number of cars : "<<
        this->no_of_cars<<
        "\nNumber of Paying cars : "<<
         noOfPayingCars<<
         "\nNumber of Non Paying Cars : "<<
         nonPayingCars<<
         "\n---------------------------------------\n";

    


    }


};

int main(){
    tollbooth t1;
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.nopayCar();
    t1.nopayCar();
    t1.nopayCar();
    t1.printOnConsole();
    return 0;
}
