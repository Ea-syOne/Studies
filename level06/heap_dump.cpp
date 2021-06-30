#include<iostream>

using namespace std;

typedef struct heap_t
{
    int* arr;
    int size;
} heap_t;

int insert_heap(heap_t* heap, int x)
{
    // 범위 체크.
    heap->size++;
    if ( heap->arr[0] < heap->size )
    {
        heap->size--;
        return -1;
    }

    int idx = heap->size;
    int parent = idx / 2;
    heap->arr[idx] = x;

    while ( parent > 0 && heap->arr[idx]  )
    {

    }
}

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x;
    heap_t* heap = (heap_t*)malloc(sizeof(heap_t));
    cin >> n;

    heap->arr = (int*)malloc(sizeof(int) * (n+1));
    heap->size = 0;
    heap->arr[0] = n;   // 사용하지 않는 0번째 index에 capacity를 넣음.

    for ( int i = 0; i < n; i++ )
    {
        cin >> x;
        insert_heap(heap, x);

    }

    free(heap->arr);
    free(heap);
    return 0;
}
