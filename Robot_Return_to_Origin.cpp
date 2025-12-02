class Solution {
public:
    bool judgeCircle(string moves) {
        int x[2] = {0,0};
        for(int i=0;moves[i]!='\0';i++){
            if(moves[i]=='L') x[1]--;
            else if(moves[i]=='R') x[1]++;
            else if(moves[i]=='U') x[0]--;
            else x[0]++;
        }
        if(x[0]==0 && x[1]==0) return true;
        else return false;
    }
};