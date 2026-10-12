typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

extern s32 func_ov002_0219f9b8(void *s, s32 x);
extern void func_ov002_0219feac(void *t, s32 n, u8 v, u8 *p);
extern void func_02063520(void *dst, u32 val);
extern void func_ov002_0219fde8(void *t);

typedef struct {
    u32 *data;
    s32 size;
    s32 cap;
} Vec;

typedef struct {
    u32 *data;
    s32 size;
    s32 cap;
    void *link;
    s32 cnt;
} Tmp;

void func_ov002_0219fa38(Vec *s, s32 n, u32 val) {
    Tmp t;
    u8 buf[8];
    u8 v;
    u32 *p;
    u32 *end;
    s32 r;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.link = &s->cap;
    t.cnt = 0;

    r = func_ov002_0219f9b8(s, s->size + n - s->cap);
    buf[0] = 0;
    v = buf[0];
    buf[4] = v;
    func_ov002_0219feac(&t, r, v, (u8 *)buf - 4);

    t.cnt = s->size;
    p = t.data + t.cnt;
    p = p + t.size;
    while (n != 0) {
        if (p != 0) {
            func_02063520(p, val);
        }
        t.size++;
        p++;
        n--;
    }

    end = s->data + s->size;
    while (end > s->data) {
        end--;
        p--;
        if (p != 0) {
            func_02063520(p, end);
        }
        t.cnt--;
        t.size++;
    }

    {
        s32 a = s->cap;
        s->cap = t.cap;
        t.cap = a;
    }
    {
        u32 *a = s->data;
        s->data = t.data;
        t.data = a;
    }
    {
        s32 a = s->size;
        s->size = t.size;
        t.size = a;
    }
    func_ov002_0219fde8(&t);
}
