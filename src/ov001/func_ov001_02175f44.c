#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *p, const char *msg);
extern void func_ov001_0217ec78(void *dst, const void *src, int n);
extern int func_02092948(const void *a, const void *b);
extern void func_ov001_02178324(void *p, void *dst, const char *s);
extern void func_ov001_02178340(void *p, void *dst, int v);

extern const char data_ov001_02190100[];
extern const char data_ov001_0219019c[];
extern const char data_ov001_021901b4[];
extern const char data_ov001_021901cc[];
extern const char data_ov001_0219014c[];
extern const char data_ov001_021901d8[];
extern const char data_ov001_021901e8[];
extern const char data_ov001_02190174[];

int func_ov001_02175f44(void *p0, int arg1, const char *arg2, const char *arg3)
{
    uint8_t *s;
    int8_t buf1[0x100];
    int8_t buf2[0x100];
    int i;

    if (p0 == 0) {
        goto fail;
    }
    s = *(uint8_t **)p0;
    if (s != 0) {
        goto main_body;
    }
fail:
    return 2;
main_body:
    if (*(int *)(s + 0x108) != 0) {
        return 0;
    }
    if (*(int *)(s + 0x1f4) == 4) {
        func_ov001_0217ef6c(p0, data_ov001_02190100);
        return 2;
    }
    if (arg2 == 0) {
        func_ov001_0217ef6c(p0, data_ov001_0219019c);
        return 2;
    }
    if (arg3 == 0) {
        func_ov001_0217ef6c(p0, data_ov001_021901b4);
        return 2;
    }

    func_ov001_0217ec78(buf1, arg2, 0x100);
    for (i = 0; buf1[i] != 0; i++) {
        if (buf1[i] == '\\') {
            buf1[i] = '/';
        }
    }

    func_ov001_0217ec78(buf2, arg3, 0x100);
    for (i = 0; buf2[i] != 0; i++) {
        if (buf2[i] == '\\') {
            buf2[i] = '/';
        }
    }

    if (arg1 == *(int *)(s + 0x23c)) {
        if (func_02092948(buf1, s + 0x3b8) == 0) {
            if (func_02092948(buf2, s + 0x4b8) == 0) {
                return 0;
            }
        }
    }

    *(int *)(s + 0x23c) = arg1;
    func_ov001_0217ec78(s + 0x3b8, buf1, 0x100);
    func_ov001_0217ec78(s + 0x4b8, buf2, 0x100);

    func_ov001_02178324(p0, s + 0x210, data_ov001_021901cc);
    func_ov001_02178340(p0, s + 0x210, arg1);
    func_ov001_02178324(p0, s + 0x210, data_ov001_0219014c);
    func_ov001_02178340(p0, s + 0x210, *(int *)(s + 0x198));
    func_ov001_02178324(p0, s + 0x210, data_ov001_021901d8);
    func_ov001_02178324(p0, s + 0x210, buf1);
    func_ov001_02178324(p0, s + 0x210, data_ov001_021901e8);
    func_ov001_02178324(p0, s + 0x210, buf2);
    func_ov001_02178324(p0, s + 0x210, data_ov001_02190174);
    return 0;
}
