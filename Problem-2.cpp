
// Time Complexity : O(m+n) 
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Three line explanation of solution in plain english
// Keep a pointer at the end of the first vector and another at the second.
// Compare the bigger ones and swap it with the last element of the first matrix

// Your code here along with comments explaining your approach


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1; int p2=n-1; int idx = m+n-1;
        while(p1>=0 && p2>=0){
            if(nums1[p1] > nums2[p2]){
                nums1[idx] = nums1[p1];
                p1--;
            }
            else{
                nums1[idx] = nums2[p2];
                p2--;
            }
            idx--;
        }
        while(p2>=0){
            nums1[idx] = nums2[p2];
            p2--;
            idx--;
        }
    }
};