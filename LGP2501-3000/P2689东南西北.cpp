#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    int n,step=0;
    char ch;
    int ix,iy;
    cin >> x1 >> y1 >> x2 >> y2;
    ix=x2-x1;
    iy=y2-y1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        if(ix>0&&ch=='N'){
            step++;
            ix--;
        }else if(ix<0&&ch=='S'){
            step++;
            ix++;
        }else if(iy>0&&ch=='E'){
            step++;
            iy--;
        }else if(iy<0&&ch=='W'){
            step++;
            iy++;
        }
        if(ix==0&&iy==0){
            cout<<step;
            break;
        }
    }
    if(ix!=0||iy!=0)cout<<-1;
    return 0;
}