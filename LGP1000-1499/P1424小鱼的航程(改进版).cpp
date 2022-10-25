#include <iostream>
using namespace std;
int main() {
  int week, days, total = 0;
  cin >> week >> days;
  while (days > 0) {
    if(week%7>0&&week%7<6)total+=250;
    week++;
    days--;
  }
  cout<<total<<endl;
  return 0;
}