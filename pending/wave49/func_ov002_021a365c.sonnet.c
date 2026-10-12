#include "ffc/types.h"

extern void *func_02017714(void *unused, const uint8_t *index);
extern uint32_t func_ov002_021a1acc(const void *object);
extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021a1ac4(const void *object);
extern void *data_020b8e44;

uint32_t func_ov002_021a365c(void *obj, const uint8_t *p, uint32_t x, uint32_t y)
{
    uint32_t off = *(const uint32_t *)(p + 0x14);
    const uint8_t *e;
    uint8_t t;
    uint32_t r1v;
    int cls;
    int c = 0;

    if (off == 0) {
        e = 0;
    } else {
        e = p + off;
    }
    t = *e;
    {
        const uint8_t *rec = (const uint8_t *)func_02017714(data_020b8e44, p);
        r1v = rec[1];
    }
    if (t == 3 || t == 0x11) {
        switch (r1v) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            c = 0;
            break;
        case 8: case 9: case 10: case 11: case 12:
            c = 1;
            break;
        default:
            c = 0;
            break;
        }
        cls = c ? 2 : 1;
    } else if (t == 0x10 || t == 7) {
        cls = 1;
    } else if (t == 0xa || t == 0xd || t == 0x13 || t == 0x14 || t == 0x18) {
        cls = 2;
    } else if (r1v == 9 || r1v == 0xa || r1v == 0xb || t == 0x15 || t == 0xf) {
        cls = 3;
    } else if (t == 0xe || (uint8_t)(t - 0xb) <= 1) {
        cls = 4;
    } else if (t == 9 || t == 2 || r1v == 8 || r1v == 0xc) {
        cls = 5;
    } else {
        cls = 6;
    }

    switch (cls) {
    case 2:
    case 3:
        return func_ov002_021a18c4(obj, func_0206c184(func_ov002_021a1acc(obj), func_ov002_021a18bc(obj)));
    case 4: {
        uint32_t r;
        do {
            uint32_t a = func_ov002_021a1acc(obj);
            r = func_ov002_021a18c4(obj, func_0206c184(a, func_ov002_021a18bc(obj)));
        } while (r == x);
        return r;
    }
    case 5:
        return x;
    default: {
        const void *q;
        uint32_t tmp, v;
        if (y != 0 && func_0206c184(func_ov002_021a1acc(obj), 2) == 0) {
            q = obj;
        } else {
            q = (const void *)func_ov002_021a1ac4(obj);
        }
        tmp = func_ov002_021a1acc(obj);
        v = func_ov002_021a18c4(q, func_0206c184(tmp, func_ov002_021a18bc(q)));
        if (t == 6 && v == x) {
            if (func_ov002_021a18bc(q) == 1) {
                const void *a = (const void *)func_ov002_021a1ac4(obj);
                uint32_t b = func_ov002_021a1acc(obj);
                return func_ov002_021a18c4(a, func_0206c184(b, func_ov002_021a18bc(a)));
            }
            {
                uint32_t r;
                do {
                    uint32_t a = func_ov002_021a1acc(obj);
                    r = func_ov002_021a18c4(obj, func_0206c184(a, func_ov002_021a18bc(obj)));
                } while (r == x);
                return r;
            }
        }
        return v;
    }
    }
}
