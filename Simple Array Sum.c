#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int N;
int map[1000];
int main() {
  long int sum =0;
    scanf("%d",&N);
    for(int i = 0; i<N; i++)
        {
      scanf("%d",&map[i]);
    }
    for(int i=0; i<N;i++)
        {
        sum += map[i];
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%ld",sum);
    return 0;
}