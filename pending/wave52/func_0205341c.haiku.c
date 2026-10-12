#include "ffc/types.h"

extern void func_02091a24(void *p);
extern void func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_020258b4(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b0540[];
extern uint8_t data_020b0524[];

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} Node;

void *func_0205341c(uint32_t *list, uint32_t *out, uint32_t flagA, uint32_t flagB, uint32_t *src)
{
    Node *n;
    Node *tmp;

    if (list[0] == 0xffffffffu) {
        func_02091a24(data_020b0540);
        func_0208f42c();
    }
    n = (Node *)func_0205681c(0x18);
    if (n == 0) {
        func_02091a24(data_020b0524);
        func_0208f42c();
    }
    tmp = n;
    if (n != 0) {
        n->fc = src[0];
        n->f10 = src[1];
        n->f14 = src[2];
    }
    n = tmp;
    tmp = 0;
    n->f4 = 0;
    n->f0 = 0;
    if (n + 1 != 0) {
        n->f8 = (uint32_t)out;
    }
    if (flagA != 0) {
        out[0] = (uint32_t)n;
    } else {
        out[1] = (uint32_t)n;
    }
    list[0] = list[0] + 1;
    func_020258b4(n);
    if (flagB != 0) {
        list[2] = (uint32_t)n;
    }
    if (tmp != 0) {
        func_02056844(tmp);
    }
    return n;
}
