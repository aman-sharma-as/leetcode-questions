class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0, high = 0, k = 2, result = 0,
        length = 0, gardenSize = fruits.size();
        unordered_map<int,int> fruitBasket;

        for(high = 0; high < gardenSize; high++){
            fruitBasket[fruits[high]]++;

            while(fruitBasket.size() > k){
                fruitBasket[fruits[low]]--;
                if(fruitBasket[fruits[low]] == 0)
                    fruitBasket.erase(fruits[low]);
                low++;
            }

            if(fruitBasket.size() <= k){
                length = high - low + 1;
                result = max(result, length);
            }
        }
        return result;
    }
};