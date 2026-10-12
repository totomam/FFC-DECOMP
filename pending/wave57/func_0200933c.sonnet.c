#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { void *ptr; volatile uint8_t active; } Guard;

extern void func_0208763c(void *p);
extern uint32_t func_020817c8(uint32_t first, uint32_t second);
extern uint32_t func_02062a78(void *obj, Pair z, Pair p1, int32_t e, int32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(uint32_t x);
extern uint32_t func_02081210(uint32_t object, uint32_t n);
extern void func_02087678(void *p);
extern uint32_t data_020a7c00;
extern uint32_t data_0209dea0;
extern uint32_t data_020aad68[2];

void func_0200933c(uint8_t *p) {
    Guard gd;
    volatile uint32_t pad[10];
    Pair p2, b3, z2, b1, p1, b2, z;
    gd.ptr = p + 0x98;
    gd.active = 1;
    if (gd.active) {
        func_0208763c(gd.ptr);
    }
    if (*(void **)(p + 0x88) != 0) {
        int32_t r4 = 0;
        if (*(int32_t *)(p + 0xc4) > 0x100) {
            uint32_t r6 = func_020817c8((uint32_t)*(int32_t *)(p + 0xc4) << 12, data_020a7c00);
            ((void (*)(Pair *, void *))((void **)*(void **)*(void **)(p + 0x88))[4])(&b1, *(void **)(p + 0x88));
            p1.b = b1.b;
            p1.a = (uint32_t)(-*(int32_t *)(p + 0xc4));
            ((void (*)(Pair *, void *))((void **)*(void **)*(void **)(p + 0x88))[4])(&b2, *(void **)(p + 0x88));
            z.a = 0;
            z.b = b2.b;
            uint32_t res = func_02062a78(*(void **)(p + 0x88), z, p1, (int32_t)r6 >> 12, 0);
            func_02056bc0(p + 0x14, (void *)res);
            r4 = 1;
        }
        if (*(int32_t *)(p + 0xbc) > 1) {
            if (r4 == 0) {
                uint32_t x = func_0203b708(data_0209dea0);
                func_02056bc0(p + 0x14, (void *)x);
            }
            uint32_t r6 = 0x2000;
            uint32_t t = func_020817c8(r6 << 3, data_020a7c00);
            r6 = func_02081210(t, r6);
            r6 = (uint32_t)((int32_t)r6 >> 12);
            ((void (*)(Pair *, void *))((void **)*(void **)*(void **)(p + 0x88))[4])(&b3, *(void **)(p + 0x88));
            z2.a = 0;
            z2.b = b3.b;
            p2.a = (r4 != 0) ? 0x7ffffff8u : 0u;
            p2.b = 0xc0;
            uint32_t res = func_02062a78(*(void **)(p + 0x88), z2, p2, (int32_t)r6, 0);
            func_02056bc0(p + 0x14, (void *)res);
        }
        ((uint32_t *)(p + 0x80))[0] = data_020aad68[0];
        ((uint32_t *)(p + 0x84))[0] = data_020aad68[1];
    }
    if (gd.active) {
        func_02087678(gd.ptr);
    }
}
