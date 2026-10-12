#include "ffc/types.h"

typedef struct Node {
    uint32_t pad0[4];
    struct Node *f10;
    struct Node *f14;
    uint32_t pad1[2];
    struct Node *next;
} Node;

extern void func_0204dec8(void *a, void *b, uint32_t c);
extern void func_0204ded0(void *a);
extern Node *data_02139d6c;

Node *func_0204db90(void *a, Node *b, uint32_t mode)
{
    Node *r5 = 0;
    Node **link;

    func_0204dec8(a, b, mode);
    if (mode == 3) {
        b->next = data_02139d6c;
        data_02139d6c = b;
        r5 = b;
    } else {
        link = &data_02139d6c;
        while (*link != 0) {
            Node *node = *link;
            if (mode == 0) {
                if (node == b) { r5 = node; break; }
            } else if (mode == 1) {
                if (node->f10 == b) { r5 = node; break; }
            } else if (mode == 2) {
                if (node->f14 == b) { r5 = node; break; }
            } else if (mode == 4) {
                if (node == b) {
                    r5 = node;
                    *link = node->next;
                    break;
                }
            }
            link = &node->next;
        }
    }

    func_0204ded0(a);
    return r5;
}
