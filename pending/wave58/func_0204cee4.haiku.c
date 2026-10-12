#include "ffc/types.h"

extern uint32_t *func_0204de50(uint32_t *a);
extern uint32_t *func_0204de78(uint32_t *a);
extern uint32_t func_0204de80(uint32_t *a);
extern uint32_t *func_0204de70(uint32_t *a);
extern uint32_t *func_0204dc5c(uint32_t a, uint32_t *b);
extern uint32_t func_0204de7c(uint32_t *a);
extern uint32_t func_0204aca8(uint32_t a);
extern int32_t func_0204c19c(uint32_t *p, const void *data, uint32_t n);
extern int32_t func_0204c200(uint32_t *p);
extern int32_t func_0204c258(uint32_t *p);
extern int32_t func_0204c558(uint32_t *p);
extern int32_t func_0204c5d8(uint32_t *p);
extern int32_t func_0204c6c0(uint32_t *p);
extern int32_t func_0204c8dc(uint32_t *p);
extern int32_t func_0204ac00(uint32_t *a, uint32_t *b, uint32_t c, int32_t d, int32_t e);
extern void func_0204acc0(uint32_t a, uint32_t b);

extern uint8_t data_020b02c8[];
extern uint8_t data_020b02d0[];
extern uint8_t data_020b02d8[];
extern uint8_t data_020b02e0[];
extern uint8_t data_020b0258[];
extern uint8_t data_020b0264[];
extern uint8_t data_020b022c[];

uint32_t func_0204cee4(uint32_t *p) {
    uint32_t *obj = func_0204de50(p);
    uint32_t *base = (uint32_t *)func_0204de78(obj)[0];
    uint32_t *s = (uint32_t *)base[3];
    uint32_t r7 = func_0204de80(obj);
    uint32_t *sp4 = func_0204de70(obj);
    uint32_t *sp8 = func_0204dc5c(r7, s);
    uint32_t r6;
    int32_t res;
    int32_t cnt;
    int32_t ret;

    r7 = func_0204de7c(obj);
    r6 = func_0204aca8(s[9]);
    *(int32_t *)((uint8_t *)p + 0x330) = 10;
    res = 0;
    if (sp8 != 0) {
        sp8[0] = 2;
    }
    *(int32_t *)((uint8_t *)p + 0x324) = 0;

    switch (s[7]) {
    case 0:
        res = func_0204c19c(p, data_020b02c8, 4);
        break;
    case 1:
        res = func_0204c19c(p, data_020b02d0, 5);
        break;
    case 2:
        res = func_0204c19c(p, data_020b02d8, 5);
        break;
    default:
        break;
    }
    if (res != 0) {
        return res;
    }

    if (s[3] != 0 && s[2] == 0) {
        res = func_0204c19c(p, (const void *)s[9], r6);
        if (res != 0) {
            return res;
        }
    } else if ((int32_t)r6 > (int32_t)s[6]) {
        res = func_0204c19c(p, (const void *)(s[9] + s[6]), r6 - s[6]);
        if (res != 0) {
            return res;
        }
    } else {
        res = func_0204c19c(p, data_020b02e0, 1);
        if (res != 0) {
            return res;
        }
    }

    res = func_0204c19c(p, data_020b0258, 0xb);
    if (res != 0) {
        return res;
    }
    {
        uint32_t off = (s[2] != 0) ? 8 : 7;
        res = func_0204c19c(p, data_020b0264, 6);
        if (res != 0) {
            return res;
        }
        res = func_0204c19c(p, (const void *)(s[9] + off), s[5] - off);
        if (res != 0) {
            return res;
        }
    }
    res = func_0204c19c(p, data_020b022c, 2);
    if (res != 0) {
        return res;
    }

    if (s[3] != 0 && s[2] == 0) {
        res = func_0204c200(p);
        if (res != 0) {
            return res;
        }
    }
    res = func_0204c258(p);
    if (res != 0) {
        return res;
    }
    res = func_0204c558(p);
    if (res != 0) {
        return res;
    }

    if (s[7] == 1) {
        if (s[4] != 0) {
            res = func_0204c5d8(p);
        } else {
            int32_t sel = 0;
            uint32_t *head;
            uint32_t *cur;
            if (s[53] != 0) {
                sel = (s[53] == 2) ? 1 : 0;
            } else {
                head = (uint32_t *)s[13];
                cur = head;
                if (head != 0) {
                    for (;;) {
                        if (cur[5] != 0) {
                            sel = 1;
                            break;
                        }
                        if (cur == (uint32_t *)head[0]) {
                            break;
                        }
                        cur = (uint32_t *)cur[1];
                        if (cur == 0) {
                            break;
                        }
                    }
                }
            }
            if (sel != 0) {
                res = func_0204c6c0(p);
            } else {
                res = func_0204c8dc(p);
            }
        }
        if (res != 0) {
            if (res == 3) {
                *(int32_t *)((uint8_t *)p + 0x330) = 3;
            }
            return res;
        }
    } else {
        res = func_0204c19c(p, data_020b022c, 2);
        if (res != 0) {
            return res;
        }
    }

    ret = 0;
    cnt = (int32_t)p[0xc9];
    if (cnt > 0) {
        int32_t rv = func_0204ac00(s, (uint32_t *)sp4[3], r7 + 0x100, cnt, 0);
        p[0xc9] = 0;
        func_0204acc0(r7 + 0x100, 1 << 14);
        if (rv < 0) {
            ret = 1;
        }
        if (rv == 0) {
            ret = 2;
        }
    }
    p[0xc9] = 0;
    func_0204acc0(r7 + 0x100, 1 << 14);
    return (uint32_t)ret;
}
