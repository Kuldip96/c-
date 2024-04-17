#include <iostream>
using namespace std;
class book
{
    int bookno;
    string booktitle;
    float price_per_copy;
    int N; // no of book copy purchase by user//
    void total_coast(int N);

public:
    void input()
    {
        cout << "enter a book no:";
        cin >> bookno;
        cout << "enter a book Title:";
        cin >> booktitle;
        cout << "enter a price per copy:";
        cin >> price_per_copy;
    }
    void purchase()
    {
        cout << "enter the value of how many copy you want to purchase:";
        cin >> N;
        total_coast(N);
    }
};
void book ::total_coast(int N)
{
    float paid = price_per_copy * N;
    cout << "total cost paid by user is:" << paid << endl;
}
int main()
{
    book detail;
    detail.input();
    detail.purchase();

    return 0;
}