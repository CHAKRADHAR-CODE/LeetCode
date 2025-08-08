double cache[192][192]; 
double dfs(int a, int b) {
    if (a <= 0 && b <= 0) 
        return 0.5;
    if (a <= 0) 
        return 1.0;
    if (b <= 0) 
        return 0.0;
    if (cache[a][b] > 0) 
        return cache[a][b];
    cache[a][b] = (dfs(a - 4, b) + dfs(a - 3, b - 1) + dfs(a - 2, b - 2) + dfs(a - 1, b - 3)) * 0.25;
    return cache[a][b];
}
double soupServings(int n) {
    return (n >= 4800) ? 1.0 : dfs((n + 24) / 25, (n + 24) / 25);
}
