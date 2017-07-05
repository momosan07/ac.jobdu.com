#include<stdio.h>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){//当cmp的返回值为TRUE时，表示第一个参数排在第二个参数之前
    return x>y;  //定义的规则
}
int main()
{
    int n;
    int buf[100];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        sort(buf,buf+n,cmp);//使用该重载形式，排序内存的起始地址、结束地址、比较函数
        for(int i=0;i<n;i++){
            printf("%d ",buf[i]);
        }
        printf("\n");
    }
    return 0;
}
