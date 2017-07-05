/////http://ac.jobdu.com/problem.php?pid=1054
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
char s[201];
int main()
{
  int l;
  while(gets(s))
  {
    l=strlen(s);
    sort(s,s+l);
    printf("%s\n",s );
  }
  return 0;
}
