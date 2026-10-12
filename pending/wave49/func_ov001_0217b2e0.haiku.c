#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x3b4];
    void *list;
} Obj;

typedef struct {
    const char *a;
    const char *b;
} Entry;

typedef struct {
    uint32_t q;
    uint32_t r;
} DivMod;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

extern int32_t func_ov000_02168768(void *list);
extern uint32_t func_02086ad4(void *object, const char *first, ...);
extern Entry *func_ov000_0216876c(void *list, int32_t idx);
extern uint32_t func_02092864(const char *text);
extern char *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const char *d);
extern void func_ov001_0217ef6c(void *self, const char *msg);
extern char *func_02092924(char *dst, const char *src);
extern void func_ov000_02165e50(const char *s, char *dst, uint32_t len, uint32_t n);

extern const char data_ov001_02190e94[];
extern const char data_ov001_02190ea0[];
extern const char data_ov001_02190e5c[];
extern const char data_ov001_02190ecc[];
extern const char data_ov001_02190ed0[];

#define DM_Q(v) ((uint32_t)(v))
#define DM_R(v) ((uint32_t)((v) >> 32))

#define PART(s, dst) do { \
    const char *_s = (s); \
    if (DM_R(func_0209a978(func_02092864(_s), 3)) != 0) { \
        uint32_t _b = func_02092864(_s); \
        uint32_t _c = func_02092864(_s); \
        (dst) = (4 - DM_R(func_0209a978(_b, 3))) + DM_Q(func_0209a978(_c * 4, 3)); \
    } else { \
        (dst) = DM_Q(func_0209a978(func_02092864(_s) * 4, 3)); \
    } \
} while (0)

int func_ov001_0217b2e0(void **self, char **out)
{
    char buf[0x40];
    Obj *obj = (Obj *)*self;
    uint32_t total = 0;
    int32_t count;
    int32_t i;
    int32_t j;
    char *p;

    count = func_ov000_02168768(obj->list);
    func_02086ad4(buf, data_ov001_02190e94, count);

    for (i = 0; i < count; i++) {
        Entry *e = func_ov000_0216876c(obj->list, i);
        uint32_t p1, p2;
        PART(e->a, p1);
        PART(e->b, p2);
        total += (p1 + 2) + p2;
    }

    total = total + func_02092864(buf) + 1;
    *out = func_ov000_021653d4(total);
    if (*out == 0) {
        func_ov000_021652a8(1, 2, 1, data_ov001_02190ea0);
        func_ov001_0217ef6c(self, data_ov001_02190e5c);
        return 1;
    }

    p = *out + func_02086ad4(*out, data_ov001_02190ecc, buf);

    for (j = 0; j < count; j++) {
        Entry *e = func_ov000_0216876c(obj->list, j);
        uint32_t pl;

        func_02092924(p, data_ov001_02190ed0);
        p++;
        func_ov000_02165e50(e->a, p, func_02092864(e->a), 2);
        PART(e->a, pl);
        p += pl;

        func_02092924(p, data_ov001_02190ed0);
        p++;
        func_ov000_02165e50(e->b, p, func_02092864(e->b), 2);
        PART(e->b, pl);
        p += pl;
    }

    return 0;
}
