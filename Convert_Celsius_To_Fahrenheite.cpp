#include<bits/stdc++.h>
using namespace std;
double cToF(int C)
    {
        return((1.8*C)+32);
    }
    int main(){
        int n;
        cin>>n;
        cout<<int(cToF(n));
    }