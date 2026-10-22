class Solution {
    public int totalFruit(int[] fruits) {
        Map<Integer, Integer> mp = new HashMap<>();
        int newTree, prevTree, maxLen = 0;

        for(int low = 0, high = 0; high < fruits.length; high++){
            newTree = fruits[high];
            mp.put(newTree, mp.getOrDefault(newTree, 0) + 1);

            while(mp.size() > 2){
                prevTree = fruits[low];
                mp.put(prevTree, mp.getOrDefault(prevTree, 0) - 1);
                if(mp.get(prevTree) == 0)
                    mp.remove(prevTree);
                low++;
            }

            if(mp.size() <= 2)
                maxLen = Math.max(high - low + 1, maxLen);
        }

        return maxLen;
    }
}