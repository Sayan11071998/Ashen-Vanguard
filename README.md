# AshenVanguard

A third-person action combat game built with Unreal Engine. Features lock-on targeting, stamina-based combat, AI behavior trees, and combo attacks.

## Architecture

The game uses interface-based design with component composition. Characters implement interfaces for shared behavior, while components handle specific functionality.

### System Overview

```
┌─────────────────────────────────────────────────────────────┐
│                      Game Systems                           │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌──────────────┐         ┌──────────────┐                  │
│  │ MainCharacter│◄────────┤ BossCharacter│                  │
│  │  (Player)    │  Combat │   (Enemy)    │                  │
│  └──────┬───────┘         └──────┬───────┘                  │
│         │                        │                          │
│         │ Implements             │ Implements               │
│         ▼                        ▼                          │
│  ┌──────────────┐         ┌──────────────┐                  │
│  │  IMainPlayer │         │   IEnemy     │                  │
│  │  Interface   │         │  Interface   │                  │
│  └──────────────┘         └──────────────┘                  │
│         │                        │                          │
│         └────────┬───────────────┘                          │
│                  │ Both Implement                           │
│                  ▼                                          │
│          ┌──────────────┐                                   │
│          │   IFighter   │                                   │
│          │  Interface   │                                   │
│          └──────────────┘                                   │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### Component Structure

```
MainCharacter
├── StatsComponent (Health, Stamina management)
├── LockonComponent (Target acquisition & tracking)
├── CombatComponent (Attack combos & animations)
├── TraceComponent (Hit detection)
├── BlockComponent (Defensive mechanics)
└── PlayerActionsComponent (Sprint, Roll)

BossCharacter
├── StatsComponent (Health & stats)
├── CombatComponent (AI attacks)
├── LookAtPlayerComponent (Dynamic facing)
└── AIController + Behavior Tree
    ├── BTS_PlayerDistance (Service)
    └── Tasks
        ├── BTT_MeleeAttack
        ├── BTT_ChargeAttack
        └── BTT_RageAttack

```
<img width="1512" height="838" alt="Image" src="https://github.com/user-attachments/assets/85ee1e70-86a4-467c-82a5-e5cf9fd4ef5f" />

## Core Systems

### Combat System
The `TraceComponent` handles weapon collision by performing box sweeps between socket pairs on the skeletal mesh. When an attack animation plays, `ToggleTraceNotifyState` notifies enable tracing. Hit actors are stored in `TargetsToIgnore` to prevent multiple hits per swing.

### Stamina System
`StatsComponent` manages health and stamina. Actions broadcast delegates that reduce stamina, which then regenerates after a configurable delay. The UI subscribes to percentage update delegates for visual feedback.

### Lock-On System
`LockonComponent` performs a sphere sweep to find targetable enemies. When locked, it modifies character movement to strafe mode and rotates the camera toward the target each tick. Lock breaks automatically if distance exceeds threshold.

### AI Behavior
Boss enemies use a Behavior Tree with state-based logic. The `BTS_PlayerDistance` service continuously updates player distance. Tasks transition between states (Idle → Range → Charge/Melee) based on distance and attack patterns. `BTT_RageAttack` uses probability thresholds that adjust dynamically.

<img width="1906" height="715" alt="Image" src="https://github.com/user-attachments/assets/d4a1e774-2e1e-47a4-bbec-4740501d1461" />

### Animation System
- **PlayerAnimInstance**: Tracks speed, combat state, and movement direction for blend spaces
- **BossAnimInstance**: Handles charging state for special attacks
- **Animation Notifies**: Control component behavior during animations (weapon tracing, rotation)

## Implementation Details

**Interfaces:**
- `IFighter` - Combat methods shared by player and enemies
- `IMainPlayer` - Player-specific features (stamina checks, lock-on)
- `IEnemy` - Enemy selection/deselection for UI feedback

**Key Patterns:**
- Component-based architecture for modularity
- Delegate system for loose coupling between systems
- State machines for AI and combat flow
- Socket-based collision for weapon tracing
- Anim-Notifies for precise animation behavior

<img width="1142" height="407" alt="Image" src="https://github.com/user-attachments/assets/062578f9-e633-45b8-98be-446049afc2bd" />

**Dependencies:**
```cpp
PublicDependencyModuleNames.AddRange(new string[] { 
    "Core", "CoreUObject", "Engine", "InputCore", "AIModule" 
});
```

[![Watch the video](https://img.youtube.com/vi/M6XLHlR9rcY/maxresdefault.jpg)](https://youtu.be/M6XLHlR9rcY)
### [Gameplay Video](https://youtu.be/M6XLHlR9rcY)

![Image](https://github.com/user-attachments/assets/06208df4-5d4e-4fb6-9cd8-676a376535fc)

![Image](https://github.com/user-attachments/assets/737c47b5-ca5b-4998-b47b-2cab14b338b2)

![Image](https://github.com/user-attachments/assets/e634e4a8-a7c2-4d12-8a9d-edfcc4afd546)

![Image](https://github.com/user-attachments/assets/033e69f0-8f34-4426-b37f-d5cc26b67e9a)

![Image](https://github.com/user-attachments/assets/ac48c485-c0b6-4878-b6aa-9c6925beb95d)

![Image](https://github.com/user-attachments/assets/96c55990-ba69-4e13-b171-891457837c66)

![Image](https://github.com/user-attachments/assets/25924183-2088-4c89-9c0b-ac493b27e3e2)

![Image](https://github.com/user-attachments/assets/99c18f82-380e-4c74-b11c-552de58ea266)
