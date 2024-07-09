int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    // Initialize the return array
    int* answer = (int*)malloc(numsSize * sizeof(int));
    
    // Calculate left products
    int leftProduct = 1;
    for (int i = 0; i < numsSize; ++i) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }
    
    // Calculate right products and update answer
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; --i) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    
    *returnSize = numsSize;
    return answer;
}