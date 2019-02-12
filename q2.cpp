#include<iostream>
using namespace std;

int rev(int n)
{
    int i, temp = 0;
    for (i = n; i > 0; i = i / 10){
        temp = (temp * 10) + (i % 10);
    }
    return temp;
}

int main()
{
    int t, n1, n2, sum = 0;
    cin >> t;
    while (t--){
        cin >> n1;
        cin >> n2;
        sum = rev(n1) + rev(n2);
        cout << rev(sum) <<"\n";
    }
return 0;
}