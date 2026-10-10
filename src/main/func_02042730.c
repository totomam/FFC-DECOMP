#include "ffc/types.h"

typedef struct Node {
    struct Node *left;
    struct Node *next;
    uint32_t pad8;
    uint32_t key;
} Node;

Node *func_02042730(Node *p, uint32_t *key, Node **out, uint8_t *flag, uint8_t *flag2)
{
    Node *cur;
    Node *ret;

    *out = 0;
    ret = (Node *)&p->next;
    cur = p->next;
    *flag = 1;
    *flag2 = 1;
    while (cur != 0) {
        uint32_t k = *key;
        uint32_t ck = cur->key;
        ret = cur;
        if (k < ck) {
            cur = cur->left;
            *flag = 1;
        } else {
            *out = cur;
            cur = cur->next;
            *flag = 0;
            *flag2 = 0;
        }
    }
    return ret;
}
