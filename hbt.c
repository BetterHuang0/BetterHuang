#include<stdio.h>
#include<math.h>

void fuli(){
	int n,i;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t��ӭ���뵥��������:\n");
	printf("�����뱾��:");
	scanf("%lf",&bj);
	printf("������Ҫ�洢��:");
	scanf("%d",&n);
	printf("��������:");
	scanf("%lf",&ll);
	printf("���븴������:");
	scanf("%d",&i);
	printf("�������:");
	ll=pow((1+ll/i),i)-1;
	sum=bj*(pow(1+ll,n)); 
	printf("����%lf",sum);
	printf("\n");
}

void danli(){
	int n;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t��ӭ���뵥��������:\n");
	printf("�����뱾��:");
	scanf("%lf",&bj);
	printf("������洢��:");
	scanf("%d",&n);
	printf("��������:");
	scanf("%lf",&ll);
	printf("�������:");
	sum=bj+bj*n*ll;
	printf("����%lf",sum);
	printf("\n");
}

void benjin(){
	int n,i;
	double ll,sum,bj;
	system("cls");
	printf("\t\t\t��ӭ���뵥��������:\n");
	printf("������������Ҫ����ֵ:");
	scanf("%lf",&sum);
	printf("������������Ҫ�Ĵ洢��:");
	scanf("%d",&n);
	printf("����������:");
	scanf("%lf",&ll);
	printf("�����븴������:");
	scanf("%d",&i);
	ll=pow((1+ll/i),i)-1;
	bj=sum/pow(1+ll,n);
	printf("�������:");
	printf("����Ҫ����%lf",bj);
	printf("\n");	
}


main(){
	int a;
	printf("\t\t\t��ӭ���뵥��������:\n");
	printf("\t1.��������");
	printf("\n\t2.��������");
	printf("\n\t3.�󱾽�");
	printf("\n���������ѡ��:");
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