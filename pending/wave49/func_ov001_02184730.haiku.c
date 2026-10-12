#include "ffc/types.h"

extern int func_ov001_02184184(uint8_t *buf, void *d);
extern uint8_t data_ov001_021937b4[];
extern void *data_ov001_02193d6c[];

typedef uint32_t (*F94)(uint32_t, void *, uint32_t);
typedef uint32_t (*F98)(uint32_t, uint32_t);
typedef uint32_t (*F88)(uint32_t, uint8_t *, uint32_t);
typedef uint32_t (*F8C)(uint32_t, uint32_t, uint8_t *, uint32_t);

uint32_t func_ov001_02184730(uint32_t *ctx, uint8_t *buf, int32_t *st)
{
    int32_t lim = 0x578;
    uint8_t *sb = (uint8_t *)st;
    int32_t saved, v, idx;

    if (st[0] >= 3) {
        return 0;
    }
    if (lim - *(int32_t *)(buf + lim) < 0x20) {
        return 0;
    }
    func_ov001_02184184(buf, data_ov001_021937b4);
    saved = *(int32_t *)(buf + lim);
    *(int32_t *)(buf + lim) = saved + 1;
    v = st[1];
    st[1] = v + 1;
    buf[saved] = (uint8_t)v;
    if (st[0] >= 3) {
        goto done;
    }
    do {
        if (st[0x45] == 0) {
            ((F94)*(void **)((uint8_t *)ctx + 0x94))(st[0], st + 5, ctx[0x45]);
        }
        if (st[3] == 0 && st[0] != 0) {
            st[3] = ((F98)*(void **)((uint8_t *)ctx + 0x98))(st[0], ctx[0x45]);
        }
        idx = *(int32_t *)(buf + lim);
        if (lim - idx < 0x64) {
            return 1;
        }
        *(int32_t *)(buf + lim) = idx + 1;
        buf[idx] = (uint8_t)st[0];
        if (st[2] < st[0x45]) {
            do {
                v = sb[0x14 + st[2]];
                if (func_ov001_02184184(buf, data_ov001_02193d6c[v]) == 0) {
                    return 1;
                }
                if (st[0] == 0) {
                    ((F88)*(void **)((uint8_t *)ctx + 0x88))(v, buf, ctx[0x45]);
                    if (lim - *(int32_t *)(buf + lim) < 1) {
                        return 1;
                    }
                } else {
                    if (lim - *(int32_t *)(buf + lim) < 1) {
                        return 1;
                    }
                    idx = *(int32_t *)(buf + lim);
                    *(int32_t *)(buf + lim) = idx + 1;
                    buf[idx] = (uint8_t)st[4];
                    while (st[4] < st[3]) {
                        if (st[0] == 1) {
                            ((F8C)*(void **)((uint8_t *)ctx + 0x8c))(v, st[4], buf, ctx[0x45]);
                        } else if (st[0] == 2) {
                            ((F8C)*(void **)((uint8_t *)ctx + 0x90))(v, st[4], buf, ctx[0x45]);
                        }
                        if (lim - *(int32_t *)(buf + lim) < 1) {
                            return 1;
                        }
                        st[4]++;
                    }
                    idx = *(int32_t *)(buf + lim);
                    if (lim - idx > 0) {
                        *(int32_t *)(buf + lim) = idx + 1;
                        buf[idx] = 0;
                    }
                }
                st[2]++;
                st[4] = 0;
            } while (st[2] < st[0x45]);
        }
        idx = *(int32_t *)(buf + lim);
        if (lim - idx > 0) {
            *(int32_t *)(buf + lim) = idx + 1;
            buf[idx] = 0;
        }
        st[0]++;
        st[2] = 0;
        st[3] = 0;
        st[4] = 0;
        st[0x45] = 0;
    } while (st[0] < 3);

done:
    buf[saved] |= 0x80;
    return 1;
}
