#include "ffc/types.h"

extern int *func_ov001_02181c3c(int *s, int a, int b);
extern int func_ov001_021801a4(int *s, int *obj, int a, int b, int c, uint8_t *p, int n, int d);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern int func_ov001_02180230(int *s, int a, int b, uint8_t *p, int n, int *out);
extern int func_ov001_02181b3c(int *s, int a, int b);
extern int func_ov001_021802b4(int *s, int **out, int a, int b);
extern int func_ov001_02181b2c(int *obj);
extern int func_ov001_0218098c(int *s, uint8_t *p, int n);
extern int func_ov001_02180f34(int *obj, uint8_t *p, int n);
extern int func_ov001_02181190(int *obj, uint8_t *p, int n);
extern const uint8_t data_ov001_02191a24[];

static int tail_flag(int *s, int a3, int v, int flag, uint8_t *p4, int *obj);

int func_ov001_02181200(int *s, uint8_t *p1, int n, int a3, int v)
{
    int *obj;
    int local;
    int rem;
    int flag;
    uint8_t *p4;

    rem = n - s[17];
    p4 = p1 + s[17];
    obj = func_ov001_02181c3c(s, a3, v);
    flag = 0;
    if (s[11] != 0) {
        if (func_ov001_021801a4(s, obj, a3, v, 0, p1, n, 0) == 0) {
            return 0;
        }
    }
    if (rem > 2 && func_02090410(p4, data_ov001_02191a24, 2) == 0) {
        flag = 1;
    }
    if (obj == 0) {
        if (func_ov001_02180230(s, a3, v, p1, n, &local) == 0) {
            return 0;
        }
        if (local != 0) {
            return 1;
        }
        if (flag != 0 && p4[2] == 1) {
            if (s[8] == 0) {
                return 1;
            }
            {
                int r = func_ov001_021802b4(s, &obj, a3, v);
                if (r != 0 && r != 5) {
                    if (func_ov001_02181b3c(s, a3, v) != 0) {
                        return 1;
                    }
                    return 0;
                }
                if (r == 5) {
                    return 1;
                }
            }
        } else {
            if (flag != 0 && p4[2] == 0x68) {
                return 1;
            }
            if (func_ov001_02181b3c(s, a3, v) != 0) {
                return 1;
            }
            return 0;
        }
    }
    if (obj[3] == 7) {
        if (flag != 0 && p4[2] == 0x68) {
            return 1;
        }
        if (func_ov001_02181b2c(obj) != 0) {
            return 1;
        }
        return 0;
    }
    if (flag != 0 && rem >= 4) {
        if (func_02090410(p4 + 2, data_ov001_02191a24, 2) == 0) {
            p1[3] = p1[1];
            p1[2] = p1[0];
            flag = 0;
            p4 += 2;
            n -= 2;
            p1 += 2;
        }
    }
    if (flag == 0) {
        if (obj[3] >= 5) {
            if (func_ov001_0218098c(s, p1, n) != 0) {
                return 1;
            }
            return 0;
        }
        if (func_ov001_02180230(s, a3, v, p1, n, &local) == 0) {
            return 0;
        }
        return 1;
    }
    if (p4[2] < 8) {
        if (func_ov001_02180f34(obj, p1, n) != 0) {
            return 1;
        }
        return 0;
    }
    if (func_ov001_02181190(obj, p1, n) != 0) {
        return 1;
    }
    return 0;
}
