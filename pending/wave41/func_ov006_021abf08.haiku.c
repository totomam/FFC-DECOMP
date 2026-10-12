#include "ffc/types.h"

extern int func_ov006_021ac3a0(int);
extern void func_ov006_021b3e20(int, int, void *);
extern uint32_t data_ov006_021bc78c[];
extern uint8_t data_ov006_021b86ab[];

void func_ov006_021abf08(int a, int b, int c)
{
    uint16_t arr[5];
    uint32_t **slot;
    uint8_t *p;
    int flag;
    uint32_t *obj;
    uint16_t *h;
    uint16_t v;
    uint32_t sh;

    arr[0] = 0xcc;
    arr[1] = 0xc0;
    arr[2] = 0xc0;
    arr[3] = 0x8f;
    arr[4] = 0x8f;

    slot = (uint32_t **)(*(uint8_t **)((uint8_t *)data_ov006_021bc78c + 8) + 0x18 + (c << 2));

    if ((uint32_t)(a - 1) <= 1) {
        if (func_ov006_021ac3a0(c) == 2) {
            slot = (uint32_t **)(*(uint8_t **)((uint8_t *)data_ov006_021bc78c + 8) + 0x2c);
        } else {
            slot = (uint32_t **)(*(uint8_t **)((uint8_t *)data_ov006_021bc78c + 8) + 0x30);
        }
    }

    p = data_ov006_021b86ab + 3 * a;
    flag = p[b];
    if (flag != 0) {
        func_ov006_021b3e20(0, flag, *slot);
        v = arr[a];
        sh = ((uint32_t)v << 23) >> 7;
        obj = *slot;
        obj[0] = sh | (obj[0] & 0xfe00ff00);
        h = (uint16_t *)*slot;
        h[2] = (h[2] & 0xfffff3ff) | (3 << 10);
    } else {
        obj = *slot;
        obj[0] = (obj[0] & 0xfe00ff00) | (1 << 24);
    }
}
