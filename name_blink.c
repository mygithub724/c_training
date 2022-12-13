#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "color.h"
#define bk break
#define pf printf
int main()
{

	int i,j,k;
	char s[20];
	printf("enter the word\n");
	scanf("%s",s);
	 for(k=0;k<5;k++)
	 {
		 system("clear");
		 sleep(1);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	for(i=1;i<=5;i++)
	{
		for(j=0;s[j];j++)
			switch(s[j])
			{
				case 'm':switch(i)
					 {

						 case 1:pf(TR"\t████╗░████║");bk;
						 case 2:pf(TR"\t██╔████╔██║");bk;
						 case 3:pf(TR"\t██║╚██╔╝██║");bk;
						 case 4:pf(TR"\t██║░╚═╝░██║");bk;
						 case 5:pf(TR"\t╚═╝░░░░░╚═╝");bk;
					 }
					 bk;
				case 'a':switch(i)
					 {


						 case 1:pf(TG"\t░█████╗░");bk;
						 case 2:pf(TG"\t██╔══██╗");bk;
						 case 3:pf(TG"\t███████║");bk;
						 case 4:pf(TG"\t██╔══██║");bk;
						 case 5:pf(TG"\t██║░░██║");bk;
						 case 6:pf(TG"\t╚═╝░░╚═╝");bk;
					 }
					 bk;
				case 'g':switch(i)
					 {

						 case 1:pf(TB"\t████╗░   ");bk;
						 case 2:pf(TB"\t██╔════╝ ");bk;
						 case 3:pf(TB"\t██║░░██╗ ");bk;
						 case 4:pf(TB"\t██║░░╚██╗");bk;
						 case 5:pf(TB"\t╚██████╔╝");bk;
						 case 6:pf(TB"\t╚═════╝  ");bk;
					 }
					 bk;
				case 'i':switch(i)
					 {

						 case 1:pf(TP"\t██╗");bk;
						 case 2:pf(TP"\t██║");bk;
						 case 3:pf(TP"\t██║");bk;
						 case 4:pf(TP"\t██║");bk;
						 case 5:pf(TP"\t██║");bk;
						 case 6:pf(TP"\t╚═╝");bk;
					 }
					 bk;
			}
		pf("\n");
	}
	sleep(1);
	 }
}


