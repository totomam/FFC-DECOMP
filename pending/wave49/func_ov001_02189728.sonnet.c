#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint8_t *ptr;
    int count;
} Blk;

extern int func_ov001_021899dc(void *p, int size);
extern int func_0204da94(void *a, void *data, int8_t **out);
extern int func_0204e148(void *a, int8_t **buf, int *outlen);
extern int func_ov001_021899f8(int8_t *src, int len);
extern void func_ov001_021899e8(void *dst, int8_t *src, int len);
extern int func_ov001_021889bc(int len);
extern int func_ov001_02188aa4(int8_t *dst, int8_t *src, int len);
extern uint8_t data_ov001_02194514[];

int func_ov001_02189728(void *a, Blk *b) {
    int ret = 0;
    int8_t tmp[0x66];
    int8_t *s28;
    int8_t *s30;
    int n2c;
    int n, r, k, p, len, n2, v, chunk, cur, st, state, flag;
    int8_t c;
    uint8_t *base, *q22, *q88, *q93, *q9e;

    func_ov001_021899dc(b->ptr, b->count * 0xb0);
    r = func_0204da94(a, data_ov001_02194514, &s28);
    if (r > 0 && s28[0] == 0x30 && s28[1] == 0) {
        return 1;
    }
    n = func_0204e148(a, &s30, &n2c);
    if (n > 0) {
    cur = 0;
    for (chunk = 0; chunk < b->count; chunk++) {
        if (cur >= n) {
            return 1;
        }
        ret = 0;
        base = b->ptr + chunk * 0xb0;
        q9e = base + 0x9e; q93 = base + 0x93; q88 = base + 0x88; q22 = base + 0x22;
        state = 0;
        st = cur;
        flag = 0;
        while (cur < n) {
            c = s30[cur];
            if (c == 0x0d) {
                flag = 1;
            } else if (flag) {
                flag = 0;
                if (c == 0x0a) {
                    if (state == 5) {
                        k = cur - 1 - st;
                        if (k > 8) {
                            return ret;
                        }
                        p = func_ov001_021899f8(s30 + st, k);
                        if (p < 0) {
                            return ret;
                        }
                        *(int *)(base + 0xac) = p;
                    }
                    cur++;
                    ret = (state >= 5);
                    break;
                }
            } else if (c == 9) {
                if (state <= 5) {
                    switch (state) {
                    case 0:
                        len = cur - st;
                        if ((uint32_t)len > 0x20) {
                            return ret;
                        }
                        func_ov001_021899e8(base, s30 + st, len);
                        break;
                    case 1:
                        len = cur - st;
                        v = func_ov001_021889bc(len);
                        if ((uint32_t)v > 0x66) {
                            return ret;
                        }
                        n2 = func_ov001_02188aa4(tmp, s30 + st, len);
                        if ((uint32_t)n2 > 0x66) {
                            n2 = 0x66;
                        }
                        func_ov001_021899e8(q22, tmp, n2);
                        *(uint16_t *)(base + 0x86) = 0;
                        break;
                    case 2:
                        len = cur - st;
                        if ((uint32_t)len > 0xa) {
                            return ret;
                        }
                        func_ov001_021899e8(q88, s30 + st, len);
                        break;
                    case 3:
                        len = cur - st;
                        if ((uint32_t)len > 0xa) {
                            return ret;
                        }
                        func_ov001_021899e8(q93, s30 + st, len);
                        break;
                    case 4:
                        len = cur - st;
                        if ((uint32_t)len > 0xa) {
                            return ret;
                        }
                        func_ov001_021899e8(q9e, s30 + st, len);
                        break;
                    case 5:
                        len = cur - st;
                        if (len > 8) {
                            return ret;
                        }
                        p = func_ov001_021899f8(s30 + st, len);
                        if (p < 0) {
                            return ret;
                        }
                        *(int *)(base + 0xac) = p;
                        break;
                    }
                }
                state++;
                st = cur + 1;
            }
            cur++;
        }
    }
    }
    return ret;
}
