#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct pointer
{
    int row;
    int col;
}pointer;

typedef pointer StaDateType;

typedef struct stack
{
    StaDateType* arr;
    int top;
    int capicity;
}Stack;

void StactInit(Stack* ps);
void StackPush(Stack* ps, StaDateType date);
void StackPop(Stack* ps);
int StackSize(Stack* ps);
bool StackEmpty(Stack* ps);
void StackDestroy(Stack* ps);
StaDateType StackTop(Stack* ps);

void StactInit(Stack* ps)
{
    assert(ps);
    ps->arr = (StaDateType*)malloc(4 * sizeof(StaDateType));
    if (ps->arr != NULL)
    {
        ps->capicity = 4;
        ps->top = 0;
    }
}
void StackPush(Stack* ps, StaDateType date)
{
    assert(ps);
    if (ps->top == ps->capicity)
    {
        StaDateType* pa = (StaDateType*)realloc(ps->arr, ps->capicity * 2 * sizeof(StaDateType));
        if (pa != NULL)
        {
            ps->arr = pa;
            ps->capicity *= 2;
        }
    }
    ps->arr[ps->top] = date;
    ps->top++;
}
void StackPop(Stack* ps)
{
    assert(ps);
    assert(ps->top > 0);
    ps->top--;
}
StaDateType StackTop(Stack* ps)
{
    assert(ps);
    assert(ps->top > 0);
    return ps->arr[ps->top - 1];
}
int StackSize(Stack* ps)
{
    assert(ps);
    return ps->top;
}
bool StackEmpty(Stack* ps)
{
    assert(ps);
    return ps->top == 0;

}
void StackDestroy(Stack* ps)
{
    assert(ps);
    free(ps->arr);
    ps->top = 0;
    ps->arr = NULL;
}
void PrintMaze(int** maze, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}
bool IsPass(int** maze, int N, int M, pointer pos)
{
    if (pos.row >= 0 && pos.row < N &&
        pos.col >= 0 && pos.col < M &&
        maze[pos.row][pos.col] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Stack path;
void PrintPath(Stack* pa)
{
    //倒数据
    Stack rpath;
    StactInit(&rpath);
    while (!StackEmpty(&path))
    {
        StackPush(&rpath, StackTop(&path));
        StackPop(&path);
    }
    //打印数据
    while (!StackEmpty(&rpath))
    {
        pointer top = StackTop(&rpath);
        printf("(%d,%d)\n", top.row, top.col);
        StackPop(&rpath);
    }

    StackDestroy(&rpath);
}
bool GetMazePath(int** maze, int N, int M, pointer cur)
{

    StackPush(&path, cur);
    //找到出口
    if (cur.row == N - 1 && cur.col == M - 1)
    {
        return true;
    }
    pointer next;
    maze[cur.row][cur.col] = 2;

    //上
    next = cur;
    next.row -= 1;
    if (IsPass(maze, N, M, next))
    {
        if (GetMazePath(maze, N, M, next))
        {
            return true;
        }
    }
    //下
    next = cur;
    next.row += 1;
    if (IsPass(maze, N, M, next))
    {
        if (GetMazePath(maze, N, M, next))
        {
            return true;
        }
    }
    //左
    next = cur;
    next.col -= 1;
    if (IsPass(maze, N, M, next))
    {
        if (GetMazePath(maze, N, M, next))
        {
            return true;
        }
    }
    //右
    next = cur;
    next.col += 1;
    if (IsPass(maze, N, M, next))
    {
        if (GetMazePath(maze, N, M, next))
        {
            return true;
        }
    }
    return false;
    StackPop(&path);
}
int main()
{
    int N = 0;
    int M = 0;
    //开辟二维数组
    while (scanf("%d%d", &N, &M) != EOF)
    {
        int** maze = (int**)malloc(sizeof(int*) * N);
        for (int i = 0; i < N; i++)
        {
            maze[i] = (int*)malloc(sizeof(int) * M);
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                scanf("%d", &maze[i][j]);
            }
        }
        //PrintMaze(maze, N, M);
        StactInit(&path);
        pointer entry = { 0,0 };
        if (GetMazePath(maze, N, M, entry))
        {
            PrintPath(&path);
        }
        else
        {
            ;
        }
        StackDestroy(&path);
        for (int i = 0; i < N; i++)
        {
            free(maze[i]);
        }
        free(maze);
        maze = NULL;
    }
    return 0;
}