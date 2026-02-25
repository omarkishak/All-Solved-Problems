 if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;
        int total = m + n;
        int half = (total + 1) / 2;
        
        while (low <= high) {
            int i = (low + high) / 2;
            int j = half - i;
            
            int a_left = (i == 0) ? INT_MIN : nums1[i - 1];
            int a_right = (i == m) ? INT_MAX : nums1[i];
            int b_left = (j == 0) ? INT_MIN : nums2[j - 1];
            int b_right = (j == n) ? INT_MAX : nums2[j];
            
            if (a_left <= b_right && b_left <= a_right) {
                if (total % 2 == 1) {
                    return max(a_left, b_left);
                } else {
                    return (max(a_left, b_left) + min(a_right, b_right)) / 2.0;
                }
            } else if (a_left > b_right) {
                high = i - 1;
            } else {
                low = i + 1;
            }
        }
        
        return 0.0;
