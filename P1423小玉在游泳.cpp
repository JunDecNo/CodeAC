#include<iostream>
using namespace std;

int main(){
    double meter;
    int n=0;
    double idx=2;
    cin>>meter;
    while(meter>0){
        meter-=idx;
        idx*=0.98;
        n++;
    }
    cout<<n<<endl;
    return 0;
}


#include<iostream>

using namespace std;

int main(){

    return 0;
}