// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#

// Solution:-

class Solution
{
public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node *head)
    {
        Node *slow = head, *fast = head;

        while (slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};