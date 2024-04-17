#include <iostream>
using namespace std;
class test
{
    int testcode;
    string description;
    int nocandidate;
    float calcenter(int nocandidate);

public:
    void schedule()
    {
        cout << "enter testcode:";
        cin >> testcode;
        cout << "enter description:";
        cin >> description;
        cout << "enter No Of Candidate:";
        cin >> nocandidate;
        calcenter(nocandidate);
    }
    void showinfo()
    {
        cout << " testcode is:" << testcode << endl;

        cout << " description is:" << description << endl;

        cout << " No Of Candidate is:" << nocandidate << endl;
        int x;
        x = calcenter(nocandidate);
        cout << "calcenter is:" << x << endl;
    }
};
float test ::calcenter(int nocandidate)
{
    int center = nocandidate / 101;
    return center;
}
int main()
{

    test detail;
    detail.schedule();
    cout << "******************" << endl;
    detail.showinfo();
    return 0;
}