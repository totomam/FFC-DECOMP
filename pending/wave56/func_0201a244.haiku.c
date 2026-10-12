#include "ffc/types.h"

extern void func_020095b8(void *dst, void *src);
extern void func_0201a2ec(void *dst, void *src, uint32_t idx);
extern void func_020532a4(void *obj, void *tmp);
extern void func_02052d3c(void *ptr, uint32_t val);
extern void func_02052c04(void *ptr);
extern void func_02052be0(void);
extern void func_02052d10(void *ptr, uint32_t val);
extern void *func_02053290(void *object);
extern void *func_020059cc(void *object);
extern void *func_02052d90(const void *mar, uint32_t index);

typedef struct Mar {
    uint32_t hdr;
    void *ptr;
    uint32_t val;
    uint8_t flag;
} Mar;

typedef struct Obj {
    uint32_t hdr;
    void *ptr;
    uint32_t val;
    uint8_t flag;
    uint8_t pad[3];
    uint32_t key;
    uint32_t unk;
    uint8_t sub[8];
} Obj;

void *func_0201a244(Obj *p, uint32_t idx) {
    uint8_t sub[12];
    Mar tmp;

    if (p->key != idx) {
        func_020095b8(sub, p->sub);
        Mar *m = &tmp;
        func_0201a2ec(m, sub, idx + 1);
        func_020532a4(p, m);
        if ((void *)&m->ptr != (void *)&p->ptr) {
            if (p->ptr != 0) {
                if (p->flag != 0) {
                    func_02052d3c(p->ptr, p->val);
                }
                func_02052c04(p->ptr);
            }
            void *np = m->ptr;
            p->ptr = np;
            uint32_t nv = m->val;
            if (np != 0) {
                p->val = nv;
                p->flag = m->flag;
                func_02052be0();
                if (p->flag != 0) {
                    func_02052d10(p->ptr, p->val);
                }
            }
            if (0) {
                func_02052be0();
                if (p->flag != 0) {
                    func_02052d10(p->ptr, p->val);
                }
            }
        }
        {
            Mar *n = &tmp;
            if (n->ptr != 0) {
                if (n->flag != 0) {
                    func_02052d3c(n->ptr, n->val);
                }
                func_02052c04(n->ptr);
            }
            func_02053290(n);
        }
        func_020059cc(sub);
        p->key = idx;
    }
    return func_02052d90(p->ptr, p->val);
}
