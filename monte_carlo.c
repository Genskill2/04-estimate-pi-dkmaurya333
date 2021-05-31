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
{float k=0;
for(int i=1;i<=n;i++)
{
float x=frandom();
float y=frandom();
float d=((x*x)+(y*y));


if (d<1)
k++;
//printf("(%f , %f)   -- %f----%f---%f\n",x,y,k,4*(k/i),d);
}
float f=k/n;
return 4*f;
}



int main(void) {
  float pi0;
  float pi1;
   int a;
scanf("%d",&a);
float ans=mc_pi(a);
return ans;
  /*
  pi0 = mc_pi(2500);
  pi1 = mc_pi(2500);
  printf("%f %f\n", pi0, pi1);
  
  if (pi0 == pi1) {
      printf("Two separate estimates of pi are exactly the same. This is unlikely.\n");
      abort();
    }

  if (fabs(pi0 - pi1) > 0.05) {
      printf("Two separate estimates %f and %f are too different.\n", pi0, pi1);
      abort();
  }

    
  for (int i=2000; i<5000; i++) {
    pi0 = mc_pi(i);
    if (!(fabs(pi0 - M_PI) < 0.4)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi0);
      abort();
    }
  }*/
}



