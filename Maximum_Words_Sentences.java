class Solution {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        int n = sentences.length;
        for(int i = 0;i<n;i++){
            String x[] =  sentences[i].split(" ");
            int y = x.length;
            if(y>max) max = y;
        }
        return max;
    }
}