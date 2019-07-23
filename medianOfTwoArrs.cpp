#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Find the median of the two sorted arrays.
// https://leetcode.com/problems/median-of-two-sorted-arrays/ 

double findMedian(vector<int>& nums1, vector<int>& nums2){
        vector<int> newVec;
        double res;
        for(int i = 0; i < nums1.size(); i++){
            newVec.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            newVec.push_back(nums2[i]);
        }
        sort(newVec.begin(), newVec.end());
        if(newVec.size() % 2 == 0){
            double a =newVec[(newVec.size()-1)/2];
            double b =newVec[((newVec.size()-1)/2)+1];
            res = (newVec[(newVec.size()-1)/2]+newVec[((newVec.size()-1)/2)+1])/2;
        }
        else
            res =newVec[newVec.size()/2];
        return res;
}

int main (){
    vector<int> vec1, vec2;
    vec1.push_back(1); 
    vec1.push_back(2); 
    vec2.push_back(3);
        vec2.push_back(4); 
    double res = findMedian(vec1,vec2);
    cout << res;
}