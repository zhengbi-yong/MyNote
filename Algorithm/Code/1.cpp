#include<vector>
#include<iostream>
using namespace std;

class Solution{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int nums1len = nums1.size();
        int nums2len = nums2.size();
        //这里采用最简单的冒泡排序方法将两个数组变成有序数组
        if (nums1len > 1) {
            for (int i = 0; i < nums1len - 1; i++) {
                for (int j = 0; j < (nums1len - 1 - i); j++) {
                    if (nums1[j] > nums1[j + 1]) {
                        int temp = 0;
                        temp = nums1[j + 1];
                        nums1[j + 1] = nums1[j];
                        nums1[j] = temp;
                    }
                }
            }
        }
        if (nums2len > 1) {
            for (int i = 0; i < nums2len - 1; i++) {
                for (int j = 0; j < (nums2len - 1 - i); j++) {
                    if (nums2[j] > nums2[j + 1]) {
                        int temp = 0;
                        temp = nums2[j + 1];
                        nums2[j + 1] = nums2[j];
                        nums2[j] = temp;
                    }
                }
            }
        }
        //给两个数组分别设置一个指针，来用进阶方法完成这样的求交集
        int mark1 = 0;
        int mark2 = 0;
        vector<int> Answer;
        //被注释掉的代码是之前一种比较失败的思路，不简洁的代码
        /*int MaxCompareTimes = 0;
        if (nums1len >= nums2len) {
            MaxCompareTimes = nums1len;
        }
        else {
            MaxCompareTimes = nums2len;
        }
        for (int i = 0; i < MaxCompareTimes; i++) {
            if ((nums1[mark1] < nums2[mark2]) && (mark1 < nums1len)) {
                mark1 += 1;
            }
            else if ((nums1[mark1] > nums2[mark2]) && (mark2 < nums2len)) {
                mark2 += 1;
            }
            else if ((mark2 < nums2len) && (mark1 < nums1len) && (nums1[mark1] == nums2[mark2])) {
                Answer.push_back(nums1[mark1]);
                if ((mark1 != nums1len - 1) && (mark2 != nums2len - 1)) {
                    mark1 += 1;
                    mark2 += 1;
                }
            }
            else {
                break;
            }
        }*/
        //这里用while循环来完成对这两个数组的遍历，用移动指针比较值的方式求交集
        while (mark1 < nums1len && mark2 < nums2len) {
            if (nums1[mark1] < nums2[mark2]) {
                mark1 += 1;
            }
            else if (nums1[mark1] > nums2[mark2]) {
                mark2 += 1;
            }
            else {
                Answer.push_back(nums1[mark1]);
                mark1 += 1;
                mark2 += 1;
            }
        }
        return Answer;
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