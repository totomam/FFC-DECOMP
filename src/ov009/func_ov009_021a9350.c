/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t w0; } T8;
typedef struct { T8* p; } Iter;
typedef struct { T8* p; void* own; } DIter;
typedef struct { T8* data; int32_t n; } RawBuf;
typedef struct { int32_t len; int32_t cur; T8* ptr; } BufObj;
extern void func_ov009_021a5d5c(RawBuf* out, int32_t n);
extern void func_ov009_021a93b4(Iter f, Iter l, DIter b, DIter e, uint32_t* c);
extern void func_02056858(void* p);
void func_ov009_021a9350(Iter first, Iter last, uint32_t comp) {
    DIter b2; DIter e2; RawBuf raw; BufObj buf; int32_t n;
    n = last.p - first.p;
    if (n <= 20) n = 0;
    func_ov009_021a5d5c(&raw, n);
    buf.len = raw.n; buf.cur = 0; buf.ptr = raw.data;
    e2.p = raw.data + raw.n; e2.own = &buf;
    b2.p = raw.data; b2.own = &buf;
    func_ov009_021a93b4(first, last, b2, e2, &comp);
    func_02056858(buf.ptr);
}
