#include "ffc/types.h"

extern void func_020224fc(void *p, uint32_t a, uint32_t b);
extern void func_02090380(void *dst, const void *src, uint32_t len);
extern void *func_020903cc(void *obj, int c, uint32_t len);
extern void func_ov003_0216e6a0(void *p);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct {
    uint16_t pad;
    uint8_t b;
    uint8_t pad2;
    Vec tmp;
} Frame;

void func_ov003_0216e5a0(Vec *p, uint32_t x) {
    Frame f;
    uint32_t *end;
    int32_t n;
    uint32_t bytes;

    f.b = 0;
    f.tmp.data = 0;
    f.tmp.count = 0;
    f.tmp.cap = 0;
    func_020224fc(&f.tmp, x, f.b);
    end = p->data + p->count;
    n = end - p->data;
    bytes = n * 4;
    func_02090380(f.tmp.data + f.tmp.count, p->data, bytes);
    func_020903cc(p->data, 0, bytes);
    f.tmp.count += n;
    p->count = 0;
    {
        uint32_t *d = p->data;
        p->data = f.tmp.data;
        f.tmp.data = d;
    }
    p->count = f.tmp.count;
    f.tmp.count = 0;
    func_ov003_0216e6a0(&f.tmp);
}
