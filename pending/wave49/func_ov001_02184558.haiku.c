#include "ffc/types.h"

extern void func_ov001_02184184(void *b, void *p);
extern void *data_ov001_02193d6c[];
extern uint8_t data_ov001_021937a8[];
extern uint8_t data_ov001_021937b0[];

typedef uint32_t (*FnRet)(uint32_t, uint32_t);
typedef void (*FnBuf)(uint32_t, uint8_t *, uint32_t);
typedef void (*FnIdx)(uint32_t, uint32_t, uint8_t *, uint32_t);

typedef struct Obj {
    uint8_t pad0[0x88];
    FnBuf f88;
    FnIdx f8c;
    FnIdx f90;
    FnBuf f94;
    FnRet f98;
    uint8_t pad1[0x114 - 0x9c];
    uint32_t f114;
} Obj;

typedef struct Buf {
    uint8_t data[0x578];
    int32_t pos;
} Buf;

void func_ov001_02184558(Obj *o, Buf *b, uint32_t n, uint32_t m, uint8_t *buf)
{
    uint8_t out[0x100];
    volatile int cnt = 0;
    int v = 0;
    int i, j;
    int prev;

    if (m == 0) return;

    if (n - 1 <= 1) {
        if (0x578 - b->pos < 2) return;
        v = (int)o->f98(n, o->f114);
        {
            int32_t h = (uint16_t)v;
            uint32_t lo = (uint8_t)(h >> 8);
            uint32_t sw = lo | ((h << 8) & 0xff00);
            uint8_t tb[2];
            *(uint16_t *)tb = (uint16_t)sw;
            b->data[b->pos] = tb[0];
            b->data[b->pos + 1] = tb[1];
            b->pos += 2;
        }
    } else {
        v = 1;
    }


    if (m == 0xff) {
        o->f94(n, out, o->f114);
        for (j = 0; j < cnt; j++) {
            void *t = data_ov001_02193d6c[out[j]];
            if (t == 0) t = data_ov001_021937a8;
            func_ov001_02184184(b, t);
            if (n == 0) {
                prev = b->pos;
                o->f88(out[j], (uint8_t *)b, o->f114);
                if (prev == b->pos) {
                    func_ov001_02184184(b, data_ov001_021937b0);
                }
            }
        }
        if (0x578 - b->pos < 1) return;
        {
            int p = b->pos;
            b->pos = p + 1;
            b->data[p] = 0;
        }
        m = cnt;
        buf = out;
        if (n == 0) return;
    }

    if (v <= 0) return;

    for (i = 0; i < v; i++) {
        for (j = 0; j < (int)m; j++) {
            prev = b->pos;
            if (n == 0) {
                o->f88(buf[j], (uint8_t *)b, o->f114);
            } else if (n == 1) {
                o->f8c(buf[j], i, (uint8_t *)b, o->f114);
            } else if (n == 2) {
                o->f90(buf[j], i, (uint8_t *)b, o->f114);
            }
            if (prev == b->pos) {
                func_ov001_02184184(b, data_ov001_021937b0);
            }
        }
    }
}
