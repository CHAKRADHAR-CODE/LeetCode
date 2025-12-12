class Solution {
    public boolean isAcronym(ListString words, String s) {
        int n = words.size();
        int m = s.length();
        if(n!=m) return false;
        else{
            for(int i=0;in;i++){
                if(s.charAt(i) != words.get(i).charAt(0)) return false;
            }
        }
        return true;
    }
}