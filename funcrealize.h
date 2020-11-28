#include"func.h"
#include<iostream>
#include<cmath>
using namespace std;
int changdu;
int create_bitree(SqBiTree tree){
	printf("请输入序列长度\n");
	int length;
	scanf("%d",&length);
	tree[0]=length;
	changdu=length;
	int i;//计数
	printf("请输入这些数\n");
	for(i=1;i<=length;i++)
	{
	cin>>tree[i];
	}
	//1.从键盘接收输入的序列长度，存入tree[0]
	//2.从键盘循环接收输入的整数序列，例如 1，2，3，-1，4，-1，5，-1，-1，-1，-1，6，依次存入tree[i]	
return 0;}
int leftchild(SqBiTree tree,int value){
	int k;
	k=value;
	int jud;
	int childnum;
	childnum=k*2;
	if(childnum<=changdu){
		if(tree[childnum]!=-1) {printf("%d",tree[childnum]);jud=1;}
	else {printf("没有找到左孩子\n");jud=0;}
	}
	if (jud==1) return tree[childnum];
	else return -1;
}
int rightchild(SqBiTree tree,int value){
	int k;
	k=value;
	int jud;
	int childnum;
	childnum=k*2+1;
	if(childnum<=changdu){
		if(tree[childnum]!=-1) {printf("%d",tree[childnum]);jud=1;}
		else {printf("没有找到右孩子\n");jud=0;}
	}
	if (jud==1) return tree[childnum];
	else return -1;
}
void printtree(SqBiTree tree){
	int k=0;
	int count=1;
	int count_num=1;
	k=int(log(tree[0])/log(2))+1;
	for(int i=0;i<k;i++)
	{         
		cout<<"           ";//层数的循环
		for(int j=1;j<=pow(2,i)&&count_num<=changdu;j++,count_num++)
		{
			if(tree[count]==-1) 
			{
			cout<<" "<<" ";
			count++;
			}
			else {
			cout<<tree[count]<<" ";
			count++;}
		}
		cout<<endl;
	}
 }
void print_leaves(SqBiTree tree){
	int i ;
	printf("叶子节点有：");
	for(i=1;i<=tree[0];i++)
	{
		if(tree[i]!=-1)
		{
			if(2*i>tree[0])
			{
			cout<<tree[i];cout<<" ";continue;
			}
			else if(tree[2*i]==-1&&tree[2*i+1]==-1)
			{cout<<tree[i];cout<<" ";continue;}
			else continue;
		}
	}
}
