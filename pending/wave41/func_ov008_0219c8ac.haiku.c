#include "ffc/types.h"

extern void func_0201c220(void *a, int b, int c);
extern void *func_02056aec(void *o);
extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_020215a4(int a, int b);
extern void *data_020b93b8;

void func_ov008_0219c8ac(void *obj) {
    uint8_t *p = (uint8_t *)obj;
    void *local0;
    void *t;
    void *r4;
    void *r7;
    void *r0;

    if (*(uint32_t *)(p + 0x100) != 1) {
        return;
    }
    func_0201c220(*(void **)&data_020b93b8, 0x10, p[0x105]);
    *(*(uint32_t **)(p + 0xdc)) = *(uint32_t *)(p + 0xfc);
    local0 = func_02056aec(obj);
    t = func_0203bfe0(0x1e);
    r4 = func_0203bfcc(0x1e);
    r7 = func_0203b6fc();
    func_02056bc0(r7, r4);
    func_02056bc0(r7, t);
    r0 = func_020215a4(-1, 10);
    obj = p + 0x14;
    func_02056bc0(obj, r0);
    func_02056bc0(obj, r7);
    func_02056bc0(obj, local0);
}
