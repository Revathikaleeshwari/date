#include<stdio.h>
int main()
{
int d,m,year;
printf("Enter date(dd/mm/year):");
scanf("%d/%d/%d",&d,&m,&year);
if(d%10==1&&d!=11)
printf("%d st",d);
else if(d%10==2&&d!=12)
printf("%d nd",d);
else if(d%10==3&&d!=13)
printf("%d rd",d);
else
printf("%d th",d);
return 0;
}
