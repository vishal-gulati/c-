#include<stdio.h>
int main(){
struct A{
int i;
};
struct A a, *b;
a.i=99; b=&a;
printf("%d and %d",a.i, b->i);
return 0;
}  

