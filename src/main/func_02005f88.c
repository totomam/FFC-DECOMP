
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern void func_02005fd4(void);
typedef struct 
{
  void *unk0;
  int32_t *arr;
  int32_t count;
} Obj;
void func_02005f88(Obj *p, int32_t n)
{
  int32_t i;
  int32_t j;
  j = (((((n & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  i = n;
  if (j < p->count)
  {
    do
    {
      p->arr[j] = -1;
      i++;
      j = i;
    }
    while (i < p->count);
  }
  p->count = n;
  func_02005fd4();
}
