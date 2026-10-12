#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void *func_02077b70(void *a, void *b);
extern void func_02077b34(void *a, void *b);
extern void func_0207bf14(void *a);

typedef struct Node {
    uint8_t pad[8];
    uint32_t key;
} Node;

void func_0207be70(void *p, uint32_t x)
{
    uint32_t saved;
    Node *n;
    Node *next;

    saved = func_02088978();
    n = (Node *)func_02077b70(p, 0);
    if (n != 0) {
        do {
            next = (Node *)func_02077b70(p, n);
            if (n->key == x) {
                func_02077b34(p, n);
                func_0207bf14(n);
            }
            n = next;
        } while (next != 0);
    }
    func_0208898c(saved);
}
