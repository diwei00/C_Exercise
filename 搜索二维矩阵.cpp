#include <stdlib.h>
#include <stdio.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int row = matrixSize;
    int col = *matrixColSize;
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (matrix[i][col - 1] > target || matrix[i][col - 1] == target)
        {
            break;
        }
    }
    //forѭ�������������±�
    if (i == row)
    {
        i -= 1;
    }
    int j = 0;
    for (j = 0; j < col; j++)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
    }
    return false;
}
//���ַ�
bool searchMatrix2(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int row = matrixSize;
    int col = *matrixColSize;
    int i = 0;
    //����Ҫ��Ŀ��ֵ����
    for (i = 0; i < row; i++)
    {
        if (matrix[i][col - 1] > target || matrix[i][col - 1] == target)
        {
            break;
        }
    }
    //forѭ�������������±�
    if (i == row)
    {
        i -= 1;
    }
    int left = 0;
    int right = col - 1;
    while (left <= right)
    {
        int mid = (left + right) >> 1;
        if (matrix[i][mid] > target)
        {
            right = mid - 1;
        }
        else if (matrix[i][mid] == target)
        {
            return true;
        }
        else
        {
            left = mid + 1;
        }
    }
    //whileѭ���������Ҳ���Ŀ��ֵ
    return false;
}
int main()
{
    //�����ַ������
    int** pa = (int**)malloc(sizeof(int) * 3);
    int i = 0;
    int col = 3;
    //�������ַ����pa��
    for (i = 0; i < 3; i++)
    {
        pa[i] = (int*)malloc(sizeof(int) * col);
    }
    pa[0][0] = 1;
    pa[0][1] = 3;
    /*pa[0][1] = 3;*/

   /* searchMatrix(pa, 1, &col, 1);*/
    int ret = searchMatrix2(pa, 1, &col, 3);
    printf("%d", ret);
    
	/*for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d", pa[i][j]);
		}
		printf("\n");
	}*/
    for (i = 0; i < 3; i++)
    {
        free(pa[i]);
    }
    free(pa);

	return 0;
}