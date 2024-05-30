#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool flag = true; // prime number
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            flag = false;//composite number
        break;
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(flag==true) cout<<"prime";
    else cout<<"Composite";
}