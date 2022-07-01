#include<bits/stdc++.h>
using namespace std;

int check_Prime(int n ){
if(n==1) return 0;
if(n==2 || n==3) return 1;
 if(n%2==0||n%3==0) return 0;
        
        for(int i=5;i*i<=n;i=i+6){
            if(n%i==0||n%(i+2)==0) return 0;
        }
        return 1;
}
int exactly3Divisors(int N) { 
         int res =0 ;
        for(int i=2;i*i<=N;i++){
            if(check_Prime(i)) res++;
        }
        return res;
}
int main(){
    int n;
    cin>>n;
 cout<<exactly3Divisors(n);
}