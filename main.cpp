#include"funcrealize.h"
int main()
{
SqBiTree  bitree;
int value;
create_bitree(bitree);
cout<<"请输入要寻找哪个元素的左孩子"<<endl;  cin>>value;
leftchild(bitree,value);
cout<<endl; 
cout<<"请输入要寻找哪个元素的右孩子"<<endl;  cin>>value;
rightchild(bitree,value);
cout<<endl;
print_leaves(bitree);
cout<<endl<<endl;
cout<<"整棵二叉树为："<<endl;
printtree(bitree);
return 0;
} 
