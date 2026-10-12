#include "ffc/types.h"

extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0203bf7c(uint32_t idx);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203bf90(uint32_t idx);
extern void *func_0203b6fc(void);

typedef struct { uint32_t f0 : 1; uint32_t rest : 31; } Word124;
typedef struct { uint8_t f0 : 1; uint8_t val : 7; } Byte124;

void func_ov007_021be7e0(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t v;

    *(uint8_t *)(p + 0x11c) = 1;
    if (*(uint32_t *)(p + 0x120) == 1) {
        if (((Word124 *)(p + 0x124))->f0 == 0) {
            v = ((Byte124 *)(p + 0x124))->val;
        } else {
            v = *(uint32_t *)(p + 0x128);
        }
        if (v == 0) {
            uint32_t x = func_02056aec(a);
            uint32_t y = func_0203bf7c(30);
            void *o = p + 0x14;
            func_02056bc0(o, (void *)y);
            func_02056bc0(o, (void *)x);
        } else {
            uint32_t x = func_02056aec(a);
            uint32_t r7 = func_0203bf90(30);
            uint32_t r4 = func_0203bf7c(30);
            void *r6 = func_0203b6fc();
            void *o;
            func_02056bc0(r6, (void *)r4);
            func_02056bc0(r6, (void *)r7);
            o = p + 0x14;
            func_02056bc0(o, r6);
            func_02056bc0(o, (void *)x);
        }
    }
    if (*(uint32_t *)(p + 0x120) != 0) {
        *(uint32_t *)(p + 0x120) = 0;
    }
}
