#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n)
{ float x=1;
for(int i=1;i<=n;i++)
{x*=((4*i*i)/((4*i*i)-1));

}
return 2*x;}

int main(void)
{ int a;
scanf("%d",&a);
float ans=wallis_pi(a);
return ans;
}

