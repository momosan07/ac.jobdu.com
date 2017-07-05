/////http://ac.jobdu.com/problem.php?pid=1023
/*题目描述：
    Excel可以对一组纪录按任意指定列排序。现请你编写程序实现类似功能。
    对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；当 C=2时，按姓名的非递减字典序排序；当 C=3
时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。
输入：
    测试输入包含若干测试用例。每个测试用例的第1行包含两个整数 N (N<=100000) 和 C，其中 N 是纪录的条数，C 是指定排序的列号。以下有N行，每行包含一条学生纪录。每条学生纪录由学号（6位数字，同组测试中没有重复的学号）、姓名（不超过8位且不包含空格的字符串）、成绩（闭区间[0, 100]内的整数）组成，每个项目间用1个空格隔开。当读到 N=0 时，全部输入结束，相应的结果不要输出。
输出：
    对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；当 C=2时，按姓名的非递减字典序排序；当 C=3
时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。*/
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX 100001

struct Student{
    char id[7];
    char name[9];
    int score;
}student[MAX];

bool cmp1(Student x, Student y){
     return  strcmp(x.id,y.id)<0;
}
bool cmp2(Student x, Student y){
      if( strcmp(x.name,y.name) != 0){
        return strcmp(x.name, y.name)<0;
    } else {
        return strcmp(x.id, y.id)<0;
    }
}
bool cmp3(Student x, Student y){
    if( (x.score<y.score) != 0){
        return x.score<y.score;
    } else {
        return strcmp(x.id, y.id)<0;
    }
}
int main(){
    int n,c;
    int cnt = 1;
    while(scanf("%d %d",&n,&c)!=EOF){
        if(n==0) break;
        for(int i=0;i<n;i++)
            scanf("%s %s %d",student[i].id,student[i].name,&student[i].score);

        switch(c){
            case 1:sort(student,student+n,cmp1);break;
            case 2:stable_sort(student,student+n,cmp2) ;break;//带有stable的函数可保证相等元素的原本相对次序在排序后保持不变
            case 3:stable_sort(student,student+n,cmp3) ;break;
        }
        printf("Case %d:\n",cnt++);
        for(int i=0;i<n;i++)
            printf("%s %s %d\n",student[i].id,student[i].name,student[i].score);
    }
    return 0;
}
