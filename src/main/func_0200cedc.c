#include "ffc/types.h"

extern void func_0200cf10(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t v1;
    uint32_t v2;
} Big;

typedef struct {
    uint8_t flag : 1;
    uint8_t len : 7;
} Small;

void func_0200cedc(void *a, void *b) {
    uint32_t s1, s2, s3;
    Big *bb = (Big *)b;
    Small *sb = (Small *)b;
    Big *ba = (Big *)a;
    Small *sa = (Small *)a;

    if (!bb->flag) {
        s3 = (uint32_t)b + 2;
        s1 = sb->len;
    } else {
        s3 = bb->v2;
        s1 = bb->v1;
    }

    s2 = !ba->flag ? sa->len : ba->v1;

    func_0200cf10(a, 0, s2, s3, s1);
}
