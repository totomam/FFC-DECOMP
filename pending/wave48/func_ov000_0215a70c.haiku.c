#include "ffc/types.h"

typedef struct Ctx {
    uint32_t w[32];
} Ctx;

extern Ctx *data_ov000_02170060;
extern uint32_t data_ov000_0216af94[];

extern uint32_t func_ov000_02164c60(void);
extern uint64_t func_ov000_02164c58(void);
extern void func_02086b04(void *dst, uint32_t n, const void *src, uint32_t a, uint32_t lo, uint32_t hi);
extern void func_ov001_02175b28(uint32_t a, uint32_t b, void *c);
extern uint32_t func_ov000_0215a6b8(void);
extern uint64_t func_ov000_02156004(void);
extern void func_ov000_02155058(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_ov000_02164c68(void);
extern void func_ov000_0215e0d8(uint32_t a);
extern uint32_t func_ov000_0215b62c(void);
extern void func_ov000_02163b64(uint32_t a);
extern void func_ov000_02163b78(void);
extern void func_ov000_0215a64c(uint32_t a, uint32_t b);
extern void func_ov001_02175a94(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern void func_ov000_0215a9c4(void);

void func_ov000_0215a70c(uint32_t p0, uint32_t *p1)
{
    uint8_t b1[0x24];
    uint8_t b2[0x30];
    uint32_t r6;
    uint64_t t;

    data_ov000_02170060->w[12] = 0;
    r6 = func_ov000_02164c60();
    t = func_ov000_02164c58();
    func_02086b04(b1 + 3, 0x1f, data_ov000_0216af94, r6, (uint32_t)t, (uint32_t)(t >> 32));
    r6 = 0x704;
    func_ov001_02175b28(p0, r6, b1 + 3);
    if (func_ov000_0215a6b8()) return;
    t = func_ov000_02156004();
    func_ov000_02155058((uint32_t)t, (uint32_t)(t >> 32), 0x2b, b2);
    func_ov001_02175b28(p0, r6 + 0x13, b2);
    if (func_ov000_0215a6b8()) return;
    func_ov001_02175b28(p0, r6 + 4, (void *)func_ov000_02164c68());
    if (func_ov000_0215a6b8()) return;
    if (p1[0] == 0) {
        if (data_ov000_02170060->w[1] == 2) {
            if (((Ctx *)data_ov000_02170060->w[7])->w[7] == p1[1]) {
                data_ov000_02170060->w[1] = 5;
                func_ov000_0215e0d8(1);
                if (func_ov000_0215a6b8()) return;
                ((void (*)(uint32_t, uint32_t, uint32_t))data_ov000_02170060->w[5])(0, p1[1], data_ov000_02170060->w[6]);
                if (func_ov000_0215b62c()) return;
                func_ov000_02163b64(p1[1]);
                func_ov000_02163b78();
            } else {
                func_ov000_0215a64c(6, 0xffff15a0);
            }
        } else if (data_ov000_02170060->w[1] == 3) {
            func_ov001_02175a94(p0, p1[1], 0, 0, func_ov000_0215a9c4, 0);
            func_ov000_0215a6b8();
        }
    } else {
        func_ov000_0215a6b8();
    }
}
