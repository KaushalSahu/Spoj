#include <iostream>
using namespace std;

int main()
{
    int t, n, zeros;
    cin >> t;
    while(t--) {
        cin >> n;
        zeros = 0;
        while(n >= 5) {
            zeros += n / 5;
            n = n / 5;
        }
        cout << zeros << endl;
    }
    return 0;
}