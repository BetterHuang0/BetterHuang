#include<stdio.h>
#include<math.h>

void fuli(){
    int n,i;
    double ll,sum,bj;
    system("cls");
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
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
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
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
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
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

void shijian(){
	int i;
    double ll,sum,bj,n;
    system("cls");
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
    printf("请输入本金:");
    scanf("%lf",&bj);
	printf("请输入你所需要的总值:");
    scanf("%lf",&sum);
    printf("输入利率:");
    scanf("%lf",&ll);
    printf("输入复利次数:");
    scanf("%d",&i);
    printf("正在输出:");
    ll=pow((1+ll/i),i)-1;
    n=log(sum/bj)/log(1+ll);
	printf("所得:%lf",n);
    printf("\n");
}

void ll(){
	int n,i;
    double ll,sum,bj;
    system("cls");
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
    printf("请输入本金:");
    scanf("%lf",&bj);
    printf("请输入你所需要的总值:");
    scanf("%lf",&sum);
    printf("输入所要存储年:");
    scanf("%d",&n);
    printf("输入复利次数:");
    scanf("%d",&i);
    printf("正在输出:");
    /*sum=bj*(pow(1+ll,n));
	ll=pow((1+ll/i),i)-1;*///推导出
	ll=i*(pow(pow(sum/bj,1.0/n),1.0/i)-1);
	printf("所得:%lf",ll);
    printf("\n");
}

void qixian(){
    double sum,bj,ll;
    int n;
    system("cls");
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
    printf("请输入年投入:");
    scanf("%lf",&bj);
    printf("请输入年复合增长率:");
    scanf("%lf",&ll);
    printf("请输入持续投入年数:");
    scanf("%d",&n);
    sum=bj*(1+ll)*pow((1+ll),n-1)/ll;
    printf("\n得出：%lf\n",sum);
}


main(){
    int a;
    printf("\t\t\t欢迎进入单复利计算3.0:\n");
    printf("\t1.单利计算");
    printf("\n\t2.复利计算");
    printf("\n\t3.求本金");
    printf("\n\t4.求时间");
    printf("\n\t5.求利率");
    printf("\n\t6.投资");
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