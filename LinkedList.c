
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{

    int num;

    struct Node *next;

} Node;

int main()
{

    printf("%d\n", sizeof(Node));

    int len = 10;

    Node *head, *temp, *tail;

    for (int i = 0; i < len; ++i)
    {

        Node *n = malloc(sizeof(Node));

        n->num = i;

        if (i == 0)
        {

            head = n;

            temp = head;
        }

        else
        {

            temp->next = n;

            temp = n;
        }
    }
    tail = temp;

    temp->next = NULL;

    // ==========append Node to LinkedList=================

    Node *newNode = malloc(sizeof(Node));

    newNode->num = 25;

    tail->next = newNode;

    //    ===============remove node from LinkList============

    //======shan chu zhong jian or jie wei====

    temp = head;

    int index = 10;

    Node *t;

    if (index > 0)
    {
        for (int i = 0; i < index - 1; ++i)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
    } //=====shan head===========

    else if (index == 0)
    {

        t = head;

        head = head->next;

        free(t);
    }

    temp = head;

    while (temp != NULL)
    {

        printf("%d\n", temp->num);

        printf("  %p\n", temp);

        temp = temp->next;
    }

    return 0;
}
