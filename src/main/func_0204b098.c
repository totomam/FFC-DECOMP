#include "ffc/types.h"

typedef void (*FuncPtr)(void *);

typedef struct {
    uint32_t unk0;
    FuncPtr cb;
} CbHolder;

extern CbHolder *func_0204de50(void);

void func_0204b098(void *p)
{
    CbHolder *h = func_0204de50();
    if (h->cb != 0) {
        h->cb(p);
    }
}
