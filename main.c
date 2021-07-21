#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

 setlocale(LC_ALL,"");

 system("color 17");

 float n1[3],n2[3],media[3];
int a;

 for(a=0;a<3;a++)
{
system("pause");
system("cls");

 system("color 17");
printf("\n\n ++++++++++++++++++++++++++++++++\n\n");

 printf("\n\n Informe sua nota na primeira prova\n\n");
scanf("%f",&n1[a]);

 printf("\n\n Informe sua nota na segunda prova\n\n");
scanf("%f",&n2[a]);

 media[a]=(n1[a]+n2[a])/2;

 printf("\n\n Sua média foi %.2f\n\n",media[a]);
printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
}



return 0;
}
