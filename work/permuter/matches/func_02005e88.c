
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern int32_t func_02091ad4(void *buf, int32_t size, void *fmt, uint32_t arg);
extern void func_02056858(void *p);
extern void *func_02056830(int32_t size);
extern uint32_t func_02005f1c(void *object, void *buf);
typedef struct 
{
  uint32_t flag : 1;
  uint32_t rest : 31;
  uint32_t val;
} Obj;
uint32_t func_02005e88(Obj *obj, void *fmt, uint32_t *arg)
{
  char buf[256];
  void *cur = buf;
  int32_t m;
  uint32_t new_var;
  int32_t size = 256;
  void *heap = 0;
  for (;;)
  {
    m = func_02091ad4(cur, size, fmt, *arg) + 1;
    if ((m != 0) && (m <= size))
    {
      break;
    }
    size = size << 1;
    if (heap != 0)
    {
      func_02056858(heap);
    }
    heap = func_02056830(m + size);
    cur = heap;
    new_var = m;
    size = new_var + size;
  }

  func_02005f1c(obj, cur);
  if (heap != 0)
  {
    func_02056858(heap);
  }
  new_var = obj->flag;
  if (!new_var)
  {
    uint32_t v = ((uint8_t *) obj)[0];
    return (v << 24) >> 25;
  }
  return obj->val;
}
