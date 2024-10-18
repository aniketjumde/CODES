#include <stdio.h>

int removeElement(int nums[], int numsSize, int val) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int nums[100]; // Assuming a maximum size of 100 for the array
    int numsSize, val;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);

    // Get the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    // Get the value to be removed
    printf("Enter the value to remove: ");
    scanf("%d", &val);

    // Call the function to remove val from nums
    int k = removeElement(nums, numsSize, val);

    // Output the result
    printf("k = %d\n", k);
    printf("Modified array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
