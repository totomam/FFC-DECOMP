#include "ffc/types.h"

typedef struct Node {
    uint32_t unk0;
    uint32_t size;
    uint32_t unk8;
    struct Node *next;
} Node;

typedef struct Range {
    uint32_t start;
    uint32_t end;
} Range;

extern Node *func_02077c6c(void *head, Node *n);
extern uint32_t func_02077ca8(Range *r, uint32_t id);
extern void func_02077c88(void *head, uint32_t id, Node *prev);

int func_02077f04(void *head, Range *r) {
    Range loc;
    Node *prev = 0;
    Node *n;

    loc.end = ((volatile Range *)r)->end;
    loc.start = ((volatile Range *)r)->start;
    n = *(Node **)head;
    if (n) {
        do {
            if ((uint32_t)n < r->start) {
                prev = n;
            } else {
                if ((uint32_t)n == r->end) {
                    loc.end = n->size + ((uint32_t)n + 0x10);
                    func_02077c6c(head, n);
                }
                break;
            }
            n = n->next;
        } while (n);
    }

    if (prev) {
        uint32_t pe = prev->size + ((uint32_t)prev + 0x10);
        if (pe == r->start) {
            loc.start = (uint32_t)prev;
            prev = func_02077c6c(head, prev);
        }
    }

    if (loc.end - loc.start < 0x10) {
        return 0;
    }
    {
        uint32_t id = func_02077ca8(&loc, 0x4652);
        func_02077c88(head, id, prev);
    }
    return 1;
}
