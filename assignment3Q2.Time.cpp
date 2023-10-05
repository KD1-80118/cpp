#include<iostream>
using namespace std;

class Time{
    private:
        int h;
        int m;
        int s;
    public:
        Time(){
            this->h=0;
            this->m=0;
            this->s=0;
        }    
        Time(int h,int m,int s){
            this->h=h;
            this->m=m;
            this->s=s;

        }

        int getHour(){
            return this->h;

        }
        int getMinute(){
            return this->m;
            
        }
        int getSeconds(){
            return this->s;
            
        }
        void setHour(int h){this->h=h;}
        void setMinute(int m){this->m=m;}
        void setSeconds(int s){this->s=s;}

        void printTime(){
            cout<<
            "Your Entered Time is    "<<
            this->h<<
            ":"<<
            this->m<<
            ":"<<
            this->s<<
            endl;
        }

};

int main(){
    cout<<"Enter the number of time you want to Add to array. \n"<<endl;
    int count=0;
    cin>>count;
    Time *s1 = new Time[count];
    int h=0,m=0,s=0;
    for(int i=0;i<count;i++){
        cout<<"Initailize s[" <<i<<"]:\n"<<"Enter HH MM SS"<<endl;
        cin>>h >> m;
        cin>>s;
        s1[i].setHour(h);
        s1[i].setMinute(m);

        s1[i].setSeconds(s);  
              

    }


    for(int i=0;i<count;i++){
        
        cout<<"----------------------------------------------\n"<<endl;
        s1[i].printTime();
        cout<<"\n----------------------------------------------\n"<<endl;
        

    }

    delete s1;


    return 0;
}