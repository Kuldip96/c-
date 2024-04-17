#include<iostream>
using namespace std;

class Employee{
        private:
        int id;
        int salary;
        public:
        
        void addData(){
            cout<<"add id :";
            cin>>id;
        }
        void show(){

            cout<<"Employee id is:"<<id<<endl;
        }
};

int main(){
    Employee ravi,raj;
  
    ravi.addData();
    raj.addData();
    ravi.show();
    raj.show();
    return 0;
}