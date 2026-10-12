#include "ffc/types.h"

extern void func_ov004_02154dd8(uint8_t *a);
extern uint32_t func_ov004_0215352c(uint8_t *a);
extern uint32_t func_ov004_02151b44(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_ov004_02154f6c(uint8_t *a, uint32_t i);
extern uint32_t func_ov004_02153458(uint8_t *a);
extern uint32_t func_ov004_02154fd8(uint8_t *a, uint32_t i);
extern uint32_t func_ov004_02154e9c(uint8_t *a, uint32_t i);
extern void func_ov004_0214f628(uint32_t *out, void *p);
extern void func_02021338(uint32_t x);
extern void func_ov004_0215542c(uint8_t *a);
extern uint32_t func_ov004_021489d8(void *p);
extern void func_ov004_02148fb0(uint32_t *out, uint32_t v);
extern void func_ov004_02148fb8(uint32_t *out, uint32_t v);
extern void *func_ov004_021489d0(void *p);
extern uint32_t func_ov004_021495a8(void *p);
extern void func_ov004_0215540c(uint8_t *a);
extern uint8_t *func_ov004_021530e0(uint8_t *a);
extern uint32_t func_ov004_02153544(uint8_t *a);
extern uint32_t func_0203c250(void);
extern uint32_t func_02060eb4(void);
extern void func_ov004_0215586c(uint8_t *a);
extern uint32_t func_0206cb98(void);
extern void *func_02055054(uint32_t x);
extern void func_0209a978(uint32_t size, void *p);
extern void func_020212a4(void);
extern void *func_02056aec(uint8_t *a);
extern uint32_t func_0203c058(uint32_t x);
extern uint32_t func_0203c044(uint32_t x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov004_02155804(uint8_t *a);
extern uint32_t data_0213e098;

void func_ov004_02154b90(uint8_t *a)
{
    uint32_t i;
    uint32_t r7 = 0;
    uint32_t r6;
    uint32_t r4;
    uint32_t out34;
    uint32_t out38;
    uint32_t out40;
    uint8_t *obj;
    uint32_t flag;
    uint32_t n;

    func_ov004_02154dd8(a);

    if (func_ov004_0215352c(a) != 0) {
        i = 0;
        do {
            if (func_ov004_02151b44(*(void **)(a + 0xe4)) == 0) {
                obj = *(uint8_t **)(a + 0x1f0 + i * 4);
                flag = obj[0x12];
                if (flag != 0) {
                    func_0208763c(obj + 0x1c);
                }
                n = (*(uint32_t *)(obj + 0x14) == 0);
                if (flag != 0) {
                    func_02087678(obj + 0x1c);
                }
                if (n != 0) {
                    if (a[0xcc] != 0) {
                        r6 = func_ov004_02154f6c(a, i);
                    } else {
                        r6 = 0;
                        if (func_ov004_02153458(a) != 0) {
                            r6 = func_ov004_02154fd8(a, i);
                        }
                    }
                    if (r6 == 0) {
                        r7 = (func_ov004_02154e9c(a, i) | r7) != 0;
                    }
                } else {
                    r7 = 1;
                }
            } else {
                r7 = 1;
            }
            i++;
        } while (i < func_ov004_0215352c(a));
    }

    if (r7 != 0) {
        return;
    }

    r4 = 0;
    if (a[0xca] == 0) {
        func_ov004_0214f628(&out40, *(void **)(a + 0xe4));
        if (out40 == (0x19u << 14)) {
            r4 = 1;
        }
    }
    if (r4 != 0) {
        func_02021338(0x78);
        func_ov004_0215542c(a);
        return;
    }

    r4 = 0;
    if (a[0xca] != 0) {
        r6 = *(uint32_t *)(a + 0x228) << 12;
        func_ov004_02148fb0(&out38, func_ov004_021489d8(*(void **)(a + 0xf8)));
        if ((int32_t)out38 < (int32_t)r6) {
            r4 = 1;
        }
    }
    if (r4 != 0) {
        func_02021338(0x78);
        func_ov004_0215542c(a);
        return;
    }

    r6 = (0x64 - *(uint32_t *)(a + 0x228)) << 12;
    r4 = 1;
    func_ov004_02148fb8(&out34, func_ov004_021489d8(*(void **)(a + 0xf8)));
    if ((int32_t)out34 <= (int32_t)r6) {
        if (func_ov004_021495a8(func_ov004_021489d0(*(void **)(a + 0xf8))) == 0) {
            r4 = 0;
        }
    }
    if (r4 != 0) {
        func_02021338(0x78);
        func_ov004_0215540c(a);
        return;
    }

    {
        uint8_t *p = func_ov004_021530e0(a);
        if ((*(uint32_t *)(p + 4) & 8) != 0 && *(uint32_t *)(a + 0xb0) != 2) {
            if (func_ov004_02153544(a) == 0) {
                func_0203c250();
                if (func_02060eb4() == 0) {
                    func_ov004_0215586c(a);
                    return;
                }
            }
        }
    }

    if (*(uint32_t *)(a + 0x28c) != 0 && func_0206cb98() != 0) {
        func_0203c250();
        if (func_02060eb4() == 0) {
            uint32_t r1 = *(uint32_t *)func_02055054(data_0213e098);
            uint32_t sp0c;
            void *r6p;
            uint32_t r4b;
            uint32_t r7b;
            (void)r1;
            func_0209a978(0x3c, func_02055054(data_0213e098));
            func_020212a4();
            r7b = (uint32_t)func_02056aec(a);
            sp0c = func_0203c058(0x3c);
            r4b = func_0203c044(0x3c);
            r6p = func_0203b6fc();
            func_02056bc0(r6p, (void *)r4b);
            func_02056bc0((void *)sp0c, r6p);
            func_02056bc0(a + 0x14, r6p);
            func_02056bc0(a + 0x14, (void *)r7b);
            return;
        }
    }

    if (*(uint32_t *)(a + 0x244) != 0) {
        func_ov004_02155804(a);
    }
}
