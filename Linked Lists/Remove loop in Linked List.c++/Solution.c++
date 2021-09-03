// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#

// Solution:-

class Solution
{
public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return;

        Node *slow = head, *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        if (slow == fast)
        {

            slow = head;

            if (slow == fast)
            {
                while (fast->next != slow)
                    fast = fast->next;
            }
            else
            {
                while (slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            fast->next = NULL;
        }
    }
};
