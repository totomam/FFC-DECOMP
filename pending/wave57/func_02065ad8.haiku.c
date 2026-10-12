typedef unsigned int u32;
typedef unsigned char u8;

extern u32 func_02065a58(void *v, u32 a, u32 b);
extern void func_02065c70(void *tmp, u32 k, u32 w);
extern void func_02052be0(void);
extern void func_02052d10(u32 a, u32 b);
extern void func_02065c14(void *tmp);

typedef struct {
    u32 a;
    u32 b;
    u8 c;
} Elem;

typedef struct {
    Elem *data;
    u32 count;
    u32 cap;
} Vec;

void func_02065ad8(Vec *v, u32 n, Elem *src) {
    Vec tmp;
    u8 flag;
    u32 k;
    u32 cnt;
    Elem *dst;
    Elem *e;
    Elem *d2;

    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    flag = 0;
    k = func_02065a58(v, v->count + n - v->cap, v->count + n);
    func_02065c70(&tmp, k, flag);

    cnt = v->count;
    dst = tmp.data + cnt;
    while (n != 0) {
        if (dst != 0) {
            dst->a = src->a;
            dst->b = src->b;
            dst->c = src->c;
            if (src->a != 0) {
                func_02052be0();
                if (dst->c != 0) {
                    func_02052d10(dst->a, dst->b);
                }
            }
        }
        tmp.count++;
        dst++;
        n--;
    }

    e = v->data + cnt;
    d2 = tmp.data + cnt;
    if (e > v->data) {
        do {
            e--;
            d2--;
            if (d2 != 0) {
                d2->a = e->a;
                d2->b = e->b;
                d2->c = e->c;
                if (e->a != 0) {
                    func_02052be0();
                    if (d2->c != 0) {
                        func_02052d10(d2->a, d2->b);
                    }
                }
            }
            cnt--;
            tmp.count++;
        } while (e > v->data);
    }

    {
        u32 t;
        t = v->cap;
        v->cap = tmp.cap;
        tmp.cap = t;
    }
    {
        Elem *td;
        td = v->data;
        v->data = tmp.data;
        tmp.data = td;
    }
    {
        u32 tc;
        tc = v->count;
        v->count = tmp.count;
        tmp.count = tc;
    }
    func_02065c14(&tmp);
}
