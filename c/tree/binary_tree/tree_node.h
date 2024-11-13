struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createTreeNode(int val, struct TreeNode* left, struct TreeNode* right);

void freeAll(struct TreeNode* root);

void printInOrder(struct TreeNode* root);

void printPreOrder(struct TreeNode* root);

void printPostOrder(struct TreeNode* root);

void printLevelOrder(struct TreeNode* root);