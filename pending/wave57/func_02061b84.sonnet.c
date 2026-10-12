#include "ffc/types.h"

extern void *func_020617f4(void *object);
extern void func_020095b8(void *a, void *b);
extern void func_02061c70(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t *func_02052d90(const void *mar, uint32_t index);
extern void func_02088f30(uint32_t kind);
extern void *func_0205681c(uint32_t size);
extern void *func_02061640(void *obj, void *item);
extern void *func_02061720(void *obj, void *item);
extern void func_020618f8(void *obj, void *p);
extern void func_02061378(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern char data_020b1508[];

#define MAR(self) func_02052d90(*(void **)((self) + 0x38), *(uint32_t *)((self) + 0x3c))
#define ITEM(d, i) ((uint8_t *)(d) + *(uint32_t *)((uint8_t *)(d) + (d)[2] + (i) * 4))

void *func_02061b84(uint8_t *self, void *a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint32_t loc[3];
    uint32_t i;

    func_020617f4(self);
    *(char **)self = data_020b1508;
    func_020095b8(loc, a1);
    func_02061c70(self + 0x34, loc);
    func_020059cc(loc);

    for (i = 0; i < MAR(self)[1]; i++) {
        uint32_t *d = MAR(self);
        if (*(uint32_t *)(ITEM(d, i) + 0x14) != 0) {
            uint32_t kind;
            d = MAR(self);
            kind = *(uint32_t *)ITEM(d, i);
            switch (kind) {
            default:
                func_02088f30(kind);
                break;
            case 0: {
                void *o = func_0205681c(0x28);
                if (o != 0) {
                    d = MAR(self);
                    o = func_02061640(o, ITEM(d, i));
                }
                func_020618f8(self, o);
                break;
            }
            case 1: {
                void *p = func_0205681c(0x28);
                if (p != 0) {
                    d = MAR(self);
                    p = func_02061720(p, ITEM(d, i));
                }
                func_020618f8(self, p);
                break;
            }
            }
        }
    }

    func_02061378(self, a2, a3, a4);
    return self;
}
