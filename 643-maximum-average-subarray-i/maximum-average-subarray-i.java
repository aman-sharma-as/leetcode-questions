class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int i = 0, j = 0, sum = 0;
        double avg = 0;
        for(j = 0; j < k; j++){
            sum += nums[j];
        }
        avg = (double)sum / (double)k;
        j = k - 1;

        while(j < nums.length){
            j++;
            if(j < nums.length){
                sum = sum + nums[j] - nums[i];
                avg = Math.max(avg, (double)sum / (double)k);
            }
            i++;
        }
        return avg;
    }
}