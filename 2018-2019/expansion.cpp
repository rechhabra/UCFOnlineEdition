#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,sin,cos,etc.
#include <fstream>//files
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to ll
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
#include <unordered_set>//sets like python
#include <set>
#include <bitset>
using namespace std; //removes use of std::
#include <cstdio>
#include <queue>
#include <climits>

int main(){
int tc;
cin>>tc;
for (int QQQ = 0; QQQ<tc; QQQ++){
  int o,n;
  cin>>o>>n;
  vector<int> ori;
  vector<int> nw;
  for (int i = 0; i<o; i++){
    int c;
    cin>>c;
    ori.push_back(c);
  }
  for (int i = 0; i<n; i++){
    int c;
    cin>>c;
    nw.push_back(c);
  }
  sort(ori.begin(),ori.end());
  sort(nw.begin(),nw.end());
  int ans = 0;
  int m = ori.size()/2;
  if (ori.size()%2==0){
    m-=1;
  }
  int XXX = 0;
  for (XXX = 0; XXX<ori.size(); XXX++){
    if (nw[XXX]>=ori[m]){
      break;
    }
  }
  for (int i = XXX; i<nw.size(); i++){
    int pos=0; int e = 0;
    for (e = 0; e<ori.size(); e++){
      if (nw[i]<ori[e]){
        break;
      }
    }
    if (nw[i]>=ori[ori.size()-1]){
      ori.push_back(nw[i]);
      ans+=1;
    }
    else if (2*e>ori.size()){
      ori.insert(ori.begin()+e,nw[i]);
      ans+=1;
    }
  }
  cout<<"Expansion #"<<QQQ+1<<": "<<ans<<endl;
  }
}
