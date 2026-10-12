#include "ffc/types.h"

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    int32_t kind;
    int32_t id;
    struct Node *next;
} Node;

extern void func_ov001_021789c0(void *p, Node *n);

uint32_t func_ov001_02178b2c(void *p, int32_t arg)
{
    uint8_t *c = *(uint8_t **)p;
    uint32_t off = 0x5dc;
    Node *head;
    Node *tail;
    Node *prev;
    Node *node;
    Node *next;

    if (arg) {
        head = *(Node **)(c + off);
        tail = *(Node **)(c + off + 4);
        *(Node **)(c + off) = 0;
        *(Node **)(c + off + 4) = 0;
        prev = 0;
        node = head;
        while (node) {
            next = node->next;
            if (node->id == arg || node->kind == 1) {
                if (prev) {
                    prev->next = next;
                } else {
                    head = next;
                }
                if (tail == node) {
                    tail = prev;
                }
                func_ov001_021789c0(p, node);
            } else {
                prev = node;
            }
            node = next;
        }
        if (*(Node **)(c + off)) {
            Node *t = *(Node **)(c + off + 4);
            t->next = head;
        } else {
            *(Node **)(c + off) = head;
        }
        *(Node **)(c + off + 4) = tail;
        return 0;
    } else {
        if (*(Node **)(c + off)) {
            do {
                node = *(Node **)(c + off);
                *(Node **)(c + off) = 0;
                *(Node **)(c + off + 4) = 0;
                while (node) {
                    next = node->next;
                    func_ov001_021789c0(p, node);
                    node = next;
                }
            } while (*(Node **)(c + off));
        }
        return 0;
    }
}
