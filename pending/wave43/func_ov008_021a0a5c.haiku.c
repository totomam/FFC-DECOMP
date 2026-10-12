#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} PairU32;

extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(void *p);
extern void *func_0201c9ac(void *p, int n);
extern void *func_02056aec(void *p);
extern void *func_ov008_021a0af0(void *a, PairU32 s, void *z);
extern void *func_0205681c(int n);
extern void *func_ov008_0219fb54(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;
extern void *data_020b93b8;
extern PairU32 data_ov008_021a87c0;

void func_ov008_021a0a5c(uint8_t *a) {
    void *r6;
    void *r7;
    void *r1;
    uint8_t *obj;

    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18);
    r6 = func_0201c9ac(data_020b93b8, 0xe);
    r7 = func_02056aec(a);
    r6 = func_ov008_021a0af0(a, data_ov008_021a87c0, r6);
    r1 = func_0205681c(0x108);
    if (r1 != 0) {
        r1 = func_ov008_0219fb54(r1);
    }
    obj = a + 0x14;
    func_02056bc0(obj, r1);
    func_02056bc0(obj, r6);
    func_02056bc0(obj, r7);
}
