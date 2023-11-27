int maxArea(vector<int>& height) {
        int max_area = 0 ;
        int left = 0 ;
        int right = height.size()-1;

        // now iterating the values in array
        while (left<right) {
            int h = min(height[left],height[right]);
            int l = right - left ; 
            max_area = max(max_area , h*l);

            if (height[left]<height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return max_area;
    }