#include "ffc/types.h"

typedef struct Item {
    uint8_t a0[2];
    uint16_t f2;
    uint8_t a4[0x3c];
    uint16_t f40;
    uint32_t f44;
    uint16_t f48;
    uint8_t pad4a[0x0];
} Item;
typedef struct Item2 { uint8_t pad[0x4a]; uint8_t f4a; } Item2;

typedef struct G {
    uint8_t p0[0xf00];
    uint8_t buf[0x400];
    uint8_t p1[0x1344 - 0xf00 - 0x400];
    void (*cb)(void *);
    uint8_t slots[0x10][0x70];
    uint16_t a[16];
    uint16_t b[16];
    uint32_t count;
    uint32_t head;
    uint32_t state;
    uint16_t c94, c96;
    uint8_t p2[0x1c96 - 0x1a98];
    uint8_t d[1];
} G;

typedef struct P {
    uint16_t f0, f2, f4, f6, f8, fa, fc, fe_;
} P;
typedef struct Q {
    uint8_t pad[2];
    uint16_t f2;
    uint8_t pad2[4];
    uint16_t f8;
    uint8_t pad3[4];
    uint16_t fe;
    Item *items[1];
} Q;

extern G *data_ov000_0216e268;
extern void func_02087874(void *p, uint32_t n);
extern int func_ov000_0215182c(void *a, void *b, void *c, void *d, void *e);
extern uint16_t func_ov000_02151484(uint8_t x);

void func_ov000_0215149c(Q *p7)
{
    uint16_t i;
    uint32_t j;
    Item *item;
    int found;

    func_02087874(data_ov000_0216e268->buf, 0x400);
    if (p7->f2 == 0 && p7->f8 == 5) {
        for (i = 0; i < p7->fe; i++) {
            item = p7->items[i];
            if (((Item2 *)item)->f4a + 0x10 != 0x80) continue;
            if (item->f40 != 1) continue;
            if (item->f44 != 0x857) continue;
            found = 0;
            for (j = 0; j < data_ov000_0216e268->count; j++) {
                if (data_ov000_0216e268->b[j] == item->f48) {
                    found = 1;
                    break;
                }
            }
            if (found == 1) continue;
            if (func_ov000_0215182c(data_ov000_0216e268->d, &data_ov000_0216e268->c94,
                                    &data_ov000_0216e268->c96, item,
                                    data_ov000_0216e268->slots[data_ov000_0216e268->head]) == 0) continue;
            data_ov000_0216e268->a[data_ov000_0216e268->head] = func_ov000_02151484(p7->items[i]->f2);
            data_ov000_0216e268->b[data_ov000_0216e268->head] = p7->items[i]->f48;
            data_ov000_0216e268->head = (data_ov000_0216e268->head + 1) % 16;
            data_ov000_0216e268->count += 1;
            if (data_ov000_0216e268->count > 16) data_ov000_0216e268->count = 16;
        }
    }
    data_ov000_0216e268->state = 2;
    if (data_ov000_0216e268->cb != 0) data_ov000_0216e268->cb(p7);
}
