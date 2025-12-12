class Solution {
    public String reverseWords(String s) {
        String x[] = s.split( );
        int n = x.length;
        for(int i = 0;in;i++){
            String z = ;
            for(int j = 0;jx[i].length();j++){
                z = x[i].charAt(j)+z;
            }
            x[i] = z;
        }
        s = ;
        for(int i = 0;in-1;i++){
            s = s.concat(x[i])+ ;
        }
        s = s.concat(x[n-1]);
        return s;
    }
}