#include <iostream>

using namespace std;

void zero_one_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << (i+j+1)%2 << " ";
        }
        cout << endl;
    }
}

void parallelogram(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void numberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void palindromicNumberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    cout << "Zero-One pattern" << endl;
    zero_one_pattern(n);
    cout << endl;

    cout << "Parallelogram" << endl;
    parallelogram(n);
    cout << endl;

    cout << "Number Pyramid" << endl;
    numberPattern(n);
    cout << endl;

    cout << "Palindromic Number Pyramid" << endl;
    palindromicNumberPyramid(n);
    cout << endl;

    return 0;
}