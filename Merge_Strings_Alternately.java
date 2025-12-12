class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n = word1.length();
        int m = word2.length();
        int i = 0,j=0;
        String x = "";
        while(i<n || j < m){
            if(i < n) x = x + word1.charAt(i++);
            if(j < m) x = x + word2.charAt(j++); 
        }
        return x;
    }
}