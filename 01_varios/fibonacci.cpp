#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int prev2=0, prev=1, act=1;
    for(int i=0;i<100;i++){
      act=prev2+prev;
      prev2=prev;
      prev=act;
      printf("%lli \n",act);
    }
   return EXIT_SUCCESS;
}
