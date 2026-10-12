#include "ffc/types.h"

typedef struct {
    int kind;
    void (*cb)(int, int, int);
    int flag;
} Ctx;

extern Ctx *func_0204e188(void *p);
extern int func_0204e1bc(void *p);
extern int func_0204da94(void *p, const char *fmt, char **out);
extern int func_ov001_021899f8(const char *s, int n);
extern int func_0204e148(void *p, char **s, int *n);
extern int func_ov001_021899d4(const char *a, const char *b, int n);
extern int func_ov001_02188aa4(char *dst, const char *src);
extern int func_ov001_021896d0(void *p, Ctx *c);
extern int func_ov001_02189728(void *p, Ctx *c);
extern int func_ov001_02189708(void *p, Ctx *c);
extern void func_ov001_02189040(Ctx *c);
extern void func_ov001_02189968(void);
extern void func_ov001_02189988(void);
extern void func_ov001_02188d14(int a, int b);
extern const char data_ov001_02194468[];
extern const char data_ov001_02194478[];

int func_ov001_02188eb0(void *p0, int mode, int *out) {
    int cnt;
    char *cmd;
    char *strp;
    char buf[4];
    Ctx *ctx;
    int kind;
    int flag;
    int result = -1;
    int r4;
    int r5 = mode;
    int r6;
    int v;
    void (*cb)(int, int, int);

    ctx = func_0204e188(p0);
    kind = ctx->kind;
    cb = ctx->cb;
    flag = ctx->flag;

    if (mode == 2) {
        goto m2;
    }
    if (mode == 3) {
        goto end;
    }
    if (mode != 4) {
        goto end;
    }

    if (func_0204e1bc(p0) == 8) {
        r4 = 6;
        goto tail;
    }
    if (func_0204da94(p0, data_ov001_02194468, &cmd) != 3) {
        r4 = 3;
        goto tail;
    }
    r5 = 3;
    v = func_ov001_021899f8(cmd, 3);
    if (v == 0x12e) {
        r6 = 0;
        r4 = func_0204e148(p0, &strp, &cnt);
        if (r4 < 0) {
            r4 = r5;
            goto tail;
        }
        r5 = r6;
        if (r4 > 0) {
            do {
                int start = r5;
                int len;
                int r3;
                for (;;) {
                    if (strp[r5] == '=') {
                        break;
                    }
                    if (r5 >= r4) {
                        break;
                    }
                    r5++;
                }
                len = r5 - start;
                r5++;
                if (len == 8) {
                    r6 = 1;
                    if (func_ov001_021899d4(strp + start, data_ov001_02194478, 8) != 0) {
                        r6 = 0;
                    }
                }
                r3 = r5;
                for (;;) {
                    char c = strp[r5];
                    if (c == '&' || c == '\r' || c == 0) {
                        break;
                    }
                    if (r5 >= r4) {
                        break;
                    }
                    r5++;
                }
                len = r5 - r3;
                r5++;
                if (r6 != 0) {
                    if (len == 4) {
                        int idx = func_ov001_02188aa4(buf, strp + r3);
                        buf[idx] = 0;
                        result = func_ov001_021899f8(buf, idx);
                    }
                    break;
                }
            } while (r5 < r4);
        }
        if (result >= 0) {
            r4 = 7;
        } else {
            r4 = 3;
        }
        goto tail;
    }
    if (v == 0xc8) {
        switch (kind) {
        case 1:
            if (func_ov001_021896d0(p0, ctx) != 0) {
                r5 = 0;
            }
            r4 = r5;
            break;
        case 2:
            if (func_ov001_02189728(p0, ctx) != 0) {
                r5 = 0;
            }
            r4 = r5;
            break;
        case 3:
            if (func_ov001_02189708(p0, ctx) != 0) {
                r5 = 0;
            }
            r4 = r5;
            break;
        default:
            break;
        }
        goto tail;
    }
    r4 = 3;

tail:
    func_ov001_02189040(ctx);
    func_ov001_02189968();
    if (cb != 0) {
        cb(kind, r4, result);
    }
    if (flag != 0) {
        func_ov001_02189988();
    }
    goto end;

m2:
    out[2] = 0;
    func_ov001_02188d14(4, result);
    r4 = 4;
    if (cb != 0) {
        cb(kind, r4, result);
    }
end:
    return 0;
}
