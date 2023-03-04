#include<bits/stdc++.h>
using namespace std;

void factorize(int n) {
    int original=n;
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++) {
           // cout<< "I " << i << "n " << n << endl;
        if(n%i==0) {
            cnt=0;
            while(n%i==0 && n>0) {
                cnt++;
                n/=i;
            }
            cout<< i << "^" << cnt << " ";
        }
    }
    if(n>1)cout<< n << "^1" << endl;
    else cout<< endl;
}

int main() {
    cout<< "Find out the factorization of a number N. Enter the value of N" << endl;
    int n;
    cin >>n;
    factorize(n);
    return 0;
}
