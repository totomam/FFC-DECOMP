#include "ffc/types.h"

extern char data_020aee70[];
extern void *func_020424e0(void *);
extern void func_ov003_021463f8(void *, int, int);
extern void func_02052d3c(void *, void *);
extern void func_02052c04(void *);
extern void *func_02053290(void *);
extern void func_02056db0(void *);
extern void func_02056844(void *);

void *func_0203d884(void *param_1) {
    uint8_t *s = (uint8_t *)param_1;
    uint8_t *r5;

    *(void **)s = data_020aee70;
    func_ov003_021463f8(func_020424e0(*(void **)(s + 0x88)), 0, 0);

    r5 = s + 0xd0;
    if (*(void **)(r5 + 4) != 0) {
        if (r5[0xc] != 0) {
            func_02052d3c(*(void **)(r5 + 4), *(void **)(r5 + 8));
        }
        func_02052c04(*(void **)(r5 + 4));
    }
    func_02053290(r5);

    r5 = s + 0xc0;
    if (*(void **)(r5 + 4) != 0) {
        if (r5[0xc] != 0) {
            func_02052d3c(*(void **)(r5 + 4), *(void **)(r5 + 8));
        }
        func_02052c04(*(void **)(r5 + 4));
    }
    func_02053290(r5);

    func_02056db0(param_1);
    func_02056844(param_1);
    return param_1;
}
