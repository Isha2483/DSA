int search(int* nums, int numsSize, int target) {

    int iStart = 0;
    int iEnd = 0;

    iStart = 0;
    iEnd = numsSize - 1;
    while(iStart <= iEnd)
    {
        int Mid = iStart + (iEnd - iStart)/2;

        if(nums[Mid] == target)
        {
            return Mid;
        }

          // Left half is sorted
        if(nums[iStart] <= nums[Mid])
        {
            if(target >= nums[iStart] && target < nums[Mid])
            {
                iEnd = Mid - 1;
            }
            else
            {
                iStart = Mid + 1;
            }
        }

        // Right half is sorted
        else
        {
            if(target > nums[Mid] && target <= nums[iEnd])
            {
                iStart = Mid + 1;
            }
            else
            {
                iEnd = Mid - 1;
            }
        }

    }

    return -1;
    
}