//利用左增右减的区间特性，二分法
//int findPeakElement(int* nums, int numsLen)
//{
//    
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) >> 1;
//        if (nums[mid] > nums[mid + 1])
//        {
//            right = mid;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return left;
//}
//
