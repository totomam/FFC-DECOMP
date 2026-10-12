#include "ffc/types.h"

extern void func_ov006_021b0600(uint32_t x);
extern void func_ov006_021addb4(void);

typedef struct Inner {
    uint8_t pad[0x1c];
    uint8_t sub;
} Inner;

typedef struct Outer {
    uint8_t state;
    uint8_t pad[3];
    Inner *inner;
} Outer;

extern Outer data_ov006_021bc7ac;

void func_ov006_021ade00(int ev)
{
    Outer *o = &data_ov006_021bc7ac;
    Inner *in;
    int notify = 1;
    uint8_t t;

    switch (o->state) {
    case 0:
        in = o->inner;
        in->sub = 0;
        if (ev == 0) o->state = 2;
        else if (ev == 2) o->state = 1;
        else if (ev == 1) o->state = 3;
        else o->state = 4;
        break;
    case 1:
        in = o->inner;
        in->sub = 1;
        if (ev == 0) o->state = 0;
        else if (ev == 2) o->state = 2;
        else if (ev == 1) o->state = 3;
        else o->state = 5;
        break;
    case 2:
        in = o->inner;
        in->sub = 2;
        if (ev == 0) o->state = 1;
        else if (ev == 2) o->state = 0;
        else if (ev == 1) o->state = 3;
        else o->state = 6;
        break;
    case 3:
        in = o->inner;
        t = in->sub;
        if (ev == 1) o->state = t + 4;
        else if (ev == 3) o->state = t;
        else notify = 0;
        break;
    case 4:
        in = o->inner;
        in->sub = 0;
        if (ev == 0) o->state = 6;
        else if (ev == 2) o->state = 5;
        else if (ev == 1) o->state = 0;
        else o->state = 3;
        break;
    case 5:
        in = o->inner;
        in->sub = 1;
        if (ev == 0) o->state = 4;
        else if (ev == 2) o->state = 6;
        else if (ev == 1) o->state = 1;
        else o->state = 3;
        break;
    case 6:
        in = o->inner;
        in->sub = 2;
        if (ev == 0) o->state = 5;
        else if (ev == 2) o->state = 4;
        else if (ev == 1) o->state = 2;
        else o->state = 3;
        break;
    default:
        break;
    }

    if (notify) {
        func_ov006_021b0600(8);
        func_ov006_021addb4();
    }
}
