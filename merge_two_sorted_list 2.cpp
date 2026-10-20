#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int val) : val(val), next(nullptr) {};
    ListNode(int val, ListNode *next) : val(val), next(next) {};
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode dummy(0);
    ListNode *current = &dummy;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val < list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }
    if (list1 != nullptr)
    {
        current->next = list1;
    }
    else
    {
        current->next = list2;
    }
    return dummy.next;
}

int main()
{
    ListNode *list1;
    list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode *list2;
    list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode *list3 = mergeTwoLists(list1, list2);
    while (list3 != nullptr)
    {
        std::cout << list3->val;
        list3 = list3->next;
    }
}