#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *ctx, const char *msg);
extern void func_ov001_0217ec78(char *dst, const char *src, int32_t n);
extern void func_ov001_0217823c(void *ctx, int32_t a, int32_t b);
extern void func_ov001_02178324(void *ctx, void *obj, const char *s);
extern void func_ov001_02178340(void *ctx, void *obj, int32_t v);
extern const char data_ov001_02190100[];
extern const char data_ov001_02190130[];
extern const char data_ov001_02190140[];
extern const char data_ov001_0219014c[];
extern const char data_ov001_02190158[];
extern const char data_ov001_02190168[];
extern const char data_ov001_02190174[];

int32_t func_ov001_02175b64(void **ctx, int32_t a1, const char *a2) {
    char buf[0x401];
    uint8_t *obj;
    uint8_t *p;
    int32_t i;

    if (ctx == 0 || (obj = (uint8_t *)*ctx) == 0) {
        return 2;
    }
    if (*(uint32_t *)(obj + 0x108) != 0) {
        return 0;
    }
    if (*(uint32_t *)(obj + 0x1f4) == 4) {
        func_ov001_0217ef6c(ctx, data_ov001_02190100);
        return 2;
    }
    if (a2 == 0) {
        func_ov001_0217ef6c(ctx, data_ov001_02190130);
        return 2;
    }
    func_ov001_0217ec78(buf, a2, 0x401);
    for (i = 0; buf[i] != 0; i++) {
        if (buf[i] == '\\') {
            buf[i] = '/';
        }
    }
    func_ov001_0217823c(ctx, a1, 0);
    p = obj + 0x210;
    func_ov001_02178324(ctx, p, data_ov001_02190140);
    func_ov001_02178324(ctx, p, data_ov001_0219014c);
    func_ov001_02178340(ctx, p, *(int32_t *)(obj + 0x198));
    func_ov001_02178324(ctx, p, data_ov001_02190158);
    func_ov001_02178340(ctx, p, a1);
    func_ov001_02178324(ctx, p, data_ov001_02190168);
    func_ov001_02178324(ctx, p, buf);
    func_ov001_02178324(ctx, p, data_ov001_02190174);
    return 0;
}
