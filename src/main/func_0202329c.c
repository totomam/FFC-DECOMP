#include "ffc/types.h"

extern void func_02022f48(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020233b8(void *p, uint32_t a, uint32_t b);
extern uint32_t func_0203c318(void);
extern void func_020591f4(uint32_t a, uint32_t b);
extern void *func_020595e8(uint32_t a, uint32_t b, uint32_t c);
extern void func_0205cee4(void *o, uint32_t b);
extern void func_02084a0c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02059bf8(void *o);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0204e7ac(void);
extern uint32_t func_0204f550(const void *o);
extern void *func_0203c2d0(void);
extern void func_02060548(void *o, uint32_t v);
extern void func_02060564(void *o, uint32_t a, uint32_t b);
extern void func_02060574(void *o, uint32_t a);
extern void func_02060584(void *o, uint32_t a);
extern void *data_0213df18;

void func_0202329c(uint8_t *p) {
    if (p[0x254]) {
        p[0x254] = 0;
        p[0x255] = 1;
        func_02022f48(p, 0, 0, 0x7fff, 0x1e, 0);
        func_020233b8(p, 0, 3);
        while (*(volatile uint32_t *)0x4000600 & 0x08000000) {
        }
        {
            uint32_t hi = *(uint32_t *)(p + 0x18);
            *(volatile uint32_t *)0x4000540 = *(uint32_t *)(p + 0x14) | (hi << 1);
        }
        func_020591f4(func_0203c318(), 3);
        *(void **)(p + 0x258) = func_020595e8(func_0203c318(), 1, 1);
        {
            uint32_t *o = *(uint32_t **)(p + 0x8c);
            *(uint32_t *)((uint8_t *)o + 0x10) =
                (*(uint32_t *)((uint8_t *)o + 0x10) & ~3u) | (*(uint32_t *)(p + 0x24c) & 3u);
        }
        {
            uint32_t *o = *(uint32_t **)(p + 0x258);
            *(uint32_t *)((uint8_t *)o + 0x10) =
                (*(uint32_t *)((uint8_t *)o + 0x10) & ~3u) | (*(uint32_t *)(p + 0x24c) & 3u);
        }
        func_0205cee4(*(void **)(p + 0x258), 0);
        {
            uint32_t *o = *(uint32_t **)(p + 0x258);
            func_02084a0c(0, o[1] + (3u << 15), 1u << 15);
        }
        func_02059bf8(*(void **)(p + 0x258));
        func_0204f7ec(data_0213df18);
        func_0204e7ac();
        func_0204f550(data_0213df18);
        {
            void *o = func_0203c2d0();
            func_02060548(o, 1);
            func_02060564(o, 0x10, 0);
            func_02060574(o, 7);
            func_02060584(o, 8);
        }
    }
    {
        uint32_t r2 = 1;
        if (p[0x255]) {
            r2 |= 4;
        }
        func_020233b8(p, 1, r2);
    }
}
