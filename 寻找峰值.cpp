//���������Ҽ����������ԣ����ַ�
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
