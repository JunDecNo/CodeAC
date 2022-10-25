#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  int num;
  while (cin >> num) {
    if(num!=0)v.push_back(num);
    else break;
  }
  while (!v.empty()) {
    cout << v.back() << " ";
    v.pop_back();
  }

  return 0;
}