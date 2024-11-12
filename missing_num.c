#include <stdio.h>
#define ll long long
ll miss(ll q, ll x, ll y, ll z) {
    ll big = x * y * z;
    if (q % big == 0) {
        return q / big;
    } else {
        return -1;
    }
}

int main() {
    ll T, M, A, B, C;
    scanf("%lld", &T);
    for (int i = 0; i < T; i++) {
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        printf("%lld", miss(M, A, B, C));
        printf("\n");
    }
    return 0;
}