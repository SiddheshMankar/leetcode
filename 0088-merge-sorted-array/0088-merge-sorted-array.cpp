class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Index for the last element in nums1's original elements
    int j = n - 1; // Index for the last element in nums2
    int k = m + n - 1; // Index for the last position in nums1 after merging

    // Merge nums1 and nums2 starting from the end of both arrays
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

};