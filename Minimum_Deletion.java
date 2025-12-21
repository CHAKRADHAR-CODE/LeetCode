class Solution {
    public long minCost(String s, int[] cost) {
        int n = cost.length;
        if(n<=1) return 0;
        long t = 0;
        long c[] = new long[26];
        for(int i = 0;i<n;i++){
            t += cost[i];
            c[s.charAt(i)-'a'] += cost[i];
        }
        long max = 0;
        for(int i=0;i<26;i++){
            max = Math.max(max,c[i]);
        }
        return t-max;
    }
}