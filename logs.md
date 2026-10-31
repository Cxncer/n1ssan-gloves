[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF44C00000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF45D90AA0 resolved=00007FFF45D90AA0
[gloves] SetBodyGroup match=00007FFF458302BC resolved=00007FFF45564A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FF82848DD30 free=00007FF82848DD70
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FF826D90000)
[schema] CreateInterface: FOUND (00007FF826DC7560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FF826E06710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 000004C1F3921000
[schema] classCount: 542
[schema] classes: 000004C165602000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF4561924B global=00007FFF4731EB28 value=000004C1F3465000 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF455355D0 global=00007FFF471413F8 value=000004C283E8B800 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF44D515D5 global=00007FFF47338160 value=000004C210383400 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF4576EE60
[integration] Hook: INSTALLED
[pawn-scan] controller=000004C283E8B800 handle=0x01DC000B entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C283CED800 vtable=00007FFF4688E258 valid=1
[integration] VALID LOCAL PAWN: 000004C283CED800 health=100 stage=0
[integration] NET_UPDATE_END hit #1
[integration] NET_UPDATE_END hit #2
[integration] NET_UPDATE_END hit #3
[integration] NET_UPDATE_END hit #4
[integration] NET_UPDATE_END hit #5
[pawn-scan] controller=000004C283E8B800 handle=0x01DC000B entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C283CED800 vtable=00007FFF4688E258 valid=1
[integration] VALID LOCAL PAWN: 000004C280F5F800 health=100 stage=7
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D2500
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D2500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D2500 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D2500
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DE900
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DE900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DE900 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DE900
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DD400
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DD400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DD400 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DD400
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DEC80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DEC80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DEC80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DEC80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DFA80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DFA80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DFA80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DFA80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BD300
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BD300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BD300 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BD300
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BEB80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BEB80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BEB80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BEB80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BB380
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BB380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BB380 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BB380
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BC180
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BC180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BC180 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BC180
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BEF00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BEF00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BEF00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BEF00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BF600
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BF600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BF600 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BF600
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BB700
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BB700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BB700 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BB700
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BE480
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BE480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BE480 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BE480
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BAC80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BAC80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BAC80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BAC80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BB000
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BB000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BB000 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BB000
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BBE00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BBE00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BBE00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BBE00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C27D6BD300
[attr] Create SUCCESS item=000004C280F60F70 data=000004C27D6BD300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C27D6BD300 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C27D6BD300
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4834780
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4834780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4834780 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4834780
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4836700
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4836700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4836700 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4836700
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4836E00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4836E00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4836E00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4836E00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4836380
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4836380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4836380 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4836380
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4837F80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4837F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4837F80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4837F80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B483A600
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B483A600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B483A600 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B483A600
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4839F00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4839F00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4839F00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4839F00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B483A600
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B483A600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B483A600 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B483A600
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4836000
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4836000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4836000 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4836000
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4837F80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4837F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4837F80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4837F80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4835900
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4835900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4835900 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4835900
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4839B80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4839B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4839B80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4839B80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4837880
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4837880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4837880 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4837880
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4835900
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4835900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4835900 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4835900
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4839B80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4839B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4839B80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4839B80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2B4836380
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2B4836380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2B4836380 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2B4836380
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D8E00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D8E00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D8E00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D8E00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D6400
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D6400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D6400 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D6400
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D9880
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D9880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D9880 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D9880
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DB800
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DB800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DB800 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DB800
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D2F80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D2F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D2F80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D2F80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D0C80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D0C80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D0C80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D0C80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DDE80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DDE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DDE80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DDE80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DDB00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DDB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DDB00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DDB00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D2C00
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D2C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D2C00 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D2C00
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D2180
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D2180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D2180 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D2180
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DC980
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DC980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DC980 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DC980
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780DEC80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780DEC80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780DEC80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780DEC80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D4100
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D4100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D4100 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D4100
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D3D80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D3D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D3D80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D3D80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D9F80
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D9F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004C280F5F800 def=5028 paint=1407
[attr] Remove ENTER item=000004C280F60F70
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004C2780D9F80 owned=YES
[attr] Remove RELEASE INVOKED item=000004C280F60F70 allocation=000004C2780D9F80
[attr] Create ENTER item=000004C280F60F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004C280F60F70 vector=000004C280F61180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004C2780D4800
[attr] Create SUCCESS item=000004C280F60F70 data=000004C2780D4800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004C280F5F800 item=000004C280F60F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004C280F5F800 def=5028 paint=1407
[pawn-scan] controller=000004C28A498800 handle=0x01DF01A1 entitySystem=000004C1F3465000 chunk=000004C210E00008 entity=000004C280F5F800 vtable=00007FFF4688E258 valid=1
