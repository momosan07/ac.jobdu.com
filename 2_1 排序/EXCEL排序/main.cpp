/////http://ac.jobdu.com/problem.php?pid=1023
/*��Ŀ������
    Excel���Զ�һ���¼������ָ���������������д����ʵ�����ƹ��ܡ�
    ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3
ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������
���룺
    ��������������ɲ���������ÿ�����������ĵ�1�а����������� N (N<=100000) �� C������ N �Ǽ�¼��������C ��ָ��������кš�������N�У�ÿ�а���һ��ѧ����¼��ÿ��ѧ����¼��ѧ�ţ�6λ���֣�ͬ�������û���ظ���ѧ�ţ���������������8λ�Ҳ������ո���ַ��������ɼ���������[0, 100]�ڵ���������ɣ�ÿ����Ŀ����1���ո������������ N=0 ʱ��ȫ�������������Ӧ�Ľ����Ҫ�����
�����
    ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3
ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������*/
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
            case 2:stable_sort(student,student+n,cmp2) ;break;//����stable�ĺ����ɱ�֤���Ԫ�ص�ԭ����Դ���������󱣳ֲ���
            case 3:stable_sort(student,student+n,cmp3) ;break;
        }
        printf("Case %d:\n",cnt++);
        for(int i=0;i<n;i++)
            printf("%s %s %d\n",student[i].id,student[i].name,student[i].score);
    }
    return 0;
}
