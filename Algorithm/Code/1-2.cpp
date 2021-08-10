#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }
        unordered_map <int, int> m;
        for (int num : nums1) {
            ++m[num];
        }
        vector<int> intersection;
        for (int num : nums2) {
            if (m.count(num)) {
                intersection.push_back(num);
                --m[num];
                if (m[num] == 0) {
                    m.erase(num);
                }
            }
        }
        return intersection;
    }
};
int main() {
    vector<int> Temp1;
    vector<int> Temp2;
    vector<int> Answer;
    Temp1 = { 1 };
    Temp2 = { 1,1 };
    /*for (int i = 0; i < 10; i++) {
        Temp1.push_back(i + 5);
    }
    for (int i = 0; i < 10; i++) {
        Temp2.push_back(i);
    }*/
    Solution FirstSolution;
    Answer = FirstSolution.intersect(Temp1, Temp2);
    int AnswerLen = Answer.size();
    for (int i = 0; i < AnswerLen; i++) {
        cout << Answer[i] << " ";
    }
    return 0;
}