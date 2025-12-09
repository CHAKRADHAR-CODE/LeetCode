class Solution {
    public boolean isBalanced(String num) {
        int n = num.length();
        int x = 0,y = 0;
        for(int i = 0;i<n;i++){
            int z = num.charAt(i) - '0';
            if(i%2 == 0) x+=z;
            else y+=z;
        }
        if(x==y) return true;
        else return false;
    }
}