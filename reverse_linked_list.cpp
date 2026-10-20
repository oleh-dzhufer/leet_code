#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

ListNode *reversedList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next;
    if (head == nullptr)
    {
        return nullptr;
    }

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    ListNode head(1);
    head.next = new ListNode(2);
    head.next->next = new ListNode(3);
    head.next->next->next = new ListNode(4);
    ListNode *reversed = reversedList(&head);
    for (int i = 0; i < 4; i++)
    {
        std::cout << reversed->val;
        reversed = reversed->next;
    }
}