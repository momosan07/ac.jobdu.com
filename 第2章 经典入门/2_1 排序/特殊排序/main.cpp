/////http://ac.jobdu.com/problem.php?pid=1185

#include<stdio.h>
#include<algorithm>
using namespace std;
//调用快速排序库函数
int main(){
    int n;
    int buf[10000];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        if(n==1)
            printf("%d\n-1\n",buf[0]);
        else{
        sort(buf,buf+n); //库函数，排序内存的起始地址和结束地址
        printf("%d\n",buf[n-1]);
        for(int i=0;i<n-1;i++){
            printf("%d ",buf[i]);
        }
        printf("\n");
        }
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 1000

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int n;
    int i;
    int a[N];

    while (scanf("%d", &n) != EOF)
    {
        for (i=0; i<n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(a[0]), cmp);
        printf("%d\n", a[n-1]);
        if (n == 1)
            printf("-1\n");
        else
        {
            for (i=0; i<n-2; i++)
                printf("%d ", a[i]);
            printf("%d\n", a[i]);
        }
    }

    return 0;
}

*/
