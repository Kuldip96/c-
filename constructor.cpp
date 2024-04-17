#include<iostream>
using namespace std;
int numeber=0;

class Complex{


        public:

        Complex(){
            numeber++;
            cout<<"The number is"<<numeber<<endl;
        };
        ~Complex(){
            numeber--;
            cout<<"The number is"<<numeber<<endl;
        }
};


int main(){
    Complex data,data1,data2;

}