#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int winner =0;
        int res;
        for(int i = 0; i < height.size(); i++){
            for(int j = i+1; j < height.size(); j++){
                res = (j-i) * min(height[j],height[i]);
                if(res > winner)
                    winner = res;
            }
        }
        return winner;
    }
};

// OPTIMIZED

#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int bottomVal = 0;
        int topVal = height.size()-1;
        int winner = 0;
        int res;
        while (topVal > bottomVal) {
            res = (topVal - bottomVal) * min(height[topVal], height[bottomVal]);
            winner = max(winner, res);
            if(height[topVal] > height[bottomVal])
                bottomVal++;
            else
                topVal--;
        }
        return winner;
    }
};
