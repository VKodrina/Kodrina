#include <stdio.h> 
#include <math.h> 
int main() 
{ 
int n; 
printf("Enter massive size:"); 
scanf ("%d",&n); 
int a[n]; 
int i; 
for (i = 0; i<n; i++) 
{ 
printf("a[%d] = ", i); 
scanf("%d", &a[i]); 
} 
for (i = 0; i<n; i++) 
printf("%d ", a[i]); 
getchar(); getchar(); 
for (i = 0; i<n; i++) 
{ 
int k, b=0,c,j=0; 
k=a[i]; 
while (k>=1) 
{ 
c=k%10; 
if(c==1) b=b+pow(2, j); 
k = k/10; 
j++; 
} 
printf ("dec = %d\n",b); 
} 
return 0; 
}

