/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 200000

// input data
int N, i;
int A[MAXN], D[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(2 == scanf("%d%d", &A[i], &D[i]));

    // insert your code here

    printf("%d\n", 42); // change 42 with actual answer
    return 0;
}
