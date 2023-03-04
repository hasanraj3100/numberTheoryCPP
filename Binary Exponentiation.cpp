#include<bits/stdc++.h>
using namespace std;

int findPow(int n, int p) {
    int ans=1;
    while(p!=0) {
        if(p%2==1) {
            ans*=n;
            p--;
        } else {
             n*=n;
             p/=2;
        }
    }

    cout<< "Ans : " << ans << endl;
}

int main() {

    cout<< "Find a^b. Enter a and b below: " << endl;
    int a, b;

    cin >> a >> b;

    findPow(a, b);

    return 0;
}
