// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1#

// Solution:-
class Solution
{
public:
    //Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        if (head == NULL)
            return head;

        struct Node *prev = NULL, *curr = head, *next = head->next;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};