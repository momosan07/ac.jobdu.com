#include<stdio.h>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){//��cmp�ķ���ֵΪTRUEʱ����ʾ��һ���������ڵڶ�������֮ǰ
    return x>y;  //����Ĺ���
}
int main()
{
    int n;
    int buf[100];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        sort(buf,buf+n,cmp);//ʹ�ø�������ʽ�������ڴ����ʼ��ַ��������ַ���ȽϺ���
        for(int i=0;i<n;i++){
            printf("%d ",buf[i]);
        }
        printf("\n");
    }
    return 0;
}
