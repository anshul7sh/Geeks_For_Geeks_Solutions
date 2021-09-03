// Link To Problem:-
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1#

// Solution:-

class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        struct node *prev = NULL, *curr = head, *next = NULL;

        bool isFirst = true;
        struct node *ans = NULL;

        while (curr != NULL)
        {

            struct node *currPrev = NULL, *currNext = NULL, *first = curr;

            for (int i = 0; i < k && curr != NULL; i++)
            {
                currNext = curr->next;
                curr->next = currPrev;
                currPrev = curr;
                curr = currNext;
            }

            if (isFirst)
            {
                ans = currPrev;
                isFirst = false;
            }

            first->next = curr;
            if (prev != NULL)
            {
                prev->next = currPrev;
            }

            prev = first;
        }

        return ans;
    }
};