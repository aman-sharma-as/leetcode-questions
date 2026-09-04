class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int i = 0, j = people.length - 1, count = 0;
        Arrays.sort(people);
        while(i <= j){
            if(people[i] + people[j] <= limit){
                count++;
                i++;
                j--;
            }
            else if(people[i] + people[j] > limit){
                count++;
                j--;
            }
        }
        return count;
    }
}