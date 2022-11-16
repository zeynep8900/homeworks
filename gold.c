#include<stdio.h>
main()
{
	int sum=0,i=0,a,menu;
	int height[4] = {8,2,4,10};
	for(i=0;i<5;i++){
	printf("1)Gold Necklace 8g\n");
	printf("2)Earrings 2 g\n");
	printf("3)Diamond Ring 4g \n");
	printf("4)Gold Bracelet 10g \n");
	scanf("%d",&menu);
	if(menu==1){
		sum+=8;
		if(sum<=35)	printf("YOU STOLEN GOLD NECKLACE\n");
		else printf("YOU CANT DO THIS \n");
	}
	if(menu==2){
		sum+=2;
		if(sum<=35)	printf("YOU STOLEN EARRINGS\n");
		else printf("YOU CANT DO THIS \n");
	}
	if(menu==3){
		sum+=4;
		if(sum<=35)	printf("YOU STOLEN DIAMONG RING\n");
		else printf("YOU CANT DO THIS \n");
	}
	if(menu==4){
		sum+=10;
		if(sum<=35)	printf("YOU STOLEN GOLD BRACALET\n");
		else printf("YOU CANT DO THIS \n");
	}
	}
	printf("\nYOU CANT STEAL ANYTHING");
}
