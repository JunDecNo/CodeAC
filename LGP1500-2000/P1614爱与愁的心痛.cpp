#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin>>n>>m;
  int min=INT32_MAX,*a=new int[n],tmp=0;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n-m+1;i++){
    tmp=0;
    for(int j=0;j<m;j++)tmp+=a[i+j];
    if(tmp<min)min=tmp;
  }
  cout<<min<<endl;
  return 0;
}