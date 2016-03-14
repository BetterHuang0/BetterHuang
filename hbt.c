#include<stdio.h>
#include<math.h>

void fuli(){
	int n,i;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t欢迎进入单复利计算:\n");
	printf("请输入本金:");
	scanf("%lf",&bj);
	printf("输入所要存储年:");
	scanf("%d",&n);
	printf("输入利率:");
	scanf("%lf",&ll);
	printf("输入复利次数:");
	scanf("%d",&i);
	printf("正在输出:");
	ll=pow((1+ll/i),i)-1;
	sum=bj*(pow(1+ll,n)); 
	printf("所得%lf",sum);
	printf("\n");
}

void danli(){
	int n;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t欢迎进入单复利计算:\n");
	printf("请输入本金:");
	scanf("%lf",&bj);
	printf("请输入存储年:");
	scanf("%d",&n);
	printf("输入利率:");
	scanf("%lf",&ll);
	printf("正在输出:");
	sum=bj+bj*n*ll;
	printf("所得%lf",sum);
	printf("\n");
}

void benjin(){
	int n,i;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t欢迎进入单复利计算:\n");
	printf("请输入你所需要的总值:");
	scanf("%lf",&sum);
	printf("请输入你所需要的存储年:");
	scanf("%d",&n);
	printf("请输入利率:");
	scanf("%lf",&ll);
	printf("请输入复利次数:");
	scanf("%d",&i);
	ll=pow((1+ll/i),i)-1;
	bj=sum/pow(1+ll,n);
	printf("正在输出:");
	printf("所需要本金%lf",bj);
	printf("\n");	
}


main(){
	int a;
	printf("\t\t\t欢迎进入单复利计算:\n");
	printf("\t1.单利计算");
	printf("\n\t2.复利计算");
	printf("\n\t3.求本金");
	printf("\n请输入你的选项:");
	scanf("%d",&a);
	switch (a){
	case 1:
		danli();
		break;
	case 2:
		fuli();
		break;
	case 3:
		benjin();
		break;
	default:
		return 0;
	}
}