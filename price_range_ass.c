#include <stdio.h>
#define ll long long
int main() {
    ll N, X, Y;

    ll cntp = 0;

    scanf("%lld %lld %lld", &N, &X, &Y);
    if (X > Y) {
        ll t = X;

        X = Y;
        Y = t;
    }
    ll a[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < N; i++) {
        if (a[i] >= X && a[i] <= Y) {
            cntp++;
        }
    }
    printf("%lld", cntp);
    return 0;
}