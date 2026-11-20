class Solution {
    public int maximumSum(int[] arr) {
        int noDelete = arr[0], oneDelete = Integer.MIN_VALUE, ans = arr[0];

        for(int i = 1; i < arr.length; i++){
            int prevOneDelete = oneDelete;
            int prevNoDelete = noDelete;
            int v2 = oneDelete;
            
            if(v2 == Integer.MIN_VALUE)
                v2 = arr[i];
            else
                v2 = prevOneDelete + arr[i];
            
            noDelete = Math.max(noDelete + arr[i], arr[i]);
            oneDelete = Math.max(prevNoDelete, v2);
            ans = Math.max(Math.max(noDelete, oneDelete), ans);
        }

        return ans;
    }
}