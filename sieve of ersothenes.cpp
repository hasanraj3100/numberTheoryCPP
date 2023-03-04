#include<bits/stdc++.h>
using namespace std;

void sieve(int n) {
    bool arr[n+1];
    memset(arr, false, sizeof(arr));

    for(int i=2;i<=sqrt(n);i++) {
        if(arr[i]==false) {
            for(int j=i*i;j<=n;j+=i) arr[j]= true;
        }
    }

    for(int i=2;i<=n;i++) {
        if(arr[i]==false) cout<< i << " ";
    }
    cout<< endl;
}

int main() {
    cout<< "Find the primes between zero and n. Enter n: " << endl;
    int n;
    cin >> n;
    sieve(n);
    return 0;
}
