# AshenVanguard

AshenVanguard is a third‑person 3D Unreal Engine 5 action‑RPG where you embark on an epic journey as a skilled warrior, facing off against formidable AI‑driven bosses in intense, souls‑like combat encounters that demand precision, timing, and strategic thinking.

## 📜 Game Lore
Enter the world of AshenVanguard, where ancient powers clash in brutal combat. As a lone warrior, you must master the art of combat through lock‑on targeting, stamina management, and tactical positioning. Face intelligent AI bosses that adapt their strategies—from calculated melee strikes to devastating charge attacks and mystical projectile barrages. Only through perfect timing, defensive prowess, and relentless offense can you emerge victorious from these legendary encounters.

## 🎮 Core Systems Implementation

### Player Movement & Animation System
- **Animation Blueprint Integration**: Character blueprints utilize custom Animation Blueprints with Blend Spaces for seamless animation transitions.  
- **Dynamic Animation Switching**: Blend Spaces automatically select appropriate animations based on player state and movement speed.  
- **C++ to Blueprint Bridge**: UPROPERTY and UFUNCTION macros expose C++ methods as Blueprint nodes, enabling a hybrid programming approach.  
- **Enhanced Input Actions**: Custom Input Action mappings (`IA_Lockon`, `IA_Attack`, `IA_Sprint`) handle player commands with the Enhanced Input System.  

### Lock‑On Targeting System
- **Component‑Based Architecture**: Actor Components handle lock‑on functionality independently from character logic.  
- **Custom Trace Channels**: New collision channels specifically for enemy detection with configurable collision presets.  
- **Interface‑Driven Enemy Detection**: Only actors implementing the enemy interface can be targeted, ensuring clean object identification.  
- **Dynamic Camera Control**: Camera Spring Arm adjusts rotation and positioning based on lock‑on state, with automatic player‑to‑enemy orientation using `LookAtRotation`.  
- **Observer Pattern Integration**: Delegate broadcasting system switches between normal and combat blend spaces based on lock‑on status.  

### Combat System Logic
- **Socket‑Based Weapon Tracing**: Trace Component uses weapon socket positions to create precise hit detection boxes.  
- **Animation Montage Sequencing**: Combo system cycles through attack animation montages with notification events preventing spam attacks.  
- **Root Motion Integration**: Attack animations use root motion to control player movement during combat sequences.  
- **Hit Detection Logic**: `TArray` stores multiple hit results with single‑hit‑per‑attack logic using animation notification states.  
- **Damage Interface System**: `IMainPlayer` interface allows external components to access player damage values for consistent damage application.  

### Stamina & Stats Management
- **TMap‑Based Stat Storage**: Enum‑keyed `TMap` system replaces string‑based stat references for type safety and performance.  
- **Component Communication**: Observer pattern enables Stats and Combat components to communicate without direct dependencies.  
- **Interface‑Based Data Access**: Custom interfaces handle cross‑component data queries (stamina checks between Combat and Stats components).  
- **Sprint System Logic**: Velocity‑based sprint detection prevents stamina reduction when stationary, with automatic walk fallback when stamina depletes.  
- **Regeneration System**: Timer‑based stamina regeneration with configurable delay periods.  

### Enemy AI Behavior System
- **State‑Based Behavior Trees**: Enum‑driven state machine controls enemy behavior sequences (Idle → Range → Melee → Charge → Rage).  
- **PawnSensing Integration**: Event‑driven player detection with custom filtering to ignore non‑player pawns.  
- **Blackboard State Management**: Centralized state storage with Observer Aborts for dynamic behavior switching.  
- **Distance‑Based Decision Making**: Behavior Tree Services continuously monitor player distance to trigger appropriate attack sequences.  

### Combat Attack Systems
- **Projectile Component System**: Scene component‑based projectile spawning with Particle System and Projectile Movement components.  
- **Animation Notification Triggers**: Montage notifications trigger projectile spawning at precise animation frames.  
- **Collision Event Handling**: Begin Overlap events manage projectile hit detection with automatic collision disabling to prevent double hits.  
- **Probabilistic Attack Selection**: Random threshold system determines attack type selection in range combat scenarios.  

### Advanced Enemy Mechanics
- **Charge Attack Implementation**: AI Move Requests with NavMesh pathfinding and dynamic movement speed modification during special attacks.  
- **Multi‑Weapon Trace System**: Structure‑based socket data storage enables tracing for enemies with multiple weapons.  
- **Melee Combat Logic**: Distance‑based task switching with chase mechanics and animation duration‑based task completion.  
- **Dynamic UI Integration**: Context‑sensitive enemy health bars that appear only within player proximity range.  

## 🛠️ Technical Implementation Highlights

### Component Architecture
- **Modular System Design**: Specialized components (`StatsComponent`, `CombatComponent`, `TraceComponent`) handle specific game mechanics.  
- **Interface Polymorphism**: `IFighter`, `IMainPlayer`, and `IEnemy` interfaces enable flexible character system extensions.  
- **Observer Pattern**: Event‑driven delegate system manages health updates, combat state changes, and animation notifications.  

### AI Framework
- **Custom Behavior Tree Tasks**: Specialized tasks (`BTT_MeleeAttack`, `BTT_ChargeAttack`, `BTT_RageAttack`) handle complex enemy behaviors.  
- **Service‑Based Monitoring**: Continuous distance tracking and state evaluation services.  
- **State Machine Integration**: Enum‑based state management with clean transitions and behavior isolation.  

### Performance Systems
- **Efficient Collision Detection**: Socket‑based weapon collision using optimized box traces.  
- **Memory Management**: Proper null‑checking with `IsValid()`, smart pointer usage, and automatic timer cleanup.  
- **Conditional Updates**: Component tick management with performance‑optimized update cycles.  

## 🎯 Key Features
- **Souls‑Like Combat**: Stamina‑based combat with strategic resource management and precision timing.  
- **Intelligent AI Bosses**: Advanced behavior trees with multiple attack patterns and adaptive difficulty.  
- **Fluid Controls**: Responsive third‑person movement with sprint, roll, and lock‑on mechanics.  
- **Dynamic Combat Feedback**: Socket‑based collision detection with particle effects and camera shake integration.
