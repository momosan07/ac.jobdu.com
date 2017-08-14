//http://ac.jobdu.com/problem.php?pid=1065
#include<stdio.h>
int main(){
    int h;
    while(scanf("%d",&h)!=EOF){
        int maxLine=h+(h-1)*2;
        for(int i=0;i<h;i++){
            for(int j=1;j<maxLine;j++){
                if(j<maxLine-h-(i-1)*2)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}
