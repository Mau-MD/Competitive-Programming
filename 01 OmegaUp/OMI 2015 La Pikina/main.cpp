#include <stdio.h>
#define ll long long int
using namespace std;

const int maxN = 1000002;
const int maxK = 1000000002;
int sort[maxN], bucket[maxN];

int main() {
    int n, a;
    ll k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a), ++bucket[a];
    for (int i = maxN - 1, j = 0; i >= 0; --i)
        while (bucket[i]--) sort[j++] = i;

    ll max_rep = 0, number;
    for (int i = 0, j = 0; i < n; ++i) {
        while (j < n && k - sort[i] + sort[j] >= 0) k -= sort[i] - sort[j++];
        if (j - i >= max_rep) max_rep = j - i, number = sort[i];
        k += (sort[i] - sort[i + 1]) * (j - i - 1);
    }
    printf("%d %d\n", max_rep, number);
    return 0;
}