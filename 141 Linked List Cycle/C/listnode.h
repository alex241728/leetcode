struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* create(int val);
struct ListNode* append(struct ListNode* head, int val);
void freeList(struct ListNode* head);