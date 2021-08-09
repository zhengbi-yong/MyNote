#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
int main(){
    vector<int> Temp1;
    vector<int> Temp2;
    vector<int> Answer;
    for(int i = 0;i < 10;i++){
        Temp1.push_back(i+5);
    }
    for(int i = 0;i < 10;i++){
        Temp2.push_back(i);
    }
    Solution FirstSolution;
    Answer = FirstSolution.intersect(Temp1,Temp2);
    for(int i = 0;i < Answer.size();i++){
        cout<<Answer[i]<<" ";
    }
    return 0;
}