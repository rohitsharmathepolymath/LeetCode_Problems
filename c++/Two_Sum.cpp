#include <vector>
#include<stdint.h>
#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size();i++){
            int complement = target - nums[i];
            if(map.find(complement) != map.end()){
                return {map[complement], i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};

int main(){
    Solution s;
    vector<int> val;
    vector<int> nums;
    nums={1,3,4,45,7,8};
    int target;
    target = 15;
    val=s.twoSum(nums, target);
    for(int i=0;i<val.size();i++){
        cout<<val[i]<<endl;
    }
    return 0;
}