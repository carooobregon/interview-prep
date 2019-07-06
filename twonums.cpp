
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
   vector<int> nums = {3,2,4}; 
   int target = 6;
   int ans[2];
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1 ; j < nums.size(); j++){
                int a = nums[i];
                int b = nums[j];
                int suma = nums[i] + nums[j];
                if(suma == target){
                    ans[0] = i;
                    ans[1] = j;
                    return 0;
                }
            }
        }
}
