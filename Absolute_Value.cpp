#include<bits/stdc++.h>
using namespace std;
        int absolute(int I) { 
        if(I<0){
            return -1*I;
        }
        else if(I==0) {return 0;}
        else
        {return I;}
    }

int main(){
int n;
cin>>n;
cout<<absolute(n)<<' ';

}
