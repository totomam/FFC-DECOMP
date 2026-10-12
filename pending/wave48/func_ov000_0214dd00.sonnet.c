#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern int func_ov000_0214ecc8(void *p);
extern void func_02084e04(void *p, uint32_t a, int32_t b);
extern void func_0208898c(uint32_t x);
extern void *data_ov000_02169a34;

static inline int chk(uint8_t *a)
{
    int r = 0;
    if (a != 0) {
        if (*(int16_t *)(a + 0xac) & 1) r = 1;
    }
    return r;
}

typedef struct Node {
    struct Node *next;
    uint32_t pad;
    uint16_t len;
    uint16_t val;
    uint32_t val2;
} Node;

int func_ov000_0214dd00(uint8_t *a, uint32_t p1, int32_t p2, uint16_t *p3, uint32_t *p4, int32_t flag)
{
    volatile int32_t ret;
    uint8_t *obj = *(uint8_t **)(a + 0xa0);
    uint32_t irq = func_02088978();
    Node *node = *(Node **)(obj + 0x104);

    if (node == 0) {
        for (;;) {
            if (!(flag & 1)) {
                ret = -6;
                goto done;
            }
            func_02087024(obj + 0x10c);
            if (func_ov000_0214ecc8(a) != 0 || chk(a) == 0) {
                ret = -56;
                goto done;
            }
            node = *(Node **)(obj + 0x104);
            if (node != 0) {
                break;
            }
        }
    }

    if (p2 > node->len) {
        p2 = node->len;
    }
    func_02084e04((uint8_t *)node + 0xc, p1, p2);
    if (p3 != 0) {
        *p3 = node->val;
    }
    if (p4 != 0) {
        *p4 = node->val2;
    }
    ret = node->len;
    if (*(int8_t *)(obj + 0xfe) == 0) {
        *(Node **)(obj + 0x104) = node->next;
        if (node->next == 0) {
            *(uint32_t *)(obj + 0x100) = 0;
        }
        {
            void **vt = *(void ***)data_ov000_02169a34;
            (*(void (**)(Node *))((uint8_t *)vt + 0x1c))(node);
        }
        *(uint16_t *)(obj + 0x108) = (uint16_t)(*(uint16_t *)(obj + 0x108) - (uint16_t)ret);
    }

done:
    func_0208898c(irq);
    return ret;
}
