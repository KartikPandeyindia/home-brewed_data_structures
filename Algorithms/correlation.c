// This is Cross correlation; send a signal twice to make Auto correlation.
int correlation(int*A, int *B, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += A[i]*B[i];
    }
    return sum;
}