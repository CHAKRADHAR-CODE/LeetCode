class Solution {
    public String restoreString(String s, int[] indices) {
        int n = indices.length;
        String x="";
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(indices[j] == i) x = x.concat(String.valueOf(s.charAt(j)));
            }
        }
        return x;
    }
}