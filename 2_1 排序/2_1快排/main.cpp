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
        sort(buf,buf+n); //库函数，排序内存的起始地址和结束地址
        for(int i=0;i<n;i++){
            printf("%d ",buf[i]);
        }
        printf("\n");
    }
    return 0;
}

