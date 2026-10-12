#include "ffc/types.h"

typedef struct {
    uint8_t a0[0x20];
    uint8_t *e20;
    uint32_t v24;
    uint16_t h28;
    uint8_t a2a[2];
    uint16_t *p2c;
    uint16_t h30;
    uint16_t h32;
    uint16_t h34;
    uint8_t a36[4];
    uint16_t h3a;
    uint8_t a3c[0x238 - 0x3c];
    uint32_t c238;
    uint32_t c23c;
    uint32_t n240;
    uint8_t f244;
    uint8_t f245;
} Obj;

extern uint8_t *data_0213e178;
extern int func_0206cb98(void *d);
extern int func_0206cb8c(void *d);
extern void func_020578ac(void *obj, void *e, int n);
extern void func_020578a0(void *obj, void *e, void *buf);
extern void func_02057980(void *obj, void *buf);
extern int func_0208e2f0(void *a, void *b, void *c);
extern void func_0206da48(void *obj);
extern uint16_t *func_0208e8ac(void *a, void *b, uint16_t i);

#define FLAGS (*(uint16_t *)(data_0213e178 + 0xf90))

void func_0206da94(Obj *p) {
    uint32_t buf[3];
    uint32_t cnt;
    uint32_t hits;
    uint32_t i;
    uint16_t *e;
    uint16_t v;

    if (func_0206cb98(data_0213e178) == 0) {
        if (func_0206cb8c(data_0213e178) == 7) {
            goto L5c;
        }
    }
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    for (i = 0; i < p->n240; i++) {
        func_020578ac(p, p->e20 + i * 0x2c, 1);
        func_020578a0(p, p->e20 + i * 0x2c, buf);
    }
    return;

L5c:
    if (p->f244 == 0) {
        func_02057980(p, buf);
        p->h30 = (uint16_t)(buf[0] | p->v24 | (p->f245 ? 0x4000 : 0));
        p->h32 = (uint16_t)(buf[1] | (buf[2] << 8));
        p->h34 = p->h28;
    }
    if (func_0208e2f0(*(void **)(data_0213e178 + 0x17d4), (uint8_t *)p + 0x30, (uint8_t *)p + 0x38) != 0 ||
        (p->h3a & FLAGS) != FLAGS) {
        func_0206da48(p);
        p->f244 = 1;
        return;
    }
    p->f244 = 0;
    p->h28 = 0;
    p->v24 = 0;
    if (p->c238 != 0) {
        p->c238--;
        return;
    }
    hits = 0;
    cnt = 0;
    for (i = 0; i < p->c23c; i++) {
        if (FLAGS & (1 << i)) {
            e = func_0208e8ac(*(void **)(data_0213e178 + 0x17d4), (uint8_t *)p + 0x38, (uint16_t)i);
            if (e != 0) {
                v = e[0];
                if (v & 0x4000) {
                    hits++;
                }
                buf[0] = v & 0xffffbfff;
                buf[1] = (uint8_t)e[1];
                buf[2] = e[1] >> 8;
                p->p2c[cnt] = e[2];
                func_020578a0(p, p->e20 + cnt * 0x2c, buf);
                cnt++;
            }
        }
    }
    if (p->f245 != 0) {
        if (hits != cnt) {
            func_0206da48(p);
        } else {
            p->f245 = 0;
        }
    }
}
