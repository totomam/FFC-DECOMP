#include "ffc/types.h"

extern void func_02091a24(uint8_t *msg);
extern uint32_t func_0208f42c(void);
extern uint32_t *func_0205681c(uint32_t size);
extern void func_020258b4(uint32_t *p);
extern void func_02056844(uint32_t *p);
extern uint8_t data_020b20ec[];
extern uint8_t data_020b20ac[];

typedef struct {
    uint32_t w[9];
} Body;

uint32_t *func_02070850(uint32_t *ctx, uint32_t *out, uint32_t a, uint32_t b, Body *body)
{
    uint32_t *node;
    uint32_t * volatile res;
    uint32_t * volatile lst;
    volatile uint32_t pad[3]; pad[2]=0;



    if (ctx[0] == 0xffffffffu) {
        func_02091a24(data_020b20ec);
        func_0208f42c();
    }

    node = func_0205681c(0x30);
    if (node == 0) {
        func_02091a24(data_020b20ac);
        func_0208f42c();
    }

    lst = ctx + 1;
    res = node;
    if (node + 3) {
        *(Body *)(node + 3) = *body;
    }
    node[1] = 0;
    res = 0;
    node[0] = 0;
    if (node + 2) {
        node[2] = (uint32_t)out;
    }

    if (a) {
        out[0] = (uint32_t)node;
    } else {
        out[1] = (uint32_t)node;
    }

    ctx[0] = ctx[0] + 1; (void)ctx[1];


    func_020258b4(node);

    if (b) {
        ctx[3] = (uint32_t)node;
    }

    if (res) {
        func_02056844(res);
    }
    return node;
}
