#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x5d4];
    int32_t ctr;
} FfcCtx;

typedef struct {
    uint8_t pad[0x20];
    int32_t f20;
    int32_t f24;
} FfcEnt;

extern int func_ov001_0217ec8c(void *a, void *b, int c);
extern int func_ov001_0217ed1c(void *b, const void *fmt, int32_t *off, char *buf, int n);
extern void func_ov001_0217ef50(void *a, int x, const void *y);
extern void func_ov001_021788f0(void *a, int x, int y);
extern int func_02093b18(char *buf);
extern char *func_02092b00(void *b, const void *fmt);
extern FfcEnt *func_ov001_0217c87c(void *a, int x);
extern void func_ov001_0217ef6c(void *a, const void *y);
extern void func_ov001_0217823c(void *a, int x, int y);

extern const char data_ov001_02191308[];
extern const char data_ov001_021912b4[];
extern const char data_ov001_02191310[];
extern const char data_ov001_02191318[];
extern const char data_ov001_021912f0[];

int func_ov001_0217cb70(void *a, void *b) {
    char buf[0x200];
    int32_t off = 0;
    FfcCtx *ctx = *(FfcCtx **)a;
    int count;
    char *s;
    int i;
    int8_t c;
    uint32_t k;
    int id;
    FfcEnt *e;

    if (func_ov001_0217ec8c(a, b, 1)) {
        return 4;
    }
    if (!func_ov001_0217ed1c(b, data_ov001_02191308, &off, buf, 0x200)) {
        func_ov001_0217ef50(a, 1, data_ov001_021912b4);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    count = func_02093b18(buf);
    s = func_02092b00(b, data_ov001_02191310);
    if (!s) {
        func_ov001_0217ef50(a, 1, data_ov001_021912b4);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }
    off += 6;
    for (i = 0; i < count; i++) {
        if (i == 0) {
            k = 0;
            while (k < 0x200 && (c = s[k + 6]) != 0 && c != ',') {
                buf[k] = c;
                k++;
            }
            buf[k] = 0;
            off += k;
        } else {
            if (!func_ov001_0217ed1c(b, data_ov001_02191318, &off, buf, 0x200)) {
                func_ov001_0217ef50(a, 1, data_ov001_021912b4);
                func_ov001_021788f0(a, 3, 1);
                return 3;
            }
        }
        id = func_02093b18(buf);
        e = func_ov001_0217c87c(a, id);
        if (!e) {
            func_ov001_0217ef6c(a, data_ov001_021912f0);
            return 1;
        }
        e->f20 = 1;
        e->f24 = ctx->ctr++;
        func_ov001_0217823c(a, id, 1);
    }
    return 0;
}
