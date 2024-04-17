#include<iostream>

using namespace std;

class Complex{
    public:
    int area;
    Complex(){
        int a=10;
        int b=20;
        area=a+b;
      
    }
    Complex(int a){
        area=a+20;
        
    }
    Complex(int a,int b){
       area=a+b;
        
    }
    void print(){
        cout<<area<<endl;
    }

};

int main(){
    Complex obj,obj1(10,50),obj2(20);
    obj.print();
    obj1.print();
    obj2.print();
    return 0;
}