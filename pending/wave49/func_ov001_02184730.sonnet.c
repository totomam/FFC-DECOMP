#include "ffc/types.h"

extern int func_ov001_02184184(uint8_t *buf, void *d);
extern uint8_t data_ov001_021937b4[];
extern void *data_ov001_02193d6c[];

typedef struct {
    int32_t phase, pos, idx, cnt, sub;
    uint8_t data[0x114 - 0x14];
    int32_t n;
} S;

typedef uint32_t (*F94)(uint32_t, void *, uint32_t);
typedef uint32_t (*F98)(uint32_t, uint32_t);
typedef uint32_t (*F88)(uint32_t, uint8_t *, uint32_t);
typedef uint32_t (*F8C)(uint32_t, uint32_t, uint8_t *, uint32_t);

uint32_t func_ov001_02184730(uint32_t *ctx, uint8_t *buf, S *st)
{
    int32_t lim = 0x578;
    int32_t saved, v, idx;

    if (st->phase >= 3) return 0;
    if (lim - *(int32_t *)(buf + lim) < 0x20) return 0;
    func_ov001_02184184(buf, data_ov001_021937b4);
    saved = *(int32_t *)(buf + lim);
    *(int32_t *)(buf + lim) = saved + 1;
    v = st->pos;
    st->pos = v + 1;
    buf[saved] = (uint8_t)v;
    while (st->phase < 3) {
        if (st->n == 0) {
            ((F94)*(void **)((uint8_t *)ctx + 0x94))(st->phase, st->data, ctx[0x45]);
        }
        if (st->cnt == 0 && st->phase != 0) {
            st->cnt = ((F98)*(void **)((uint8_t *)ctx + 0x98))(st->phase, ctx[0x45]);
        }
        idx = *(int32_t *)(buf + lim);
        if (lim - idx < 0x64) return 1;
        *(int32_t *)(buf + lim) = idx + 1;
        buf[idx] = (uint8_t)st->phase;
        if (st->idx < st->n) {
            int32_t *ps = &st->sub;
            int32_t *pi = &st->idx;
            do {
            v = st->data[st->idx];
            if (func_ov001_02184184(buf, data_ov001_02193d6c[v]) == 0) return 1;
            if (st->phase == 0) {
                ((F88)*(void **)((uint8_t *)ctx + 0x88))(v, buf, ctx[0x45]);
                if (lim - *(int32_t *)(buf + lim) < 1) return 1;
            } else {
                if (lim - *(int32_t *)(buf + lim) < 1) return 1;
                idx = *(int32_t *)(buf + lim);
                *(int32_t *)(buf + lim) = idx + 1;
                buf[idx] = (uint8_t)st->sub;
                while (st->sub < st->cnt) {
                    if (st->phase == 1) {
                        ((F8C)*(void **)((uint8_t *)ctx + 0x8c))(v, st->sub, buf, ctx[0x45]);
                    } else if (st->phase == 2) {
                        ((F8C)*(void **)((uint8_t *)ctx + 0x90))(v, st->sub, buf, ctx[0x45]);
                    }
                    if (lim - *(int32_t *)(buf + lim) < 1) return 1;
                    (*ps)++;
                }
                idx = *(int32_t *)(buf + lim);
                if (lim - idx > 0) {
                    *(int32_t *)(buf + lim) = idx + 1;
                    buf[idx] = 0;
                }
            }
            (*pi)++;
            st->sub = 0;
            } while (*pi < st->n);
        }
        idx = *(int32_t *)(buf + lim);
        if (lim - idx > 0) {
            *(int32_t *)(buf + lim) = idx + 1;
            buf[idx] = 0;
        }
        st->phase++;
        st->idx = 0;
        st->cnt = 0;
        st->sub = 0;
        st->n = 0;
    }
    buf[saved] |= 0x80;
    return 1;
}
