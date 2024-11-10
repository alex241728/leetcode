struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create(int val);

struct TreeNode* leftInsert(struct TreeNode* root, int val);

struct TreeNode* rightInsert(struct TreeNode* root, int val);

void freeAll(struct TreeNode* root);