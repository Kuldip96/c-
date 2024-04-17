#include <iostream>
using namespace std;
class batsman
{
    int bcode;
    string bname;
    int innigs, notout, runs;
    void calcavg();

public:
    void readData()
    {
        cout << "enter bcode:";
        cin >> bcode;
        cout << "enter baname:";
        cin >> bname;
        cout << "enter innigs:";
        cin >> innigs;
        cout << "enter notout:";
        cin >> notout;
        cout << "enter runs:";
        cin >> runs;
    }
    void displaydate()
    {
        cout << " bcode is:" << bcode << endl;

        cout << " baname is:" << bname << endl;

        cout << " innigs is:" << innigs << endl;

        cout << " notout is:" << notout << endl;

        cout << " runs is:" << runs << endl;
        calcavg();
    }
};
void batsman ::calcavg()
{
    int batavg;
    batavg = runs / (innigs - notout);
    cout << "batavg is:" << batavg << endl;
}

int main()
{
    batsman detail;
    detail.readData();
    cout << "**********************" << endl;
    detail.displaydate();

    return 0;
}