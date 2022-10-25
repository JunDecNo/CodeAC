#include <iostream>
using namespace std;
int main() {
  char var, value;
  int arr[3]={0};
  while (scanf("%c:=%c;", &var, &value) == 2) {
    value - 'a' < 0 ? arr[var - 'a'] = value - '0'
                     : arr[var - 'a'] = arr[value - 'a'];
  }
  printf("%d %d %d", arr[0], arr[1], arr[2]);
  return 0;
}