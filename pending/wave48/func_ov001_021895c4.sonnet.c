#include "ffc/types.h"

extern void func_ov001_02188d14(int a, int b);
extern int func_ov001_021899cc(void);
extern int func_ov001_021889c4(void);
extern int func_ov001_021890b0(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern int func_ov001_021889d4(void *mem, uint8_t *self, int n);
extern int func_0204da5c(void *b, void *c, void *mem);
extern int func_ov001_021893c0(void *a, void *b);
extern void func_ov001_02189098(void *a, void *b);
extern void *data_ov001_02195798[];
extern uint8_t data_ov001_0218f113[];
extern uint8_t data_ov001_02194508[];

typedef struct {
    uint32_t type;
    uint32_t w1;
    uint32_t w2;
    void *buf;
    uint32_t count;
} Ctx;

int func_ov001_021895c4(uint8_t *self, uint32_t p1, uint32_t idx, uint32_t p3) {
    int n;
    int r6;
    int res;
    uint8_t *mem;
    void *b;
    Ctx *a;

    if (idx < *(uint32_t *)(self + 0xac)) {
        func_ov001_02188d14(5, 0);
        return 0;
    }
    n = func_ov001_021899cc();
    if (n > 0x20) {
        func_ov001_02188d14(5, 0);
        return 0;
    }
    if (n > 0) {
        r6 = func_ov001_021889c4();
    } else {
        r6 = 0;
    }
    mem = ((uint8_t * (*)(uint32_t, uint32_t))data_ov001_02195798[1])(r6 + 1, 4);
    if (mem == 0) {
        func_ov001_02188d14(1, 0);
        return 0;
    }
    if (func_ov001_021890b0(&a, &b, data_ov001_0218f113, p1, *(uint32_t *)(self + 0xac), p3) == 0) {
        ((void (*)(void *))data_ov001_02195798[5])(mem);
        return 0;
    }
    if (r6 > 0) {
        res = func_ov001_021889d4(mem, self, n);
        r6 = 0;
        mem[res] = 0;
        res = func_0204da5c(b, data_ov001_02194508, mem);
        if (res == -1) {
            goto e2;
        }
    }
    a->type = 3;
    a->buf = mem;
    a->count = *(uint32_t *)(self + 0xac);
    if (func_ov001_021893c0(a, b) == 0) {
        ((void (*)(void *))data_ov001_02195798[5])(mem);
        return 0;
    }
    return 1;
e2:
    func_ov001_02189098(a, b);
    ((void (*)(void *))data_ov001_02195798[5])(mem);
    func_ov001_02188d14(1, 0);
    return 0;
}
