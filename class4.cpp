#include <iostream>
using namespace std;
class flight
{
    int flight_number;
    string destination;
    float distance;
    float fuel;
    void calfuel(float distance);

public:
    void feedinfo()
    {
        cout << "enter flight number:";
        cin >> flight_number;
        cout << "enter destination:";
        cin >> destination;
        cout << "enter distance:";
        cin >> distance;
    }
    void showinfo()
    {
        cout << "enter flight number:" << flight_number << endl;
        cout << "enter destination:" << destination << endl;
        cout << "enter distance:" << distance << endl;
        calfuel(distance);
    }
};
void flight ::calfuel(float distance)
{
    if (distance <= 1000)
    {
        cout << "fuel use is:500" << endl;
    }
    else if (distance > 1000 && distance <= 2000)
    {
        cout << "fuel use is:1100" << endl;
    }
    else
    {
        cout << "fuel use is:2200" << endl;
    }
}
int main()
{
    flight detail;
    detail.feedinfo();
    cout << "**************" << endl;
    detail.showinfo();

    return 0;
}