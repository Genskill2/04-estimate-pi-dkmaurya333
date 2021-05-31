#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int);

float frandom() {
  long int q = random();
  float ret = (float)q/(float)RAND_MAX;
  return ret;
}
float mc_pi(int n)
{int k=0;
int i;
for(i=1;i<=n;i++)
{
float x=frandom();
float y=frandom();
float d=((x*x)+(y*y));
if (d>1)
k++;
}
float f=(i-k)/i;
return 4*f;
}



int main(void) {
   int a;
scanf("%d",&a);
float ans=mc_pi(a);

return ans;
  
 
}



