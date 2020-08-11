/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>
#include <algorithm>

// constraints
#define MAXN 200000
using namespace std;

// input data
int N, i;
int A[MAXN], D[MAXN];
int p = 1;
long long int s = 0;
int posa = 0;
int posd = 0;


int main() {
//  uncomment the following lines if you want to read/write from files
   // freopen("input0.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(2 == scanf("%d%d", &A[i], &D[i]));

    sort(A, A + N);
    sort(D, D + N);

    for (i = 0; i < N * 2; i++) {

        if (posa < N && A[posa] < D[posd]) {
            //pescato da A
            s += p;
            p ++;
            posa ++;
        }

        else {
            //pescato da D
            s += p - 1;
            p --;
            posd ++;
        }
    }

    printf("%lli\n", s); // change 42 with actual answer
    return 0;
}
