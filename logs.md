[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF3D8C0000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF3EA50AA0 resolved=00007FFF3EA50AA0
[gloves] SetBodyGroup match=00007FFF3E4F02BC resolved=00007FFF3E224A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FFF5BAEDD30 free=00007FFF5BAEDD70
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FFF59C70000)
[schema] CreateInterface: FOUND (00007FFF59CA7560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FFF59CE6710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 0000026DF1705000
[schema] classCount: 542
[schema] classes: 0000026D63600000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF3E2D924B global=00007FFF3FFDEB28 value=0000026DF1445000 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF3E1F55D0 global=00007FFF3FE013F8 value=0000026E83365800 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF3DA115D5 global=00007FFF3FFF8160 value=0000026DF17F1400 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF3E42EE60
[integration] Hook: INSTALLED
[pawn-scan] controller=0000026E83365800 handle=0x0122800B entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E83A1D000 vtable=00007FFF3F54E258 valid=1
[integration] VALID LOCAL PAWN: 0000026E83A1D000 health=100 stage=0
[integration] NET_UPDATE_END hit #1
[integration] NET_UPDATE_END hit #2
[integration] NET_UPDATE_END hit #3
[integration] NET_UPDATE_END hit #4
[integration] NET_UPDATE_END hit #5
[pawn-scan] controller=0000026E83365800 handle=0x0122800B entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E83A1D000 vtable=00007FFF3F54E258 valid=1
[pawn-scan] globals: controller=00007FFF3FE013F8 pawn=00007FFF3FFF8160 entityList=00007FFF3FFDEB28
[pawn-scan] controllerRead=1 controller=0000000000000000 directRead=1 pawn=0000026DF17F1400 vtable=00007FFF42CB3740 validVtable=0 healthRead=1 health=622
[integration] VALID LOCAL PAWN: 0000026E897AB800 health=100 stage=7
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=00000000 expected=00000000 init=0 reapply=0 config=1 team=0 pawn=1 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBDBC9800
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBDBC9800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=1 reset=0 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBDBC9800 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBDBC9800
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB090400
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB090400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB090400 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB090400
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB091200
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB091200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB091200 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB091200
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB096600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB096600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB096600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB096600
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB097780
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB097780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB097780 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB097780
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB096980
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB096980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB096980 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB096980
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB094300
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB094300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB094300 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB094300
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB095B80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB095B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB095B80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB095B80
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB094680
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB094680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB094680 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB094680
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB096280
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB096280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB096280 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB096280
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB094680
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB094680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB094680 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB094680
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB094300
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB094300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB094300 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB094300
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB090400
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB090400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB090400 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB090400
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB096600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB096600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB096600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB096600
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB096280
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB096280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB096280 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB096280
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB094680
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB094680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB094680 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB094680
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB095B80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB095B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
[runtime] TRIGGER team=3 def=5032 current=5028 idHigh=00000000 expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB095B80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB095B80
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EBB097400
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EBB097400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EBB097400 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EBB097400
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976E580
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976E580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976E580 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976E580
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976D780
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976D780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976D780 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976D780
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976D080
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976D080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976D080 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976D080
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976C600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976C600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976C600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976C600
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976E580
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976E580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976E580 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976E580
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976C980
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976C980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976C980 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976C980
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976F700
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976F700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5032 paint=1440
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976F700 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976F700
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976F700
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976F700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976F700 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976F700
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976C600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976C600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976C600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976C600
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976D780
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976D780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976D780 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976D780
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976F380
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976F380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976F380 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976F380
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976CD00
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976CD00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976CD00 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976CD00
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976D780
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976D780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976D780 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976D780
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E5976FA80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E5976FA80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5032 paint=1440
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E5976FA80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E5976FA80
[attr] Create ENTER item=0000026E897ACF70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026E59769F80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026E59769F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5032 paint=1440
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
[runtime] TRIGGER team=2 def=5028 current=5032 idHigh=FFFFFFFF expected=00000000 init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026E59769F80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026E59769F80
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=FFFFFFFF expected=00000000 init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=FFFFFFFF expected=00000000 init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C88A80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C88A80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C88A80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C88A80
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8F700
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8F700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8F700 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8F700
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C82500
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C82500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C82500 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C82500
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C85280
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C85280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C85280 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C85280
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C86B00
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C86B00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C86B00 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C86B00
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C85D00
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C85D00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C85D00 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C85D00
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C85600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C85600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C85600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C85600
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C85280
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C85280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C85280 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C85280
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C86780
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C86780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C86780 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C86780
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8F380
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8F380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8F380 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8F380
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C82C00
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C82C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C82C00 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C82C00
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8CD00
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8CD00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8CD00 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8CD00
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8D400
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8D400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8D400 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8D400
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8C600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8C600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8C600 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8C600
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C8DE80
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C8DE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000026E897AB800 def=5028 paint=1407
[attr] Remove ENTER item=0000026E897ACF70
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000026EB8C8DE80 owned=YES
[attr] Remove RELEASE INVOKED item=0000026E897ACF70 allocation=0000026EB8C8DE80
[attr] Create ENTER item=0000026E897ACF70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000026E897ACF70 vector=0000026E897AD180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000026EB8C85600
[attr] Create SUCCESS item=0000026E897ACF70 data=0000026EB8C85600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000026E897AB800 item=0000026E897ACF70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000026E897AB800 def=5028 paint=1407
[pawn-scan] controller=0000026E8C791600 handle=0x01EE81A1 entitySystem=0000026DF1445000 chunk=0000026E0ED10008 entity=0000026E897AB800 vtable=00007FFF3F54E258 valid=1
