#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, n1, n2, i, j, c;
    cin >> t;
    while(t--){
        cin >> n1;
        cin >> n2;
        for(i = n1; i <= n2; i++){
            c = 0;
            for(j = 2; j <= sqrt(i); j++){
                 if(i % j == 0)
                    c++;
            }
            if(c == 0)
            cout << i << "\n";
        }
    }
    return 0;
}