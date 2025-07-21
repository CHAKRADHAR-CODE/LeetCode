char* makeFancyString(char* s) {
    int n = strlen(s);
    if (n < 3) {
        return s;
    }
    int count = 1;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count <= 2) {
            s[++j] = s[i];
        }
    }
    s[j + 1] = '\0';
    return s;
}
