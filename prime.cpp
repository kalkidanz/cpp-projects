#include <iostream>
using namespace std;
bool isprimeno(int x) {
    for(int i=2; i<x; i++)
    {
     if(x%i==0)
     return false;
    }
    return true;
}
int main() {
  int y;
  cin>>y;
for(int i=1; i<=y; i++){
  bool isprime = isprimeno(i);
  if(isprime)
  cout<<i<<endl;
}
 }

