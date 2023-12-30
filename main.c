#include<stdio.h>
 int main(){
 additiontat(getb(),geta());
 subtraction1(geta(),getb());
 multiplication2(geta(),getb());
 division12(geta(),getb());
 modulasprogram1(geta(),getb());
  ifelseprogram(geta(),getb());

 return 0;
}



int geta()
{
    int a;
    printf("enter the given  value is:\n");
    scanf("%d",&a);
    return a;
}
int getb()
{
    int b;
    printf("enter the given value is:\n");
    scanf("%d",&b);
    return b;
}
int additiontat(int a, int b)
{
    int c;
    c=b+a;
    printf("Addition two value is:%d\n",c);
    return 0;

}
int subtraction1(int a, int b)
{
    int c;
    c=b-a;
    printf("subtraction of  two value is:%d\n",c);
    return 0;

}
int multiplication2(int a, int b)
{
    int c;
    c=b*a;
    printf("multiplication two value is:%d\n",c);
    return 0;

}
int division12(int a, int b)
{

   int c;
   c=a/b;
    printf("division of two value is:%d\n",c);
    return 0;

}
int modulasprogram1(int a,int b)
 {

     int c=a%b;
     printf("THE modulas OF f IS:%d",c);
}
  int ifelseprogram(int a,int b)
{
    if (a>b)
    {
        printf("\n a is greater than b");
    }
    else
    {
        printf("\n a is less than b");
    }
}
int forprogram(int a,int b)
{
    for (b=0;b<7;b++)
    {
        printf("\nEnter the value of x:%d",b);
    }
    for (a=10;a<3;a--)
    {
        printf("\nEnter the value of y:%d",a);
    }
}


int switchprogram(int a,int b)
{
    switch (a)
    {
    case 1:
        printf("\nMy location is Trichy");
        break;
    case 2:
        printf("\nMy location is Chennai");
        break;
    default:
        printf("\nNo available location");
    }
}
int whileprogram1(int b)
{
    while (b<10)
    {
        printf("\nEnter the value of x:%d",b);
        b++;
    }
}

int logicalprogram(int a,int b)
{
    printf("\nThe output of   A is :%d",(a<30 && b<20));
    printf("\nThe output of B is :%d",(a<10 || b<10));
}












