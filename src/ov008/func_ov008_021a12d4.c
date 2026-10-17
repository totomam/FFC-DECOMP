
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint32_t data_ov008_021a892c;
extern uint32_t data_020b93b8;
extern uint32_t data_ov008_021a87c8[];
extern uint32_t data_020b8e44;
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201f174(uint32_t x);
extern void func_ov005_02197cd0(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *out, uint32_t v);
extern void *func_02008d6c(void *a, void *b);
extern void *func_020059cc(void *object);
void func_ov008_021a12d4(uint8_t *p)
{
  void *r6 = 0;
  int flag;
  uint8_t buf[12];
  *((void **) (p + 0x110)) = func_0203bb94(&data_ov008_021a892c, 1, 0, 0);
  func_02056bc0(p + 0x48, *((void **) (p + 0x110)));
  ((void (*)(void *)) (*(*((uint32_t ***) (p + 0x110))))[10])(*((void **) (p + 0x110)));
  flag = 0;
  ((void (*)(void *, uint32_t)) (*(*((uint32_t ***) (p + 0x110))))[8])(*((void **) (p + 0x110)), 2);
  func_0201f174(data_020b93b8);
  func_ov005_02197cd0(p, data_ov008_021a87c8[2]);
  r6 = func_0205681c(0xc8);
  if (r6 != 0)
  {
    uint32_t v = func_020159c8(data_020b8e44, 0x215);
    func_02005988(buf, v);
    flag = 1;
    r6 = func_02008d6c(r6, buf);
  }
  func_02056bc0(p + 0x48, r6);
  if (flag != 0)
  {
    func_020059cc(buf);
  }
}
