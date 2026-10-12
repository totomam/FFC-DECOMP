#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02072224(void *a, uint8_t b);
extern void func_0201f8c0(void *a, uint8_t b);
extern void func_ov007_021ae9a4(void *p, uint32_t a, uint32_t b);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021acbc8(void *p);
extern void func_ov007_021ac390(void *p);
extern void func_ov007_021aca98(void *p);
extern void func_ov007_021ab758(void *p, uint8_t x);
extern void func_ov007_021ab794(void *p, uint8_t x);
extern void func_ov007_021acc04(void *p);
extern void func_02069724(void *out, void *p);
extern void func_02069828(void *p, Pair v);

extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov007_021ac9bc(uint8_t *p)
{
    Pair tmp;

    if (*(uint32_t *)(p + 0xf8) == 1) {
        func_02072224(*(void **)((char *)*(void **)data_020b8e44 + 0x84), p[0xf4]);
        func_0201f8c0(data_020b93b8, p[0xf4]);
        func_ov007_021ae9a4(p, 0, 0);
        p[0xfe] = p[0xfe] - 1;
        if (p[0xfe] == 0) {
            void *r = func_02056aec(p);
            func_02056bc0(p + 0x14, r);
        }
        func_ov007_021acbc8(p);
        func_ov007_021ac390(p);
        func_ov007_021aca98(p);
        if (p[0xfc] > p[0xfd]) {
            p[0xfc] = p[0xfd];
        }
        func_ov007_021ab758(*(void **)(p + 0xe0), (uint8_t)(p[0xfc] + 1));
        func_ov007_021ab794(*(void **)(p + 0xe0), (uint8_t)(p[0xfd] + 1));
        func_ov007_021acc04(p);
        func_02069724(&tmp, p);
        func_02069828(p, tmp);
    }
}
