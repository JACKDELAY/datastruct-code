#define  MAX_TREE_SIZE  100// 二叉树的最大结点数
// 0号单元存储实际最大下标，1号结点存储根结点
typedef int  SqBiTree[MAX_TREE_SIZE];    
SqBiTree  tree;


int create_bitree(SqBiTree tree);
int leftchild(SqBiTree tree,int value);
int rightchild(SqBiTree tree,int value);
void printtree(SqBiTree tree);
void print_leaves(SqBiTree tree);
