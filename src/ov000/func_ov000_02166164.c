#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x28];
    int32_t f28;
    int32_t f2c;
    int32_t f30;
} S;

extern void func_ov001_02173488(int32_t v);

void func_ov000_02166164(S *p)
{
    if (p->f30 == 0) {
        if (p->f28 >= 0) {
            func_ov001_02173488(p->f28);
        }
        p->f2c = 0x12;
    }
}
