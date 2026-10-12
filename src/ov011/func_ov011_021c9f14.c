#include "ffc/types.h"

extern void func_ov011_021ca06c(void *self);
extern void func_0203c380(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021d0f08(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t data_ov011_021cbdec[2];

void func_ov011_021c9f14(uint8_t *self)
{
    void *r1;

    if (*(uint32_t *)(self + 0x94) == 1) {
        func_ov011_021ca06c(self);
        return;
    }
    func_0203c380();
    {
        void *p = func_0205681c(0x98);
        r1 = p;
        if (p != 0) {
            r1 = func_ov012_021d0f08(p, 0, 0, 1, (uint32_t *)(self + 0x94), 1, 0);
        }
    }
    func_02056bc0(self + 0x14, r1);
    *(Pair *)(self + 0x80) = *(Pair *)data_ov011_021cbdec;
}
