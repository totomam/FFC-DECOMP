#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_ov004_02148680(void *p);

typedef struct {
    uint8_t *items;
    int32_t count;
} List;

void func_ov004_02151f2c(List *p, int32_t n) {
    uint8_t *e = p->items + p->count * 56;
    p->count = p->count - n;
    if (n != 0) {
        do {
            e -= 56;
            func_0200d5ec(e + 0x28);
            func_ov004_02148680(e + 0x1c);
            n--;
        } while (n != 0);
    }
}
