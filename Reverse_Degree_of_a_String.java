class Solution {
    public int reverseDegree(String s) {
        int n = s.length();
        int x[] = new int[n];
        for(int i=0;i<n;i++){
            int y = s.charAt(i);
            if(y==97) x[i] = 26;
            else{
                int z = y-97;
                int c = 71+z+z;
                x[i] = y-c;
            }
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += x[i]*(i+1);
        } 
        return sum;
    }
}