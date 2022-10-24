#include<iostream>
using namespace std;

int main(){
	int len,cnt=0;
	cin>>len;
	int *arr=new int[len];
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	//冒泡排序的交换次数
	for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
	return 0;
}
