#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;
    cout << "Enter the amount of money : ";
    cin >> m;
    int count100 = 0;
    int count50 = 0;
    int count20 = 0;
    int count1 = 0;
    while (m != 0)
    {
        if (m >= 100)
        {
            n = 100;
        }
        else if(m >= 50)
        {
            n = 50;
        }
        else if(m >= 20)
        {
            n = 20;
        }
        else
        {
            n = 1;
        }
        switch (n)
        {
        case 100:
            count100 = m / 100;
            m = m % 100;
            break;

        case 50:
            count50 = m / 50;
            m = m % 50;
            break;

        case 20:
            count20 = m / 20;
            m = m % 20;
            break;

        case 1:
            count1 = m / 1;
            m = m % 1;
            break;
        }
    }
    cout<<"The number of notes of 100 is " << count100 << ", 50 is " << count50 << ", 20 is " << count20 << " and 1 is " << count1 << endl;
    return 0;
}