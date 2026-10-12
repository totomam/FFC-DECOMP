#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_ov011_021bd204(void *p);
extern void *func_ov011_021bd288(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021bd208(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov011_021bd20c(void *p);
extern void *func_ov012_021ce3ec(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_ov009_021adff0(void *a, uint8_t b);
extern void func_020375f4(uint32_t mask);
extern void *func_ov010_021caf0c(void *a);
extern Pair data_020aea90;
extern Pair data_020aea98;
extern Pair data_020aeaa0;
extern Pair data_020aeaa8;

void func_0203ac14(uint8_t *self)
{
    if (func_ov011_021bd204(self + 0x98) == 1) {
        void *node = func_ov011_021bd288(self + 0x98);
        func_02056bc0(self + 0x48, node);
        if (func_ov011_021bd208(self + 0x98) == 0) {
            void *obj = func_0205681c(0x358);
            if (obj) {
                obj = func_ov012_021ce3ec(obj, 1, func_ov011_021bd20c(self + 0x98), 1, 0, 0, 0);
            }
            func_02056bc0(self + 0x14, obj);
        } else {
            void *obj = func_0205681c(0x358);
            if (obj) {
                obj = func_ov012_021ce3ec(obj, 2, func_ov011_021bd20c(self + 0x98), 1, 0, 0, 0);
            }
            func_02056bc0(self + 0x14, obj);
        }
        *(Pair *)(self + 0x80) = data_020aea90;
        return;
    }

    if (func_ov011_021bd204(self + 0x98) == 2) {
        void *q;
        func_0203c36c();
        func_0203c394();
        q = func_0205681c(0x150);
        if (q) {
            q = func_ov009_021adff0(q, (uint8_t)*(uint32_t *)(self + 0x8c));
        }
        func_02056bc0(self + 0x14, q);
        *(Pair *)(self + 0x80) = data_020aea98;
        return;
    }

    if (func_ov011_021bd204(self + 0x98) == 3) {
        void *q;
        func_020375f4(0xc40);
        func_0203c36c();
        func_0203c394();
        q = func_0205681c(0x1f4);
        if (q) {
            q = func_ov010_021caf0c(q);
        }
        func_02056bc0(self + 0x14, q);
        *(Pair *)(self + 0x80) = data_020aeaa0;
        return;
    }

    *(Pair *)(self + 0x80) = data_020aeaa8;
}
