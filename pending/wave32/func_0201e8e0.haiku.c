#include "ffc/types.h"

extern uint32_t data_020ad4f4[];
extern uint8_t data_021452e4[];
extern uint32_t func_0209ce70(uint32_t size, void *arr);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_0201e8e0(S *p, int32_t n)
{
    p->a = 0;
    p->b = data_020ad4f4[7];
    if (n > 0) {
        do {
            p->a = func_0209ce70(n * 0x18, data_021452e4);
            if (p->a != 0) {
                p->b = n;
                return;
            }
            n /= 2;
        } while (n > 0);
    }
}
