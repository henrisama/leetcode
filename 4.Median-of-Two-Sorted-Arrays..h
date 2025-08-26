#include <math.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double result = 0.0;
    int n = nums1Size + nums2Size;
    int* merged = (int*) malloc(sizeof(int) * n);

    memcpy(merged, nums1, nums1Size * sizeof(int));
    memcpy(merged + nums1Size, nums2, nums2Size * sizeof(int));
    qsort(merged, n, sizeof(int), compare);

    int index = floor(n / 2);

    if (n % 2 == 0) {
        result = ((double)merged[index] + (double)merged[index-1]) / 2;
    }else {
        result = merged[index];
    }

    free(merged);

    return result;
}