////http://ac.jobdu.com/problem.php?pid=1088
/*
#include<stdio.h>
int Hash[10000];
int main(){
    int L,M,i,j;

    for(i=1;i<=10000;i++){
        Hash[i]=1;
    }

    while(scanf("%d%d",&L,&M)!=EOF){
        int low,high;
        int count=0;
        for(i=0;i<=L;i++){
            Hash[i]=1;
        }
        for(i=0;i<M;i++){
            scanf("%d%d",&low,&high);
            for(j=low;j<=high;j++){
                Hash[j]--;
            }
        }
        for(i=0;i<=L;i++){
            if(Hash[i]==1){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

*/

#include<stdio.h>
int Hash[10001];
int main(){
    int L,M;
    while(scanf("%d%d",&L,&M)!=EOF){
            int low,high;
            int cnt=0;
            for(int i=0;i<=L;i++){
                Hash[i]={1};
            }
            for(int i=0;i<M;i++){
                 scanf("%d%d",&low,&high);
                 if(0<=low&&low<high&&high<L){
                        for(int i=low;i<=high;i++){
                                Hash[i]=0;
                        }
                 }
            }
        for(int i=0;i<=L;i++){
            if(Hash[i]==1)
                cnt++;
        }
        printf("%d",cnt);
    }
    return 0;
}
