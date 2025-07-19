int compare(const void*a,const void*b){
    return strcmp(*(char**)a,*(char**)b);
}
char** removeSubfolders(char** folder, int folderSize, int* returnSize) {
    qsort(folder,folderSize,sizeof(char*),compare);
    char**result=(char**)malloc(sizeof(char*)*folderSize);
    int count=0;
    for(int i=0;i<folderSize;++i){
        if(count==0||strncmp(folder[i],result[count-1],strlen(result[count-1]))!=0
        ||folder[i][strlen(result[count-1])]!='/'){
            result[count++]=folder[i];
        }
    }
    *returnSize=count;
    return result;
}
