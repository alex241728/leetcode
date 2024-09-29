struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int val);
struct ListNode* append(struct ListNode* head, int val);
void print(struct ListNode* head);
void freeList(struct ListNode* head);