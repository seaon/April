#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    PtrToNode p;
    p = (PtrToNode)malloc(sizeof(struct Node));

    p->Element = 1;
    p->Next = NULL;

    printf("%p\n", p);
    printf("%d\n", p->Element);
    return 0;
}


// List MakeEmpty(List L)
// {
//     L = NULL;
// }

// int IsEmpty(List L)
// {
//     return L->Next == NULL;
// }

// int IsLast(Position P, List L)
// {
//     return P->Next == NULL;
// }
