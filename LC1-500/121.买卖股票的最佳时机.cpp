#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmin=prices[0],pmax=0;
        for(int i=0;i<prices.size();i++){
            pmax=max(pmax,prices[i]-pmin);
            pmin=min(pmin,prices[i]);
        }
        return pmax;
    }
};
int main(){
    return 0;
}