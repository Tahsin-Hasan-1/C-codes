#include <stdio.h>
#define ll long long
int main() {
    ll N, T;
    ll s = 0;
    ll cntb = 0;

    scanf("%lld %lld", &N, &T);
    ll a[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < N; i++) {
        if (s + a[i] <= T) {
            s += a[i];
            cntb++;
        } else {
            break;
        }
    }
    printf("%lld", cntb);
    return 0;
}