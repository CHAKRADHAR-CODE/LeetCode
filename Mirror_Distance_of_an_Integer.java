class Solution {
    public int mirrorDistance(int n) {
        String  x = Integer.toString(n);
        StringBuilder r = new StringBuilder(x);
        r.reverse();
        int m = Integer.parseInt(r.toString());
        return Math.abs(n-m);
    }
}