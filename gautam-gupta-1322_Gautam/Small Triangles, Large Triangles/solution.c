#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float ar[n];
    for(int i=0;i<n;i++)
    {
        float p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        ar[i]=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    float temp;
    int a1,b1,c1,j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        temp=ar[i];
        a1=tr[i].a;
        b1=tr[i].b;
        c1=tr[i].c;
        while(ar[j]>temp&&j>=0)
        {
            
            ar[j+1]=ar[j];
            tr[j+1].a=tr[j].a;
            tr[j+1].b=tr[j].b;
            tr[j+1].c=tr[j].c;          
            j--;
        }
        ar[j+1]=temp;
        tr[j+1].a=a1;
        tr[j+1].b=b1;
        tr[j+1].c=c1;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}