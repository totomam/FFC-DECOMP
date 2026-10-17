/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_flag_loop_021B496C.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

extern void* func_ov002_02198d08(void* x, void* y); extern void func_ov002_0219b8d0(void* a, void* x, void* y);
extern void func_ov002_021b3dd0(void* p); extern void* func_ov002_02198db8(void* x, void* y);
extern void func_ov002_021b101c(void* d, int two); extern void* func_ov002_02198d78(void* p);
extern void* func_ov002_021c5ad4(void* f, int a, int b); extern void func_02056bc0(void* v, void* x);
void func_ov002_021b496c(void* self) {
    u8* s = (u8*)self;
    int i;
    void* r;
    
    func_ov002_0219b8d0(func_ov002_02198d08(*(void**)(s+0xe0), *(void**)(s+0xc0)), s+0xf0, s+0xe8);
    *(u8*)(s+0x16c) = (*(void**)(s+0xf0) != 0) ? 1 : 0;
    func_ov002_021b3dd0(self);
    *(u8*)(s+0x16c) = 0;
    if (*(s32*)(s+0x164) > 0) {
        i = 0;
        do {
            func_ov002_021b101c(func_ov002_02198db8(*(void**)(s+0xe0), *(void**)(s+0x158 + i*4)), 2);
            i++;
        } while (i < *(s32*)(s+0x164));
    }
    r = func_ov002_021c5ad4(func_ov002_02198d78(*(void**)(s+0xe0)), 0x1f, 0);
    if (r != 0) func_02056bc0(s+0x14, r);
}
