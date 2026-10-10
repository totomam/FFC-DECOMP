#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(uint8_t a, uint32_t b, uint32_t c);
extern void func_ov006_021a4340(void);
extern void func_ov006_021b5770(void *a, void (*b)(void));

typedef struct {
    uint32_t type : 8;
    uint32_t rest : 24;
    uint32_t other;
} Rec;

void func_ov006_021a42e8(void *a)
{
    uint8_t *p = data_ov006_021bc6fc;
    Rec *q = *(Rec **)(p + 0x30);
    Rec tmp = *q;
    int x = (int)tmp.type - 12;
    if (x > 0x51) {
        func_ov006_021a4b14(p[0x11d], 0, x);
        return;
    }
    func_ov006_021a4b14(p[0x11d], 0, 0x51);
    func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 1, 0xc0);
    func_ov006_021b5770(a, func_ov006_021a4340);
}
