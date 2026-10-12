#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern void func_ov000_0215b70c(void);
extern void func_ov000_0215b7a4(int x);
extern uint32_t func_ov000_0215999c(uint32_t x);
extern int func_ov001_02175ea8(void *p, uint32_t x);
extern void func_ov001_02175e40(void *p, uint32_t x, uint32_t *out);
extern void func_ov001_02175d6c(void *p, uint32_t x, uint32_t *out);
extern int func_ov000_02163aa4(void *p);
extern void func_ov000_021592ac(void *src, void *dst, void *buf, int n);
extern int func_02093748(void *s, int c, int n);
extern void func_ov000_0215bf3c(int x);
extern int func_ov000_0215c8c4(uint32_t p, uint32_t a, void *cb, uint32_t b,
                               uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9);
extern void func_ov000_02159014(uint32_t a, int b);
extern void func_ov000_0215e0d8(uint32_t a);
extern void func_ov000_0215b9ac(void);
extern uint32_t data_ov000_02170064[];
extern uint8_t data_ov000_0216afa0[];
extern uint8_t data_ov000_0216afa4[];

typedef void (*cb_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

#define GOBJ() ((uint8_t *)data_ov000_02170064[1])
#define F32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

int func_ov000_0215b200(uint32_t p0, uint32_t r1, uint32_t r2, uint32_t r3,
                        uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9)
{
    uint32_t idx = 0xffffffff;
    uint32_t info[6];
    uint8_t tag[4];
    uint8_t buf[0x1fc];
    uint32_t status;
    uint8_t c1;
    uint8_t c2;

    if (func_ov000_02159000() != 0 || F32(GOBJ(), 0x24) != 3) return 0;

    func_ov000_0215b70c();
    F32(GOBJ(), 0x80) = r2;
    F32(GOBJ(), 0x84) = r3;
    func_ov000_0215b7a4(4);

    status = func_ov000_0215999c(r1);
    if (status == 0 || func_ov001_02175ea8(GOBJ() + 0x1c, status) == 0) {
        status = 0xb;
        goto L0104;
    }
    func_ov001_02175e40(GOBJ() + 0x1c, status, &idx);
    func_ov001_02175d6c(GOBJ() + 0x1c, idx, info);
    if (info[1] != 6) {
        status = 0xb;
        goto L0104;
    }
    tag[0] = 0x30;
    if (func_ov000_02163aa4(info) != 0) {
        status = 0x15;
        goto L0104;
    }
    func_ov000_021592ac(data_ov000_0216afa0, tag, buf, 0x2f);
    c1 = (uint8_t)func_02093748(tag, 0, 10);
    func_ov000_021592ac(data_ov000_0216afa4, tag, buf, 0x2f);
    c2 = (uint8_t)func_02093748(tag, 0, 10);
    if (c2 == c1) {
        status = 0xc;
        goto L0104;
    }
    func_ov000_0215bf3c(3);
    func_ov000_0215c8c4(p0, status, (void *)func_ov000_0215b9ac, 0, a5, a6, a7, a8, a9);
    return 1;

L0104:
    func_ov000_02159014(status, 0);
    {
        cb_t fn = (cb_t)F32(GOBJ(), 0x80);
        fn(status, 0, 1, 0, 0, F32(GOBJ(), 0x84));
    }
    if (GOBJ() != 0 && F32(GOBJ(), 0x24) == 4) {
        func_ov000_0215b7a4(3);
        func_ov000_0215e0d8(1);
    }
    return 1;
}
