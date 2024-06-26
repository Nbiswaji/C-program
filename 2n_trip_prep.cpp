#include <stdio.h>
#define MAX 100

typedef struct{
    int row;
    int col;
    int val;
}element;

typedef struct SparseMatrix{
    element data[MAX];
    int rows;
    int cols;
    int terms;
}SparseMatrix;
void transpose(SparseMatrix *a, SparseMatrix *b)
{
    int i,j,k;
    b->rows = a->cols;
    b->cols = a->rows;
    b->terms = a->terms;

    if(a->terms > 0)
	{
        k = 0;
        for(i=0;i<a->cols;i++)
		{
            for(j=0;j<a->terms;j++)
			{
                if(a->data[j].col == i)
				{
                    b->data[k].row = a->data[j].col;
                    b->data[k].col = a->data[j].row;
                    b->data[k].val = a->data[j].val;
                    k++;
                }
            }
		}
	}
}