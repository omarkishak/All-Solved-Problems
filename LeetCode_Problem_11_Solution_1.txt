class Solution {
public:
    int maxArea(vector<int>& height) {
        int FWVolume = 0, SWVolume = 0, vr = 0;

        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                if (i > 0) {
                    int testCase = height[i - 1] / 2;
                    if (height[j] <= testCase) continue;
                }

                vr = min(height[i], height[j]);
                FWVolume = vr * (j - i);

                if (FWVolume >= SWVolume) {
                    SWVolume = FWVolume;
                }
            }
        }
        return SWVolume;
    }
};