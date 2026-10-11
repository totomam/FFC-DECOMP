#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} S;

extern void func_02088978(int32_t v);
extern void func_0208898c(void);
extern S data_02141874;

int32_t func_0208893c(int32_t p) {
    S *s;
    func_02088978(p);
    s = &data_02141874;
    if (p < s->b) {
        s->c++;
    }
    s = &data_02141874;
    s->b = p;
    func_0208898c();
    return s->c;
}
