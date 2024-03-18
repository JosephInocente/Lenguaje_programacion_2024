#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Digite  1 numero: "<<endl;
    cin >> num1;
    cout << "Digite 2 numero: "<<endl;
    cin >> num2;

    if (num1 < num2)
    {
        cout << num1 << "Es menor" << endl;
    }
    else
    {
        cout << num2 << "Es menor" << endl;
    }

    return 0;
}