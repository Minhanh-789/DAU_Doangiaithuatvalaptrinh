public class Solution {
    public int DistributeCandies(int[] candyType) {
        HashSet<int> set = new HashSet<int>(candyType);
        int uniqueTypes = set.Count;
        int maxEat = candyType.Length / 2;
        
        return Math.Min(uniqueTypes, maxEat);
    }
}