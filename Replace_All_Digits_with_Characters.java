class Solution {
    public String replaceDigits(String s) {
        int n = s.length();
        int z,a;
        char y;
        String x = "";
        for(int i = 0;i<n;i++){
            if(s.charAt(i)=='1'|| s.charAt(i)=='2' || s.charAt(i)=='3' || s.charAt(i)=='4' || s.charAt(i)=='5' || s.charAt(i)=='6' || s.charAt(i)=='7' || s.charAt(i)=='8' ||s.charAt(i)=='9'){
               a = s.charAt(i) - '0';
               z = s.charAt(i-1);
               z+=a;
               y = (char)z;
               x= x.concat(String.valueOf(y));
            }
            else if(s.charAt(i)=='0') x= x.concat(String.valueOf(s.charAt(i-1)));
            else x= x.concat(String.valueOf(s.charAt(i)));
        }
        return x;
    }
}