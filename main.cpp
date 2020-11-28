#include"funcrealize.h"
#include <iostream>
using namespace std;
int main()
{
BiTree  T;
printf("二叉树的遍历\n");
CreateTree_Preorder( T);
printf("\n递归中序遍历\n");
InOrderTraverse_recur(T,PrintElement);
printf("\n");
printf("递归中序遍历\n");
InOrderTraverse_recur(T, PrintElement);
printf("\n");
printf("非递归方式中序遍历\n");
InOrderTraverse2(T, PrintElement);
printf("\n");
InOrderTraverse3(T, PrintElement);
printf("\n");
deleteTree(T);
printf("删除树");
return 0;
}
