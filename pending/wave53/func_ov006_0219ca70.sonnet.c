#include "ffc/types.h"
#define H (*(Node *volatile *)(a + 0xc0))

typedef struct Node {
    struct Node *next;
    uint32_t size;
    void (*cb)(struct Node *);
    void (*fn)(struct Node *);
} Node;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_0208716c(void *obj, uint32_t v);
extern void func_02087024(uint32_t v);
extern uint32_t func_020871d4(const void *object);
extern void func_02086e94(void);

void func_ov006_0219ca70(uint8_t *a)
{
    uint32_t irq1;
    uint32_t irq2;
    uint32_t cnt;
    uint32_t sz;
    Node *n;
    void (*f)(Node *);

    for (;;) {
        irq1 = func_02088978();
        if (H == 0) {

            do {
                func_0208716c(a, 0);
                func_02087024(0);
            } while (H == 0);
        }
        n = H;
        H = H->next;
        func_0208716c(a, n->size >> 1);
        func_0208898c(irq1);
        if (n->cb != 0) {
            n->cb(n);
        }
        irq2 = func_02088978();
        f = n->fn;
        cnt = func_020871d4(a);
        if (H == 0) {
            sz = 0;
        } else if (cnt < (H->size >> 1)) {
            sz = H->size >> 1;
        } else {
            sz = cnt;
        }
        if (sz != cnt) {
            func_0208716c(a, sz);
        }
        n->next = 0;
        n->size &= ~1u;
        if (f != 0) {
            f(n);
        }
        if (n == (Node *)(a + 0xc4)) {
            break;
        }
        func_0208898c(irq2);
    }
    func_02086e94();
}
