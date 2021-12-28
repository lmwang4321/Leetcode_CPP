//11. Container with Most Water
#include <iostream>
#include <vector>
using namespace std;

/* Brute Force:

class Solution {
public:
    int maxArea(vector<int>& height) {
        int count = 0;
        int max_size = 0;
        int bsize = 0;
        for (int close = 0; close < height.size(); ++close){
            for (int far = close + 1; far < height.size(); ++far){
                // cout << " close : " << close << " far: " << far << " height[close]: " << height[close] << " height[far]: " << height[far] << endl;
                if (height[far] >= height[close] ){
                    bsize = height[close]*(far - close);
                }else{
                    bsize = height[far]*(far - close);
                }
                // cout << "bsize: " << bsize << endl;
                if (bsize > max_size) max_size = bsize;
            }
        }
        return max_size;
    }
};
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int max_size = 0;
        while (l < r){
            if (height[l] <= height[r]){
                if(height[l]*(r-l) >= max_size){
                    max_size = height[l]*(r-l);
                }
                l++;
            }else{
                if(height[r]*(r-l) >= max_size){
                    max_size = height[r]*(r-l);
                }
                r--;
            }
            
        } 
        return max_size;
}
};
