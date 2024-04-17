#include <iostream>
using namespace std;
class report
{
    int adno;
    string name;
    float marks[5];
    float average;
    void getavg();

public:
    void readinfo()
    {
        cout << "enter adno :";
        cin >> adno;
        cout << "enter name :";
        cin >> name;
    }
    void displayinfo()
    {
        cout << "adno is:" << adno << endl;
        cout << "name is:" << name << endl;
        getavg();
    }
};
void report ::getavg()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << i << " subject mark is:";
        cin >> marks[i];
    }
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {

        sum = sum + marks[i];
    };
    average = sum / 5;
    cout << "average of five subject is:" << average << endl;
}
int main()
{

    report detail;
    detail.readinfo();
    detail.displayinfo();
    return 0;
}