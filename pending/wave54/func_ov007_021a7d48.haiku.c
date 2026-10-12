#include "ffc/types.h"

typedef struct { uint32_t w, h; } Size;
typedef struct { char pad[0x20]; void *f20; } Obj20;

extern int func_02087460(void *a);
extern int func_0208d2e8(int r);
extern void *func_02056aec(void *a);
extern void *func_02060634(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, int id);
extern void func_02005988(void *obj, void *s);
extern void *func_02032d24(void *self, Size sz, void *obj, uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern int func_0201f144(void *obj);
extern void *data_0213df20;
extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c469c[];

void func_ov007_021a7d48(uint8_t *a)
{
    uint32_t obj[3];
    uint32_t obj2[3];
    Size sz1;
    Size sz2;
    void *t;
    void *r6;
    void *r7;
    void *n;
    int r4;
    int r;

    r = func_02087460(a);
    if (r != 0 && func_0208d2e8(r) == 0) {
        r4 = 0;
        n = func_02056aec(a);
        t = func_02060634(((Obj20 *)data_0213df20)->f20, 8, 0, 10, 0, 0);
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            void *s = func_020159c8(data_020b8e44, 0x33);
            func_02005988(obj, s);
            sz1.w = 0x80;
            sz1.h = 0x60;
            r6 = func_02032d24(r6, sz1, obj, 4, 0);
            r4 = 1;
        }
        a += 0x14;
        func_02056bc0(a, r6);
        func_02056bc0(a, t);
        func_02056bc0(a, n);
        if (r4 != 0) {
            func_020059cc(obj);
        }
    } else {
        if (func_0201f144(data_020b93b8) != 0) {
            r4 = 0;
            r6 = func_0205681c(0xb0);
            r7 = 0;
            if (r6 != 0) {
                void *s = func_020159c8(data_020b8e44, 0x37);
                func_02005988(obj2, s);
                sz2.w = 0x80;
                sz2.h = 0x60;
                r6 = func_02032d24(r6, sz2, obj2, 4, r7);
                r4 = 1;
            }
            if (r4 != 0) {
                func_020059cc(obj2);
            }
            n = func_02056aec(a);
            t = func_02060634(((Obj20 *)data_0213df20)->f20, 8, 0, 10, 0, 0);
            a += 0x14;
            func_02056bc0(a, r6);
            func_02056bc0(a, t);
            func_02056bc0(a, n);
        } else {
            uint32_t v0 = data_ov007_021c469c[0];
            uint32_t v1 = data_ov007_021c469c[1];
            *(uint32_t *)(a + 0xb8) = v0;
            *(uint32_t *)(a + 0xbc) = v1;
        }
    }
}
