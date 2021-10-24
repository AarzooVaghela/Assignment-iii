#include<stdio.h>
#define MAX 500000 
void sieveOfErastosthenes(int A[],long long int n)
{ 
for(long long int i=2;i<n;i++) 
{
if(A[i]!=i) 
continue; 
for(long long int j=i;j<=n;j+=i)
{ 
if(A[j]==j) 
A[j]=i; } }}
int main()
{ 
int A[MAX];
for(long long int i=0;i<MAX;i++)
{ 
A[i]=i; 
} 
sieveOfErastosthenes(A,MAX); 
long long int n; 
printf("Enter the number\n");
scanf("%ld",&n);
printf("Prime Factorization of %ld:\n",n); while(n!=0 || n!=1)
{ 
printf("%ld ",A[n]); 
n/=A[n];
if(n==1) 
break; 
}
}
