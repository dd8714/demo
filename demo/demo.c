#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100][2]={0};
    int b[100][2]={0};
    int c[100][2]={0};
    int m,n;
    
    // for (int i = 0; i < 100; ++i)
    // {
    // 	for (int j = 0; j < 2; ++j)
    // 	{
    // 		a[i][j] = i;
    // 	}
    // }
    /*
     //打印输出数组a的值
     for (int i = 0; i < 100; ++i)
     {
     for (int j = 0; j < 2; ++j)
     {
     printf("%d\t", a[i][j]);
     //a[i][j] = i;
     }
     printf("\n");
     }
     */
    scanf("%d %d",&m,&n );
    do
    {
        
        for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
        {
            
            a[i][0] = m;
            a[i][1] = n;
        }
       scanf("%d %d",&m,&n );
    } while (m!=0);
    
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d\t", a[i][j]);
            //a[i][j] = i;
        }
        printf("\n");
    }
    return 0;
}
