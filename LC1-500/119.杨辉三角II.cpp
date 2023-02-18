#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {    
        vector<vector<int>>res;
        vector<int>temp;
        temp.push_back(1);
        res.push_back(temp);
        for(int i=1;i<rowIndex+1;i++){
            vector<int>temp;
            temp.push_back(1);
            vector<int>be=res[i-1];
            for(int j=1;j<i;j++){
                temp.push_back(be[j-1]+be[j]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res[rowIndex];
    }
};

int main(){
    return 0;
}