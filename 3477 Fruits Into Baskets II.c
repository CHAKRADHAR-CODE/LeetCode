int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int c=0;
    for(int i=0;i<fruitsSize;i++){
        for(int j=0;j<basketsSize;j++){
            if(fruits[i] <= baskets[j]){
                baskets[j]=0;
                j=basketsSize;
            }
        }
    }
    for(int i=0;i<basketsSize;i++){
        if(baskets[i] != 0){
            c++;
        }
    }
    return c;
}
