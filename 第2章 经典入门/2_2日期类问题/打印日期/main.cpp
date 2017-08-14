//http://ac.jobdu.com/problem.php?pid=1186
#include<stdio.h>
#include<string.h>
#define ISYEAP(x) x%100!=0&&x%4==0||x%400==0?1:0

int dayOfMonth[13][2]=
{
    {0,0},//0
    {31,31},//1
    {28,29},//2
    {31,31},//3
    {30,30},//4
    {31,31},//5
    {30,30},//6
    {31,31},//7
    {31,31},//8
    {30,30},//9
    {31,31},//10
    {30,30},//11
    {31,31}//12
};


int main()
{
    int y,d;
    while(scanf("%d %d",&y,&d)!=EOF)
    {
        int m;
        for(m=1;d>dayOfMonth[m][ISYEAP(y)];m++)
        {
            d-=dayOfMonth[m][ISYEAP(y)];
        }
        printf("%04d-%02d-%02d\n",y,m,d);
    }
}
/*#include<stdio.h>
#define ISYEAP(x) x%100!=0&&x%4==0||x%400==0?1:0
int dayOfMonth[13][2]={
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31
};
struct Date{
    int Day;
    int Month;
    int Year;
    void nextDay(){
        Day++;
        if(Day>dayOfMonth[Month][ISYEAP(Year)]){
            Day=1;
            Month++;
            if(Month>12){
                Month=1;
                Year++;
            }
        }
    }
};
int buf[5001][13][32];
int Abs(int x){
    return x<0?-x:x;
}
int main(){
    Date tmp;
    int cnt;
    tmp.Day=1;
    tmp.Month=1;
    tmp.Year=0;
    while(tmp.Year!=5001){
        buf[tmp.Year][tmp.Month][tmp.Day]=cnt;
        tmp.nextDay();
        cnt++;
    }
    int y,m=1,d=1,days;
    while(scanf("%4d%d",&y,&days)!=EOF){
            while((buf[y][m][d]-buf[y][1][1]+1)<=days){
       if((buf[y][m][d]-buf[y][1][1]+1)==days){
        printf("%04d-%02d-%02d\n",y,m,d);
        break;
       }
       else{
        d++;
        if(d>dayOfMonth[m][ISYEAP(y)]){
            d=1;
            m++;
           }
       }
            }
    }
    return 0;
}
*/
