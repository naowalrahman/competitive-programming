#include <stdio.h>
#include <stdlib.h>

struct pair {
    int a;
    int d;
};

int cmp(const void *a, const void *b) {
    int x = ((struct pair *)a)->a;
    int y = ((struct pair *)b)->a;
    return (x > y ? 1 : (x == y ? 0 : -1));
}

int main() {
    int n;
    scanf("%d", &n);
    struct pair T[n]; 
    for(int i = 0; i < n; ++i) scanf("%d %d", &T[i].a, &T[i].d);
    qsort(T, n, sizeof(struct pair), cmp);
    
    long ans = 0, f = 0;
    for(int i = 0; i < n; ++i) {
        f += T[i].a;
        ans += T[i].d - f;
    }

    printf("%ld", ans);
}
