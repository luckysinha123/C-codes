#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int rev =0;
int copy=n;

while (n>0){
    int digit =n%10;
    rev = rev*10 + digit;
    n=n/10;
}
if (rev==copy){
    printf("pallendrome");
}
else{
    printf("Not Pallendrome");
}
return 0;
}
