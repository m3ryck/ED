#include <stdio.h>
char s[10001];
int i;
int max(int p,int q)
{
        return p > q ? p : q;
}

int altura()
{
        if (s[i++] =='l')
             return 1;
        else
            return max(altura(),altura())+1;
}
int main()
{
        int t;
        scanf("%d",&t);
        while (t--)
        {
                scanf("%s", s);
                i=0;
                printf("%d\n",altura()-1);
        }
        return 0;
}