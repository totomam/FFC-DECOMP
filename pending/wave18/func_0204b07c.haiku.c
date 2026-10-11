#include "ffc/types.h"

extern void *func_0204de50(void *p);

typedef int (*func_0204b07c_fn)(void *, void *);

int func_0204b07c(void *a, void *b) {
    func_0204b07c_fn fn = *(func_0204b07c_fn *)func_0204de50(a);
    if (fn != 0) {
        return fn(a, b);
    }
    return 0;
}
