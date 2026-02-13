#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        std::printf("Enter the marks %d: ", i + 1);
        std::scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int avg = sum / len;
    std::printf("\nAverage = %d\n", avg);

    std::printf("Marks greater than average:\n");
    for (int i = 0; i < len; i++) {
        if (arr[i] > avg) {
            std::printf("%d ", arr[i]);
        }
    }

    return 0;
}
