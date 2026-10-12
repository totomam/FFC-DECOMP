#include "ffc/types.h"

extern uint32_t func_ov000_02165704(uint32_t h);
extern int func_ov000_021654f8(uint32_t h, char *buf, uint32_t size, uint32_t zero, void *out, uint32_t *kind);
extern int func_ov001_02185b7c(void *p, void *node, char *buf, int n);
extern void func_ov001_021859e8(void *p, void *node, char *buf, int n);
extern void func_ov001_02185b18(void *p, void *node, char *buf, int n);

typedef struct Node {
    uint32_t id;
    uint16_t a;
    uint16_t b;
    uint32_t c;
    uint16_t d;
    uint16_t e;
    uint32_t f;
    uint8_t pad14;
    uint8_t flags;
    uint8_t pad16[0x24 - 0x16];
    struct Node *next;
} Node;

typedef struct Ctx {
    uint32_t mode;
    uint8_t pad4[4];
    Node *list;
    uint8_t pad0c[0x20 - 0x0c];
    uint32_t h20;
    uint32_t pad24;
    uint32_t t28;
} Ctx;

typedef struct Out {
    uint16_t lo;
    uint16_t hi;
    uint32_t b;
} Out;

void func_ov001_02185b80(Ctx *p, int flag)
{
    uint32_t h;
    Out out;
    uint32_t kind;
    char buf[0x800];
    int n;
    Node *node;

    kind = 8;
    h = 0;
    if (!flag) {
        h = p->h20;
    }
    if (func_ov000_02165704(h)) {
        do {
            n = func_ov000_021654f8(h, buf, 0x7ff, 0, &out, &kind);
            if (n == -1) {
                return;
            }
            buf[n] = 0;
            for (node = p->list; node != 0; node = node->next) {
                int match = 0;
                if (flag && (node->flags & 8) && node->f == out.b) {
                    match = 1;
                } else if (node->id == out.b && (node->a == out.hi || flag)) {
                    match = 1;
                } else if (node->id == p->t28 && (node->flags & 2) && node->c == out.b && node->d == out.hi) {
                    match = 1;
                }
                if (match) {
                    if (flag) {
                        if (func_ov001_02185b7c(p, node, buf, n)) {
                            break;
                        }
                    } else {
                        if (p->mode == 1) {
                            func_ov001_021859e8(p, node, buf, n);
                        } else {
                            func_ov001_02185b18(p, node, buf, n);
                        }
                        break;
                    }
                }
            }
        } while (func_ov000_02165704(h));
    }
}
