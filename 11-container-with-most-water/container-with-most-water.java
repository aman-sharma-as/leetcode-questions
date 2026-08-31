class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1, length, breadth, area = 0;

        while(left < right){
            length = right - left;
            breadth = Math.min(height[left], height[right]);
            area = Math.max((length*breadth), area);

            if(height[left] < height[right])
                left++;
            else if(height[left] > height[right])
                right--;
            else{
                left++;
                right--;
            }
        }
        return area;
    }
}