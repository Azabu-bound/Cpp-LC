class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());

        vector<bool> res;

        for (int candie : candies) {
            if (candie + extraCandies >= max) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};