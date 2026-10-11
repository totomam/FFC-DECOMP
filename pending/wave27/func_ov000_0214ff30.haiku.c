#include "ffc/types.h"

struct Node {
    void *f0;
    void *f4;
    void *f8;
    struct Node *next;
};

extern uint8_t *func_ov000_0214fa54(void *p);

struct Node *func_ov000_0214ff30(void *p) {
    uint8_t *base = func_ov000_0214fa54(p);
    struct Node *r3 = 0;
    struct Node *head = *(struct Node **)(base + 0x12c4);
    if (head != 0 && *(uint32_t *)(base + 0x12c8) > 0xc) {
        r3 = head->f4;
        while (r3 != 0) {
            if (r3->f4 == p) {
                break;
            }
            r3 = r3->next;
        }
    }
    return r3;
}
