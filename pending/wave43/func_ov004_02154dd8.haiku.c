#include "ffc/types.h"

extern uint32_t func_0209a76c(int count, int n);
extern void func_02021bb0(void *obj, int id, int val);
extern uint32_t func_0205505c(uint32_t v);
extern void func_ov004_0214f58c(int *out, void *p);
extern void func_ov004_0214f5e0(int *out, void *p);
extern void func_ov004_0214f698(int *out, void *p, int n);
extern uint32_t data_0213e098;

void func_ov004_02154dd8(char *p) {
    int tt[8];
    uint32_t flags;
    int cnt;
    uint32_t r;
    int v;

    flags = ((uint32_t *)*(uint32_t **)(p + 0xe8))[1];
    if (flags & 0x3fff) {
        cnt = 0;
    } else {
        cnt = *(int *)(p + 0x21c) + 1;
    }
    *(int *)(p + 0x21c) = cnt;
    r = func_0209a76c(cnt, 0x3c);
    func_02021bb0(*(void **)(p + 0xf4), 4, (int)r);
    if ((func_0205505c(data_0213e098) & 0xf) == 0) {
        func_ov004_0214f58c(&tt[7], *(void **)(p + 0xe4));
        v = tt[7];
        func_02021bb0(*(void **)(p + 0xf4), 6, v >> 12);
        func_ov004_0214f5e0(&tt[6], *(void **)(p + 0xe4));
        v = tt[6];
        func_02021bb0(*(void **)(p + 0xf4), 5, v >> 12);
    }
    func_ov004_0214f698(&tt[5], *(void **)(p + 0xe4), 2);
    v = tt[5];
    func_02021bb0(*(void **)(p + 0xf4), 0xb, v >> 12);
    func_ov004_0214f698(&tt[4], *(void **)(p + 0xe4), 1);
    v = tt[4];
    func_02021bb0(*(void **)(p + 0xf4), 0xc, v >> 12);
}
