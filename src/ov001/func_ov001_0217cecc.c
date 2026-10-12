#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *a, void *data);
extern int func_ov001_0217cdfc(void *a, void *out, int n);
extern void func_ov001_0217ec78(void *dst, const void *src, int n);
extern void func_ov000_021658e8(void *p);
extern int func_ov001_0217ce78(void *a, void *obj, int p8, int p9, int p10);
extern uint8_t data_ov001_02191420[];

int func_ov001_0217cecc(void *a, const char *s1, const char *s2, const char *s3,
                        const char *s4, const char *s5, int p6, int p7,
                        int p8, int p9, int p10)
{
    uint8_t *obj;
    int r;

    if (s1 != 0 && *s1 != 0) goto body;
    if (s3 != 0 && *s3 != 0) goto body;
    if (s4 != 0 && *s4 != 0) goto body;
    if (s5 != 0 && *s5 != 0) goto body;
    if (p6 != 0) goto body;
    if (s2 != 0 && *s2 != 0) goto body;
    func_ov001_0217ef6c(a, data_ov001_02191420);
    return 2;

body:
    r = func_ov001_0217cdfc(a, &obj, 1);
    if (r != 0) return r;

    if (s1 == 0) {
        obj[0x28] = 0;
    } else {
        func_ov001_0217ec78(obj + 0x28, s1, 0x1f);
    }
    if (s2 == 0) {
        obj[0x47] = 0;
    } else {
        func_ov001_0217ec78(obj + 0x47, s2, 0x15);
    }
    if (s3 == 0) {
        obj[0xa0] = 0;
    } else {
        func_ov001_0217ec78(obj + 0xa0, s3, 0x33);
    }
    func_ov000_021658e8(obj + 0xa0);
    if (s4 == 0) {
        obj[0xd3] = 0;
    } else {
        func_ov001_0217ec78(obj + 0xd3, s4, 0x1f);
    }
    if (s5 == 0) {
        obj[0xf2] = 0;
    } else {
        func_ov001_0217ec78(obj + 0xf2, s5, 0x1f);
    }
    *(int *)(obj + 0x178) = p6;
    if (p7 < 0) p7 = 0;
    *(int *)(obj + 0x17c) = p7;
    r = func_ov001_0217ce78(a, obj, p8, p9, p10);
    if (r != 0) return r;
    return 0;
}
