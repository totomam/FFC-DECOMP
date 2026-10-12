#include "ffc/types.h"

struct Node;
struct Node {
    uint8_t pad0[0x68];
    struct Node *next;
    uint8_t pad1[4];
    uint32_t f70;
};

struct Head {
    uint8_t pad0[0x24];
    struct Node *head;
};

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02086c14(struct Node *);
extern void func_02086c78(void);
extern struct Head data_021414f4;
extern uint8_t data_02141520[];

int func_0208716c(struct Node *a, uint32_t b)
{
    struct Node *n = data_021414f4.head;
    struct Node *prev = 0;
    uint32_t s = func_02088978();
    while (n != 0 && n != a) {
        prev = n;
        n = n->next;
    }
    if (n == 0 || n == (struct Node *)data_02141520) {
        func_0208898c(s);
        return 0;
    }
    if (n->f70 != b) {
        if (prev == 0) {
            data_021414f4.head = a->next;
        } else {
            prev->next = a->next;
        }
        a->f70 = b;
        func_02086c14(a);
        func_02086c78();
    }
    func_0208898c(s);
    return 1;
}
