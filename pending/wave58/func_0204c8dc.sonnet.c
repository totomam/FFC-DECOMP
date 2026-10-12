#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    signed char *name;
    signed char *value;
} Node;

typedef struct Ctx {
    uint8_t pad[0x34];
    Node *list;
} Ctx;

extern void *func_0204de50(void *p);
extern void *func_0204de80(void *obj);
extern void *func_0204de78(void *obj);
extern uint32_t func_0204de7c(void *obj);
extern void *func_0204de70(void *obj);
extern int func_0204ad30(const signed char *s);
extern int func_0204bfd4(void *ctx, void *x, const signed char *name, uint32_t *sum, int mode);
extern int func_0204aef4(char *buf, uint32_t v);
extern int func_0204c19c(void *p, const char *s, int n);
extern int func_0204adb0(char *buf, int ch);
extern int func_0204c058(void *ctx, void *x, uint32_t a, const signed char *name, uint32_t c, void *q, int m);

extern char data_0209e5d8[];
extern char data_020b02a0[];
extern char data_020b022c[];
extern char data_020b02c0[];
extern char data_020b02c4[];

int func_0204c8dc(void *p)
{
    void *obj = func_0204de50(p);
    uint32_t sum;
    uint32_t s0;
    void *ctx;
    Ctx *x;
    void *s1;
    int len;
    char nb[12];
    Node *n;
    int i;
    int r;

    ctx = func_0204de80(obj);
    x = *(Ctx **)(*(uint8_t **)func_0204de78(obj) + 0xc);
    s0 = func_0204de7c(obj);
    s1 = func_0204de70(obj);
    sum = 0;
    n = x->list;

    if (n != 0) {
        do {
            sum = sum + func_0204ad30(n->name) + 1;
            if (n->value == 0) {
                if (func_0204bfd4(ctx, x, n->name, &sum, 2) == 0) {
                    return 3;
                }
            } else {
                sum += func_0204ad30(n->value);
            }
            if (n == x->list->prev) {
                break;
            }
            sum += 1;
            n = n->next;
        } while (n != 0);
    }

    len = func_0204aef4(nb, sum);
    if ((r = func_0204c19c(p, data_0209e5d8, 0x31)) != 0) return r;
    if ((r = func_0204c19c(p, data_020b02a0, 0x10)) != 0) return r;
    if ((r = func_0204c19c(p, nb, len)) != 0) return r;
    if ((r = func_0204c19c(p, data_020b022c, 2)) != 0) return r;
    if ((r = func_0204c19c(p, data_020b022c, 2)) != 0) return r;

    n = x->list;
    if (n != 0) do {
        i = 0;
        while (n->name[i] != 0) {
            if ((r = func_0204c19c(p, nb, func_0204adb0(nb, n->name[i]))) != 0) return r;
            i++;
        }
        if ((r = func_0204c19c(p, data_020b02c0, 1)) != 0) return r;
        if (n->value == 0) {
            r = func_0204c058(ctx, x, s0 + 0x100, n->name, *(uint32_t *)((uint8_t *)s1 + 0xc),
                              (uint8_t *)p + 0x324, 2);
            if (r != 0) return r;
        } else {
            i = 0;
            while (n->value[i] != 0) {
                if ((r = func_0204c19c(p, nb, func_0204adb0(nb, n->value[i]))) != 0) return r;
                i++;
            }
        }
        if (n == x->list->prev) break;
        if ((r = func_0204c19c(p, data_020b02c4, 1)) != 0) return r;
        n = n->next;
    } while (n != 0);
    return 0;
}
