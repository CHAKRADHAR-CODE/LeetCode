class Solution {
    public int countSeniors(String[] details) {
        int c = 0;
        int n = details.length;
        for(int i = 0;i<n;i++){
            String x = details[i].substring(11,13);
            if(Integer.parseInt(x) > 60) c++;
        }
        return c;
    }
}