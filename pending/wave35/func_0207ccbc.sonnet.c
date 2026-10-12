#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    void *data;
    void (*fn)(void *, uint32_t, uint32_t);
} Node;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern Node *data_02140ce0;

void func_0207ccbc(uint32_t a, uint32_t b)
{
    uint32_t s = func_02088978();
    Node *n = data_02140ce0;
    Node **p;
    while (n != 0) {
        p = &data_02140ce0;
        if (n->fn != 0) {
            n->fn(n->data, a, b);
        }
        if (*p == n) {
            p = (Node **)n;
        }
        n = *p;
    }
    func_0208898c(s);
}
