#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, const void *d);
extern void func_ov000_021653f4(void *p);
extern uint8_t data_ov001_0219124c[];
extern uint8_t data_ov001_02191268[];
extern uint8_t data_ov001_02191294[];

typedef struct Node {
    uint32_t pad[3];
    struct Node *next;
} Node;

typedef struct Owner {
    uint8_t pad[0x40];
    Node *head;
    Node *first;
    Node *last;
} Owner;

void func_ov001_0217c628(Owner *a, Node *b)
{
    Node *prev;
    Node *x;

    if (a == 0 || b == 0) {
        func_ov000_021652a8(1, 4, 2, data_ov001_0219124c);
        return;
    }
    if (a->head == 0) {
        func_ov000_021652a8(1, 4, 2, data_ov001_0219124c);
        return;
    }
    if (a->first == a->last && a->first == b) {
        Node *n = b->next;
        a->last = n;
        a->first = n;
        a->head = n;
    } else if (a->first == b) {
        Node *n = a->first->next;
        a->first = n;
        a->head = n;
    } else {
        prev = a->first;
        x = prev->next;
        while (x != b) {
            if (x == 0) {
                func_ov000_021652a8(1, 4, 1, data_ov001_02191268);
                return;
            }
            prev = x;
            x = x->next;
        }
        prev->next = b->next;
    }
    func_ov000_021652a8(1, 4, 8, data_ov001_02191294);
    func_ov000_021653f4(b);
}
