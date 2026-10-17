/* From libntr libntrsystem/libraries/fnd/src/expheap.c (thumb build): func_02077ca8 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
u16 signature;
u16 attribute;
u32 blockSize;
NNSiFndExpHeapMBlockHead * pMBHeadPrev;
NNSiFndExpHeapMBlockHead * pMBHeadNext;
};
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void* ptr)
{
return (NNSiUIntPtr)ptr;
}
inline u32 GetOffsetFromPtr(const void* start, const void* end)
{
return NNSiGetUIntPtr(end) - NNSiGetUIntPtr(start);
}
inline void* AddU32ToPtr(void* ptr, u32 val)
{
return (void*)( NNSiGetUIntPtr(ptr) + val );
}
typedef struct NNSiMemRegion NNSiMemRegion;
struct NNSiMemRegion {
void * start;
void * end;
};
static inline void * GetMemPtrForMBlock (NNSiFndExpHeapMBlockHead * pMBlkHd)
{
return AddU32ToPtr(pMBlkHd, sizeof(NNSiFndExpHeapMBlockHead));
}
NNSiFndExpHeapMBlockHead * func_02077ca8 (const NNSiMemRegion * pRegion, u16 signature)
{
NNSiFndExpHeapMBlockHead * block = pRegion->start;
block->signature = signature;
block->attribute = 0;
block->blockSize = GetOffsetFromPtr(GetMemPtrForMBlock(block), pRegion->end);
block->pMBHeadPrev = 0L ;
block->pMBHeadNext = 0L ;
return block;
}
