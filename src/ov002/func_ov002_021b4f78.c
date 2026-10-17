/* cflags:  */
/* From arcnid/ffc-decomp src/battle/init_loop_ternary_021B4F78.c, externs renamed. */
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

extern void func_ov002_02198d08(void* x, void* y); extern void* func_ov002_0219b860(void);
extern void* func_ov002_02198db8(void* x, void* y); extern void* func_ov002_021ae5f4(void);
extern void func_ov002_021b101c(void* c, int v); extern void func_0204fa14(void* p);
extern void func_020695d0(void* p); extern void func_02056844(void* p);
extern u32 data_ov002_021d5b4c;
void* func_ov002_021b4f78(void* self) {
    u8* s = (u8*)self;
    s32* cnt;
    void* b;
    int i;
    *(u32*)s = (u32)&data_ov002_021d5b4c;
    func_ov002_02198d08(*(void**)(s+0xe0), *(void**)(s+0xc0));
    b = func_ov002_0219b860();
    i = 0;
    if (*(s32*)(s+0x164) > 0) {
        cnt = (s32*)(s + 0x164);
        do {
            void* c = func_ov002_02198db8(*(void**)(s+0xe0), *(void**)(s+0x158 + i*4));
            func_ov002_021b101c(c, (b == func_ov002_021ae5f4()) ? 4 : 3);
            i++;
        } while (i < *cnt);
    }
    func_0204fa14(s + 0x10c);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
