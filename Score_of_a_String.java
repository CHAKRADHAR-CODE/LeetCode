class Solution {
    public int scoreOfString(String s) {
        int n = s.length();
        if(n==0) return 0;
        int x[] = new int[n];
        for(int i=0;i<n;i++){
            int z = s.charAt(i);
            x[i] = z;
        }
        int sum = 0;
        for(int i = 0;i<n-1;i++){
            int y = Math.abs(x[i]-x[i+1]);
            sum += y; 
        }
        return sum;
    }
}