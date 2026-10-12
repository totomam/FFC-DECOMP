#include "ffc/types.h"

extern int func_0201c9ac(uint32_t a, int b);
extern void func_ov003_0215553c(void *p, void *q, int r);
extern int func_0205b3e8(uint32_t a);
extern void *func_ov003_02146494(void *p);
extern int func_02081658(void *a, void *b);
extern void func_ov003_021552ac(void *p, void *q);
extern uint32_t data_020b93b8;

typedef struct {
    int32_t v[3];
} Vec;

void func_ov003_0215b3fc(uint8_t *self, int param)
{
    Vec a, b;
    void *r7;
    void *obj;
    int d;

    if (*(uint16_t *)(self + 0xac) == 1) {
        if (func_0201c9ac(data_020b93b8, 5) != 0) {
            return;
        }
    }

    obj = *(void **)(self + 0x114);
    if (obj != 0) {
        r7 = *(void **)((uint8_t *)obj + 0x34);
    } else {
        obj = *(void **)(self + 0x110);
        if (obj == 0) {
            return;
        }
        r7 = *(void **)((uint8_t *)obj + 0x34);
    }

    if (param == 0) {
        if (self[0x346] == 0) {
            return;
        }
    }

    if (param == 0 && self[0x346] != 0) {
        if (*(void **)(self + 0x364) != 0) {
            func_ov003_0215553c(*(void **)(self + 0x364), r7, 1);
        }
        self[0x346] = 0;
        return;
    }

    self[0x346] = 1;
    if (func_0205b3e8(*(uint32_t *)(*(uint8_t **)(self + 0x10c) + 0x8c)) == 0) {
        return;
    }

    obj = func_ov003_02146494(*(void **)(self + 0x108));
    a = *(Vec *)((uint8_t *)obj + 0xe8);
    b = *(Vec *)(self + 0x134);
    d = func_02081658(&a, &b);
    if ((uint32_t)(d >> 12) >= 10u) {
        return;
    }

    if (*(void **)(self + 0x364) == 0) {
        return;
    }
    func_ov003_021552ac(*(void **)(self + 0x364), r7);
}
