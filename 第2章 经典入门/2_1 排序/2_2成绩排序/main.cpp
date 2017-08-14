////http://ac.jobdu.com/problem.php?pid=1061

/*利用cmp函数实现比较规则
#include <stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

struct E{
    char name[100];
    int age;
    int score;
}buf[1000];

bool cmp(E a,E b){
    if(a.score!=b.score)
        return a.score<b.score;
    int tmp=strcmp(a.name,b.name);
    if(tmp!=0) return tmp<0;
    else return a.age<b.age;
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        }
        sort(buf,buf+n,cmp);
        for(int i=0;i<n;i++){
            printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        }

    }
    return 0;
}
*/

//利用运算符重载


#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

struct E{
    char name[101];
    int age;
    int score;
    bool operator < (const E &b)const{
        if(score!=b.score)
        return score<b.score;
        int tmp=strcmp(name,b.name);
        if(tmp!=0) return tmp<0;
        else return age<b.age;
    }
}buf[1000];

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        }
        sort(buf,buf+n);
        for(int i=0;i<n;i++){
            printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        }
    }
    return 0;
}
