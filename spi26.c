#include <stdio.h>
#define r 4
#define c 4

int main()
{   
    int a[4][4] = { { 1, 2, 3, 4 },

                    { 5, 6, 7, 8 },

                    { 9, 10, 11, 12 },

                    { 13, 14, 15, 16 } };

    int i, left = 0, right = c-1, top = 0, bottom = r-1;

    while (left <= right && top <= bottom) {
        for (i = left; i <= right; ++i) {
            printf("%d ", a[top][i]);
        }
        top++;
        for (i = top; i <= bottom; ++i) {
         printf("%d ", a[i][right]);
        }
        right--;
        if (top <= bottom) { for (i = right; i >= left; --i) {
            printf("%d ", a[bottom][i]);
          }
          bottom--;
        }
        if (left <= right) { for (i = bottom; i >= top; --i) {
            printf("%d ", a[i][left]);
        }
        left++;
        }
    }
    return 0;
}

