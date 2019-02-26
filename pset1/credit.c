#include<stdio.h>
#include<cs50.h>

int main(void)

{
    int sum=0;

long long cc;
do
{
    cc=get_ long_long("Credit card num: \n");
}
while(cc<0);

int count=0;
long long number=cc;
while(num>0)
{
    num=num/10;
    count++;
}

if(count=13 && count=14 && count=16)
{
    printf("Invalide card num: \n");
}
int digit[count];
for (int i=0;i<count;i++);
{
    odigit[i]=cc%10;
    cc=cc/10;
}
for(int i=0;i<count;i++)
{
    odigit[i]=digit[i];
}
for(int i=1; i<count; i++)
{
    sum=sum+digit[i]%10+digit[i]/10%10;
}
if(sum%10==0)
{
    if(count==13 && digit[12]==4 && sum%10==0)
    {
        printf("valide card:\n");
    }
    if(count=16 && odigit[15]==4 && sum%10==0)
    {
        printf("valide card:\n");
    }
    if(count==16 && odigit[14]==3 && sum%10==0 && (odigit[13]==4|| odigit[13]==7))
}
{
    printf("Valide Amex:\n");
}
if(count==16 && odigit[15]==5 %% (odigit[14]==1|| odigit[14]==2|| odigit[14]==3|| odigit[14]=4|| odigit[14]==5 && sum%10==0))
{
    printf("Valide Master card \n");
}
else
{
    printf("Invalide Card \n");
}
}