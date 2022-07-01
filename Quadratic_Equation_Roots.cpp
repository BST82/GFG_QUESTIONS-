#include<bits/stdc++.h>
using namespace std;

vector<int> qer(int a,int b,int c){
    vector<int>z;
    double d= sqrt(b*b-(4*a*c));
    if(b*b>4*a*c){
    double x=(-b+floor(d))/(2*a);
    double y=(-b-floor(d))/(2*a);
    if(d>0){
       z.push_back(x);
       z.push_back(y);
    }
    else{
      z.push_back(y);
      z.push_back(x);
      }
    }else z.push_back(-1);
    return z;
}


int main(){
    int a,b,c;
    cin>>a >>b>>c;
  vector<int>n;
  n=qer(a, b, c);
  

}