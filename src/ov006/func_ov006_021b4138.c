#include "ffc/types.h"

typedef struct {
    uint8_t pad[4];
    int16_t cur;
    uint16_t max;
    uint8_t pad2[1];
    uint8_t flag;
} S;

extern void func_ov006_021b5774(int32_t a, void *p);

void func_ov006_021b4138(void *a, S *p)
{
    p->cur = p->cur + 1;
    if (p->cur < p->max) {
        return;
    }
    p->flag = 0;
    func_ov006_021b5774(1, a);
}
