class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long totalCost = 0;
        
        // Find how many units both requirements share
        long long common = min(need1, need2);
        
        // Use the cheaper option between buying Type 3 or (Type 1 + Type 2) for the overlapping part
        totalCost += common * min((long long)costBoth, (long long)cost1 + cost2);
        
        // Calculate the remaining needs
        long long rem1 = need1 - common;
        long long rem2 = need2 - common;
        
        // If requirement 1 has a remainder, decide between Type 1 and Type 3
        if (rem1 > 0) {
            totalCost += rem1 * min((long long)costBoth, (long long)cost1);
        }
        
        // If requirement 2 has a remainder, decide between Type 2 and Type 3
        if (rem2 > 0) {
            totalCost += rem2 * min((long long)costBoth, (long long)cost2);
        }
        
        return totalCost;
    }
};