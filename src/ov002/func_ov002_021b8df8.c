/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vector_mode23_loop.c, externs renamed. */
/* 0x021B8DF8 (52 bytes) -O4 */
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

extern void func_ov002_021b81fc(u32 v, int mode);
void func_ov002_021b8df8(void* self, u32 arg1) {
    u32 i;
    i = 0;
    if (i < *(u32*)((u8*)self + 0x124)) {
        do {
            u32* data;
            u32 v;
            int mode;
            data = *(u32**)((u8*)self + 0x120);
            v = data[i];
            mode = 3;
            if (v == arg1) mode = 2;
            func_ov002_021b81fc(v, mode);
            i++;
        } while (i < *(u32*)((u8*)self + 0x124));
    }
}
