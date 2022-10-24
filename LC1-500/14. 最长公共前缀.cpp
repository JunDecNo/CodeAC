#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
    	if(strs.size()==0){
    		return result;       
        }
        if(strs.size()==1){
        	return strs[0];
        }
        int min=strs[0].length();
        for(int i=1;i<strs.size();i++){
        	if(strs[i].length()<min){
        		min=strs[i].length();
            }
        }
        for(int i=0;i<min;i++){
        	for(int j=0;j<strs.size()-1;j++){
        		if(strs[j][i]!=strs[j+1][i]){
        			return result;
        		}
        	}
        	result+=strs[0][i];
        }
        return result;
    }
};