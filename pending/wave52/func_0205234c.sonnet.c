#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02005988(void *dst, void *src);
extern void func_020523e8(void *out, void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_020522e0(void *mem, void *a, void *b);
extern void *func_02052468(void *mgr, void *arg);
extern void func_02087678(void *p);
extern uint8_t data_0213dfc4[];
extern uint8_t data_0213dfa0[];
extern uint8_t data_0213dfa4[];

typedef struct {
    void *out;
    uint32_t p1[4];
    void *lock;
    uint8_t flag;
    uint8_t pad1[3];
    void *obj;
    uint32_t pad2[2];
    uint32_t tmp[3];
} Frame;

void func_0205234c(void *a, void *b) {
    Frame f;
    void *cur;
    void *mgr;
    Frame *fr;

    f.lock = data_0213dfc4;
    fr = &f;
    fr->flag = 1;
    if (fr->flag != 0) {
        func_0208763c();
    }
    func_02005988(f.tmp, a);
    func_020523e8(&f, data_0213dfa0, f.tmp);
    cur = f.out;
    func_020059cc(f.tmp);
    if (cur != data_0213dfa4) {
        uint32_t *p = *(uint32_t **)((uint8_t *)cur + 0x18);
        p[1]++;
    } else {
        cur = func_0205681c(0x70);
        if (cur != 0) {
            cur = func_020522e0(cur, a, b);
        }
        ((uint32_t *)cur)[1]++;
        func_02005988(&f.obj, a);
        mgr = func_02052468(data_0213dfa0, &f.obj);
        *(void **)((uint8_t *)mgr + 0xc) = cur;
        func_020059cc(&f.obj);
    }
    if (f.flag != 0) {
        func_02087678(f.lock);
    }
}
