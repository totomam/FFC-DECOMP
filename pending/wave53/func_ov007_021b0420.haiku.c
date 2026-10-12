#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b2f38(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c5b08[2];
extern uint32_t data_ov007_021c5b10[2];
extern uint32_t data_ov007_021c5b18[2];
extern uint32_t data_ov007_021c5b20[2];
extern uint32_t data_ov007_021c5b28[2];
extern void *data_020b8e44;

typedef struct { uint32_t a; uint32_t b; } Pair;


void func_ov007_021b0420(void *p)
{
    uint8_t *s = (uint8_t *)p;

    switch (*(uint32_t *)(s + 0xc0)) {
    case 0:
        {
            Pair v = *(Pair *)&data_ov007_021c5b08[0];
            *(Pair *)(s + 0xb0) = v;
        }
        return;
    case 1:
        {
            Pair v = *(Pair *)&data_ov007_021c5b10[0];
            *(Pair *)(s + 0xb0) = v;
        }
        return;
    case 2:
        {
            Pair v = *(Pair *)&data_ov007_021c5b18[0];
            *(Pair *)(s + 0xb0) = v;
        }
        return;
    case 3:
        {
            Pair v = *(Pair *)&data_ov007_021c5b20[0];
            *(Pair *)(s + 0xb0) = v;
        }
        return;
    case 4: {
        void *obj = func_0205681c(0x88);
        void *node = obj;
        if (obj != 0) {
            node = func_ov007_021b2f38(obj, p, (void *)*(uint32_t *)data_020b8e44);
        }
        func_02056bc0(s + 0x14, node);
        {
            Pair v = *(Pair *)&data_ov007_021c5b28[0];
            *(Pair *)(s + 0xb0) = v;
        }
        return;
    }
    default:
        return;
    }
}
