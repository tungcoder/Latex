int res = 0;
for(int i = 1; i <= N; ++i) {
    for(int j = 1; j <= i; ++j) {
        res += j;
    }
}