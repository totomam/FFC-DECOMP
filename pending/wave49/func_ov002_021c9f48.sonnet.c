#include "ffc/types.h"

extern void *data_020b8e44;
extern void func_02016074(void *dst, void *src, uint32_t n);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint16_t func_ov002_021a170c(const void *object);
extern int func_0209a978(int a, int b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint16_t func_ov002_021a16e4(const void *object);
extern uint32_t func_ov002_021a16fc(const void *object);
extern int func_0209a76c(int a, int b);

typedef struct {
    uint32_t pad0;
    void *a;
    uint32_t b;
    uint8_t flag;
} Tmp;

typedef struct { uint16_t type; int16_t val; } Ent;
typedef struct { uint32_t cnt; uint32_t off; } Hdr;
typedef struct { uint32_t pad[2]; uint32_t off; } Top;

int func_ov002_021c9f48(void *ctx, int kind, uint32_t *out, void *obj)
{
    Tmp t;
    Top *base;
    Hdr *hdr;
    Ent *list;
    uint32_t i;

    func_02016074(&t, data_020b8e44, 11);
    base = (Top *)func_02052d90(t.a, t.b);
    hdr = (Hdr *)((uint8_t *)base + ((uint32_t *)((uint8_t *)base + base->off))[kind - 1]);
    for (i = 0; i < hdr->cnt; i++) {
        Ent *ent;
        list = (Ent *)((uint8_t *)hdr + hdr->off);
        ent = &list[i];
        if (ent->type == 1) {
            int v = func_0209a978(*(int *)((uint8_t *)ctx + 0x108) * 100, func_ov002_021a170c(obj));
            if (v >= ent->val) {
                break;
            }
            *out = 0;
            if (t.a) {
                if (t.flag) {
                    func_02052d3c(t.a, t.b);
                }
                func_02052c04(t.a);
            }
            func_02053290(&t);
            return 0;
        }
    }

    if (t.a) {
        if (t.flag) {
            func_02052d3c(t.a, t.b);
        }
        func_02052c04(t.a);
    }
    func_02053290(&t);

    switch (kind) {
    case 0:
    case 1:
        break;
    case 2:
    case 3:
    case 6:
        *out = func_ov002_021a16fc(obj);
        break;
    case 4:
    case 5: {
        int r6 = 0;
        int r1;
        int r;
        uint32_t a4;
        uint16_t a5;
        if (kind == 4) {
            r6 = 2;
        } else if (kind == 5) {
            r6 = 1;
        }
        a5 = func_ov002_021a16e4(obj);
        a4 = func_ov002_021a16fc(obj);
        r1 = func_0209a76c(func_ov002_021a170c(obj), r6) - a5;
        r = (int)a4 - r1;
        *out = r;
        if (r < 0) {
            r = 0;
        }
        *out = r;
        if (r != 0) {
            return 3;
        }
        return 0;
    }
    default:
        break;
    }
    return 3;
}
