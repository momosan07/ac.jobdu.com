//http://ac.jobdu.com/problem.php?pid=1202
#include <stdio.h>
#include <stdlib.h>
//ð������
int main()
{
    int n;
    int buf[100];
    while(scanf("%d",&n)!=EOF){ //�������Ƿ�������жϣ��ȼ���while(gets(�ַ�������))
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(buf[j]>buf[j+1]){
                    int temp=buf[j];
                    buf[j]=buf[j+1];
                    buf[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
                 printf("%d ",buf[i]);
            }
            printf("\n");

    }
    return 0;
}
