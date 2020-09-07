#include <stdio.h>
#include <math.h>
main()
{
	int c,i,a,d=0,r=0,sa=0,sg=0,g=0,n,t=0,gp=0;
	printf("CHOOSE OPERATION FOR SERIES :- ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			
	    printf("\nINPUT FIRST TERM FOR PRINTING SERIES OF AP :- ");
		scanf("%d",&a);
		printf("\nCOMMON DIFFERENCE :- ");
		scanf("%d",&d);
		printf("\nTOTAL NUMBER OF TERMS YOU WANT TO GET PRINTED :- ");
		scanf("%d",&n);
		printf("\nAP SERIES :-  ");
		for(i=1;i<=n;i++)
		{
			t=a+((i-1)*d);
			printf("\n%d",t);
			t=a;
		}
		break; 
		case 2: printf("\nINPUT FIRST TERM  FOR PRINTING SUM OF SERIES OF AP :- ");
		scanf("%d",&a);
		printf("\nCOMMON DIFFERENCE :- ");
		scanf("%d",&d);
		printf("\nTOTAL NUMBER OF TERMS YOU WANT TO SUM OF :- ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			t=a+((i-1)*d);
			sa=sa+t;
			t=a;
		}
		printf("\nSUM OF AP SERIES :- %d",sa);
		break ;
		case 3: printf("\nINPUT FIRST TERM  FOR PRINTING SERIES OF GP :- ");
		scanf("%d",&a);
		printf("\nCOMMON RATIO :- ");
		scanf("%d",&r);
	    printf("\nTOTAL NUMBER OF TERMS YOU WANT TO GET PRINTED :- ");
		scanf("%d",&n);
	    printf("\nGP SERIES :- ");
		for(i=1;i<=n;i++)
		{
			g=pow(r,(i-1));
			gp=g*a;
			printf("\n%d",gp);
		   	
		}
		break ;
		case 4: printf("\nINPUT FIRST TERM  FOR PRINTING SUM OF SERIES OF GP PROVIDED COMMON RATION IS GREATER THAN ONE:- ");
		scanf("%d",&a);
		printf("\nCOMMON RATIO :- ");
		scanf("%d",&r);
		printf("\nTOTAL NUMBER OF TERMS YOU WANT TO SUM OF :- ");
		scanf("%d",&n);
		g=pow(r,n);
	    sg= ((a*(g-1))/(r-1));
		printf("\nSUM OF AP SERIES :- %d",sg);
		break;
			
	}
}
