import java.util.*;

class Solution {
    public int[] Two_Sum(int[] nums, int target){
        Map<Integer, Integer> map =new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int complement;
            complement = target - nums[i];
            if(map.containsKey(complement)){
                return new int[] {map.get(complement), i };
            }
            map.put(nums[i], i);
        }
        return new int[] {};
     }
}

public class Two_Sum {
    public static void main(String[] args){
        Solution s = new Solution();
        int[] nums = {1,3,4,45,7,8};
        int target = 15;
        int[] result =s.Two_Sum(nums, target);
        for(int val : result){
            System.out.println(val);
        }
    }   
}