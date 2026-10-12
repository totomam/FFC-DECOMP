#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int32_t idx);
extern int32_t func_ov000_021684f8(void *a, void *obj);
extern uint64_t func_ov000_02165848(void);

typedef struct {
    void *list;
    int32_t f4;
    int32_t start;
    int32_t cur;
} S;

typedef struct {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
} Obj;

int32_t func_ov000_02168348(S *s, void *a, uint64_t *out) {
    int32_t idx;
    if (s->cur == -1) {
        s->cur = s->start;
    }
    idx = s->cur + 1;
    while (idx < func_ov000_02168768(s->list)) {
        Obj *o = (Obj *)func_ov000_0216876c(s->list, idx);
        if (o->f14 == s->start && func_ov000_021684f8(a, o)) {
            s->cur = idx;
            if (o->f8 == 0) {
                return 0;
            }
            *out = func_ov000_02165848();
            return 1;
        }
        if (o->f14 < s->start) {
            return 0;
        }
        idx++;
    }
    return 0;
}
