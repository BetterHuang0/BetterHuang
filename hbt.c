#include<stdio.h>
#include<math.h>

void fuli(){
    int n,i;
    double ll,sum,bj;
    system("cls");
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
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
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
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
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
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

void shijian(){
	int i;
    double ll,sum,bj,n;
    system("cls");
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
    printf("�����뱾��:");
    scanf("%lf",&bj);
	printf("������������Ҫ����ֵ:");
    scanf("%lf",&sum);
    printf("��������:");
    scanf("%lf",&ll);
    printf("���븴������:");
    scanf("%d",&i);
    printf("�������:");
    ll=pow((1+ll/i),i)-1;
    n=log(sum/bj)/log(1+ll);
	printf("����:%lf",n);
    printf("\n");
}

void ll(){
	int n,i;
    double ll,sum,bj;
    system("cls");
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
    printf("�����뱾��:");
    scanf("%lf",&bj);
    printf("������������Ҫ����ֵ:");
    scanf("%lf",&sum);
    printf("������Ҫ�洢��:");
    scanf("%d",&n);
    printf("���븴������:");
    scanf("%d",&i);
    printf("�������:");
    /*sum=bj*(pow(1+ll,n));
	ll=pow((1+ll/i),i)-1;*///�Ƶ���
	ll=i*(pow(pow(sum/bj,1.0/n),1.0/i)-1);
	printf("����:%lf",ll);
    printf("\n");
}

void qixian(){
    double sum,bj,ll;
    int n;
    system("cls");
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
    printf("��������Ͷ��:");
    scanf("%lf",&bj);
    printf("�������긴��������:");
    scanf("%lf",&ll);
    printf("���������Ͷ������:");
    scanf("%d",&n);
    sum=bj*(1+ll)*pow((1+ll),n-1)/ll;
    printf("\n�ó���%lf\n",sum);
}


main(){
    int a;
    printf("\t\t\t��ӭ���뵥��������3.0:\n");
    printf("\t1.��������");
    printf("\n\t2.��������");
    printf("\n\t3.�󱾽�");
    printf("\n\t4.��ʱ��");
    printf("\n\t5.������");
    printf("\n\t6.Ͷ��");
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
    case 4:
		shijian();
		break;
    case 5:
		ll();
		break;
	case 6:
        qixian();
        break;
    default:
        return 0;
    }
}