#include "ffc/types.h"

extern int32_t data_0213ec3c;
extern int32_t data_0213ebfc;

extern void func_02089c5c(int32_t a, int32_t b, uint32_t c, int32_t d);
extern uint32_t func_0208a17c(void);
extern void func_0208a030(int32_t a);
extern void func_0208a138(uint32_t a);
extern int32_t func_02087508(void *a, int32_t b, int32_t c);
extern void func_020797d8(void);
extern void func_020797bc(void);
extern void func_02079814(int32_t a);
extern void func_02089dbc(int32_t a, int32_t b, int32_t c, int32_t d);

void func_0207a468(void)
{
    int32_t *g = &data_0213ec3c;
    int32_t r5;
    uint32_t mask;
    uint32_t t;

    if (g[0] == 0) {
        return;
    }
    r5 = 1;
    if (g[11] < 0) {
        r5 = 0;
    }
    if (r5) {
        mask = 1u << g[11];
    } else {
        mask = 0;
    }
    func_02089c5c(g[8 + 1], g[8 + 2], mask, 0);
    if (r5) {
        t = func_0208a17c();
        func_0208a030(1);
        func_0208a138(t);
        while (func_02087508(&data_0213ebfc, 0, 0) != 0) {
        }
    }
    if (g[10] != 0) {
        func_020797d8();
    }
    if (g[8] != 0) {
        func_020797bc();
    }
    if (r5) {
        func_02079814(g[11]);
    }
    if (g[1] == 1) {
        func_02089dbc(0, 0, 0, 0);
    }
    g[0] = 0;
}
