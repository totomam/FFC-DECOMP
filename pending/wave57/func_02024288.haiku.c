#include "ffc/types.h"

extern void func_02080514(void *p);
extern void func_0208059c(void *dst, void *src, uint32_t a, uint32_t b, uint32_t c);
extern void func_02080648(void *dst, void *src, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02023074(uint32_t x);
extern uint32_t func_02023078(uint32_t x);
extern void func_02080570(void *a, void *b);
extern void func_0208067c(void *a, uint32_t b, void *c);
extern void func_02080304(void *a, void *b, void *c);
extern int32_t func_020816d4(uint32_t a, uint32_t b);
extern void func_020800a8(void *p);
extern int16_t data_020a1bd0[];

#define OFF(p, o, T) (*(T *)((uint8_t *)(p) + (o)))

void func_02024288(uint8_t *s)
{
    uint8_t *self = *(uint8_t **)(s + 0xe8);
    uint32_t flag = OFF(self, 0x18, uint32_t);
    uint8_t bA[0x30];
    uint8_t bB[0x30];
    int32_t t[9];

    if ((flag & 3) == 1) {
        func_02080514(bA);
        func_0208059c(bA, bA, OFF(s, 0xc4, uint32_t), OFF(s, 0xc8, uint32_t), OFF(s, 0xcc, uint32_t));
        func_02080648(bA, bA, OFF(s, 0x54, uint32_t), OFF(s, 0x58, uint32_t), OFF(s, 0x5c, uint32_t));
        {
            uint32_t x = OFF(s, 0x38, uint32_t);
            func_02080648(bA, bA, x, x, x);
        }
        {
            uint32_t r6 = func_02023074(OFF(s, 4, uint32_t));
            void *r4 = (void *)func_02023078(OFF(s, 4, uint32_t));
            void *p = OFF(s, 0x2d4, void *);
            if (p != 0) {
                r4 = bB;
                r6 = (uint32_t)p;
                func_02080570(p, bB);
            }
            func_0208067c(bA, r6, s + 0xa0);
            func_02080304(r4, s + 0xa0, s + 0xa0);
        }
        return;
    }

    uint32_t two = 2;
    if ((flag & two) == two) {
        uint32_t r4 = func_02023078(OFF(s, 4, uint32_t));
        uint32_t r1v = func_02023078(OFF(s, 4, uint32_t));
        uint32_t q = (uint32_t)func_020816d4(OFF(r4, 0x20, uint32_t), OFF(r1v, 8, uint32_t));
        q = (q - (two << 13)) & 0xffff;
        int idx;
        func_020800a8(t);
        idx = ((int)q >> 4) << 1;
        t[0] = data_020a1bd0[idx + 1];
        t[8] = t[0];
        t[6] = data_020a1bd0[idx];
        t[2] = -t[6];
        {
            uint32_t r1 = func_02023074(OFF(s, 4, uint32_t));
            void *p = OFF(s, 0x2d4, void *);
            if (p != 0) {
                r1 = (uint32_t)p;
            }
            func_0208067c(s + 0xa0, r1, s + 0xa0);
            func_02080304(t, s + 0xa0, s + 0xa0);
        }
        return;
    }

    {
        uint32_t r1 = func_02023074(OFF(s, 4, uint32_t));
        void *p = OFF(s, 0x2d4, void *);
        if (p != 0) {
            r1 = (uint32_t)p;
        }
        func_0208067c(s + 0xa0, r1, s + 0xa0);
    }
}
