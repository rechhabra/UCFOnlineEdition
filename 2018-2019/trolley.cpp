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
int main() {
  struct africa{
    long value;
    long index;
  };
long tc;
cin>>tc;
for (long _ = 0; _<tc; _++){
  int maj = 0;
  long n;
  cin>>n;
  vector<africa> mini;
  long maxxy = 0;
  long mind = 0;
  for (long i = 0; i<pow(2,n); i++){
    long lolol;
    cin>>lolol;
    africa c;
    c.value = lolol;
    c.index = i+1;
    mini.push_back(c);
    maxxy = max(lolol,maxxy);
    mind = i;
  }

  for (long j = 0; j<n; j++){
    long sum = mini.size();
    long up = 0;
    for (long o = 0; o<sum/(int)2; o++){
      up+=mini[o].value;
    }
    long down = 0;
    for (long o = sum/(int)(2); o<mini.size(); o++){
      down+=mini[o].value;
    }
    if (up>=down){
      for(long o = 0; o<sum/2; o++){
        mini.pop_back();
      }
    }
    else{
      for (long o = 0; o<sum/2; o++){
        mini.erase(mini.begin());
      }
    }
  }
  cout<<"Trolley #"<<(_+1)<<": "<<mini[0].index<<endl;
  }
  }
