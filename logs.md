[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF3B670000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF3C800AA0 resolved=00007FFF3C800AA0
[gloves] SetBodyGroup match=00007FFF3C2A02BC resolved=00007FFF3BFD4A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FFF5A49DD30 free=00007FFF5A49DD70
[paintkit-schema] READY offset=0x2A0 kits=1481
[paintkit-schema] READY
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FF826DD0000)
[schema] CreateInterface: FOUND (00007FF826E07560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FF826E46710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 0000051A69705000
[schema] classCount: 542
[schema] classes: 00000519DB600000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF3C08924B global=00007FFF3DD8EB28 value=0000051A6943E800 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF3BFA55D0 global=00007FFF3DBB13F8 value=0000051AFBE12600 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF3B7C15D5 global=00007FFF3DDA8160 value=0000051A697E1800 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF3C1DEE60
[integration] Hook: INSTALLED
[pawn-scan] controller=0000051AFBE12600 handle=0x00FD800B entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AFBC70000 vtable=00007FFF3D2FE258 valid=1
[integration] VALID LOCAL PAWN: 0000051AFBC70000 health=100 stage=0
[integration] NET_UPDATE_END hit #1
[integration] NET_UPDATE_END hit #2
[integration] NET_UPDATE_END hit #3
[integration] NET_UPDATE_END hit #4
[integration] NET_UPDATE_END hit #5
[pawn-scan] controller=0000051AFBE12600 handle=0x00FD800B entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AFBC70000 vtable=00007FFF3D2FE258 valid=1
[integration] VALID LOCAL PAWN: 0000051AAB282800 health=100 stage=7
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=1 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B3783AD00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B3783AD00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=1 reset=0 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B3783AD00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B3783AD00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2C080
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2C080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2C080 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2C080
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D27380
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D27380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D27380 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D27380
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D24600
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D24600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D24600 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D24600
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2CB00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2CB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2CB00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2CB00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D25400
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D25400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D25400 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D25400
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D25E80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D25E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D25E80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D25E80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D28180
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D28180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D28180 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D28180
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D24280
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D24280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D24280 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D24280
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D24600
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D24600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D24600 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D24600
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2AB80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2AB80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2AB80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2AB80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2A480
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2A480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2A480 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2A480
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2C080
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2C080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2C080 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2C080
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D25780
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D25780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D25780 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D25780
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D27700
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D27700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D27700 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D27700
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D27E00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D27E00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D27E00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D27E00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2CB00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2CB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[runtime] TRIGGER team=2 def=5030 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2CB00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2CB00
[runtime] TRIGGER team=2 def=5030 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=2 def=5030 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731B880
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731B880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731B880 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731B880
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731F400
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731F400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731F400 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731F400
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731D480
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731D480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731D480 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731D480
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731CD80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731CD80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5030 paint=1407
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731CD80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731CD80
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731A000
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731A000 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731A000
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731F400
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731F400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731F400 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731F400
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731F080
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731F080 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731F080
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731F080
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5030 paint=1407
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731F080 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731F080
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731A000
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731A000 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731A000
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731FB00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731FB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731FB00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731FB00
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731A000
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731A000 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731A000
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731A000
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5030 paint=1407
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731A000 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731A000
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731C680
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731C680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731C680 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731C680
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731CD80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731CD80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731CD80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731CD80
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731A000
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5030 paint=1407
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731A000 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731A000
[attr] Create ENTER item=0000051AAB283F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731B880
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731B880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5030 paint=1407
[runtime] TRIGGER team=3 def=5034 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731B880 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731B880
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731C300
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731C300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731C300 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731C300
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051AF731FB00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051AF731FB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051AF731FB00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051AF731FB00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B35490D80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B35490D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B35490D80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B35490D80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2A800
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2A800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2A800 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2A800
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2CE80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2CE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2CE80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2CE80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D23F00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D23F00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D23F00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D23F00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D26C80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D26C80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D26C80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D26C80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2A480
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2A480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2A480 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2A480
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D26900
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D26900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D26900 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D26900
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D28180
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D28180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D28180 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D28180
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D24280
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D24280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D24280 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D24280
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D2CB00
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D2CB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D2CB00 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D2CB00
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D26900
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D26900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D26900 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D26900
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D25400
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D25400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D25400 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D25400
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D21F80
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D21F80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=0000051AAB282800 def=5034 paint=1440
[attr] Remove ENTER item=0000051AAB283F70
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=0000051B32D21F80 owned=YES
[attr] Remove RELEASE INVOKED item=0000051AAB283F70 allocation=0000051B32D21F80
[attr] Create ENTER item=0000051AAB283F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=0000051AAB283F70 vector=0000051AAB284180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=0000051B32D25400
[attr] Create SUCCESS item=0000051AAB283F70 data=0000051B32D25400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=0000051AAB282800 item=0000051AAB283F70 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=0000051AAB282800 def=5034 paint=1440
[pawn-scan] controller=0000051AF0422600 handle=0x002981A1 entitySystem=0000051A6943E800 chunk=0000051A86D00008 entity=0000051AAB282800 vtable=00007FFF3D2FE258 valid=1
[