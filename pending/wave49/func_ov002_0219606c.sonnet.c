#include "ffc/types.h"

extern void func_020213f0(uint32_t x);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov002_02198858(uint32_t a, void *b);
extern uint32_t func_ov002_021980b0(uint32_t a, void *b, uint32_t c);
extern void func_ov002_021c6260(uint32_t a, uint32_t b);
extern void func_ov002_021c6270(uint32_t a, uint32_t b);
extern uint32_t func_ov002_0219804c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_02196b0c(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov002_02197b54(uint32_t a, void *b, uint32_t c);
extern void func_ov002_0219686c(uint32_t a, void *b);
extern void func_ov002_0219869c(uint32_t a, void *b);
extern uint32_t func_0203bfcc(uint32_t a);
extern uint32_t func_0203bfe0(uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b744(void);
extern uint32_t data_ov002_021d47d0[2];

#define FLD(off) (*(uint32_t *)(p + (off)))

void func_ov002_0219606c(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t r0;
    uint32_t i;

    func_020213f0(FLD(0x364));
    r0 = func_0205681c(0x130);
    if (r0 != 0) {
        r0 = func_ov002_02198858(r0, p + 0x80);
    }
    FLD(0x3d4) = r0;
    r0 = func_0205681c(0x454);
    if (r0 != 0) {
        r0 = func_ov002_021980b0(r0, p + 0x80, FLD(0x3dc));
    }
    FLD(0x3d0) = r0;
    func_ov002_021c6260(FLD(0x3dc), FLD(0x3d4));
    func_ov002_021c6270(FLD(0x3dc), FLD(0x3d0));

    i = 0;
    do {
        uint8_t *q = p + i * 4;
        switch (*(uint32_t *)(q + 0x84)) {
        case 2:
            r0 = func_0205681c(0xc8);
            if (r0 != 0) {
                r0 = func_ov002_0219804c(r0, i);
            }
            *(uint32_t *)(q + 0x3c8) = r0;
            break;
        case 1:
            r0 = func_0205681c(0x11c);
            if (r0 != 0) {
                r0 = func_ov002_02196b0c(r0, p + 0x80, i);
            }
            *(uint32_t *)(q + 0x3c8) = r0;
            break;
        case 3:
            r0 = func_0205681c(0x118);
            if (r0 != 0) {
                r0 = func_ov002_02197b54(r0, p + 0x80, i);
            }
            *(uint32_t *)(q + 0x3c8) = r0;
            break;
        default:
            break;
        }
        i++;
    } while (i < 2);

    i = 0;
    do {
        uint8_t *q = p + i * 4;
        func_ov002_0219686c(*(uint32_t *)(q + 0x3c8), p);
        i++;
    } while (i < 2);

    func_ov002_0219869c(FLD(0x3d0), p);

    r0 = func_0203bfcc(1);
    func_02056bc0(p + 0x48, (void *)r0);
    r0 = func_0203bfe0(1);
    func_02056bc0(p + 0x48, (void *)r0);

    i = 0;
    do {
        uint8_t *q = p + i * 4;
        func_02056bc0(p + 0x48, (void *)*(uint32_t *)(q + 0x3c8));
        i++;
    } while (i < 2);

    func_02056bc0(p + 0x48, (void *)FLD(0x3d0));
    func_02056bc0(p + 0x48, (void *)FLD(0x3d4));

    r0 = func_0203b744();
    func_02056bc0(p + 0x14, (void *)r0);

    {
        uint32_t off = 0x3d0;
        uint32_t *d = data_ov002_021d47d0;
        uint32_t a = d[0];
        uint32_t b = d[1];
        *(uint32_t *)(p + off - 0x10) = a;
        off -= 0xc;
        *(uint32_t *)(p + off) = b;
    }
}
