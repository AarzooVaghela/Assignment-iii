#include<stdio.h>
long long compute_hash(char *s) 
{
const int a = 31; 
const int b = 1e9 + 9;
long long hash_value = 0;
long long p_pow = 1;
for (int c=0;c<strlen(s);c++) 
{
hash_value = (hash_value + (s[c] - 'A' + 1) * p_pow) % b; 
p_pow = (p_pow * a) % b; 
}
return hash_value;
}
int main()
{ char s[1000]; 
printf("Enter the string (upper case)\n");
scanf("%[^\n]s",s);
printf("Hash value%ld",compute_hash(s));
}
