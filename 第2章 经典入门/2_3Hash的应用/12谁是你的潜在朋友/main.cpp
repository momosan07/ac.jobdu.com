////http://ac.jobdu.com/problem.php?pid=1156
#include <stdio.h>
int main() {
        int n,m;
        while(scanf("%d",&n) != EOF){
                int M[201] = {0};
                int N[1000]={0};

                scanf("%d",&m);
                for(int i=0; i<n; i++){
                        scanf("%d",&N[i]);
                        M[N[i]]++;
                }
                for(int i=0; i<n; i++){
                        if(M[N[i]] == 1)
                                printf("BeiJu\n");
                        else
                                printf("%d\n",M[N[i]]-1);
                }
        }
        return 0;
}
