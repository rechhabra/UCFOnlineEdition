#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,sin,cos,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to int
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
using namespace std; //removes use of std::
long pattern(long num){
  long tot = 0;
  if (num%10==7){
    return tot;
  }
  return 1;
}

int main() {
  long tc;
  cin>>tc;
  for (int i = 0; i<tc; i++){
    long val;
    cin>>val;
    if (val%10==7){
      cout<<"Input #"<<i+1<<": 0"<<endl;
    }
    else{
      long z;
      if ((val%10)<7)
        z = 7-val%10;
      else{
        z = 17-val%10;
      }
      long a = z/2;
      if (val%2==0){
        a+=1;
      }
      cout<<"Input #"<<i+1<<": "<<a<<endl;
  }}
}
