int convolution (int *A, int *B, int k) {
    int sum  = 0;
    for (int i = 0; i < k; i++) {
        sum += A[i]*B[k-i];
//      sum += B[i]*A[k-i];
    }
    return sum;
}
