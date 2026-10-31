[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF3E6D0000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF3F860AA0 resolved=00007FFF3F860AA0
[gloves] SetBodyGroup match=00007FFF3F3002BC resolved=00007FFF3F034A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FFF8769DD30 free=00007FFF8769DD70
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FF828790000)
[schema] CreateInterface: FOUND (00007FF8287C7560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FF828806710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 000002B6E1705800
[schema] classCount: 542
[schema] classes: 000002B653600000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF3F0E924B global=00007FFF40DEEB28 value=000002B6E143E000 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF3F0055D0 global=00007FFF40C113F8 value=000002B775E69E00 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF3E8215D5 global=00007FFF40E08160 value=000002B6E17E1200 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF3F23EE60
[integration] Hook: INSTALLED
[pawn-scan] controller=000002B775E69E00 handle=0x0127000B entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B775CC9800 vtable=00007FFF4035E258 valid=1
[integration] VALID LOCAL PAWN: 000002B775CC9800 health=100 stage=0
[integration] NET_UPDATE_END hit #1
[integration] NET_UPDATE_END hit #2
[integration] NET_UPDATE_END hit #3
[integration] NET_UPDATE_END hit #4
[integration] NET_UPDATE_END hit #5
[pawn-scan] controller=000002B775E69E00 handle=0x0127000B entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B775CC9800 vtable=00007FFF4035E258 valid=1
[integration] VALID LOCAL PAWN: 000002B7769ED000 health=100 stage=7
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E20C00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E20C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E20C00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E20C00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D6280
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D6280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D6280 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D6280
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DA880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DA880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DA880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DA880
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4A00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4A00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4A00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4A00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D6980
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D6980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D6980 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D6980
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D6600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D6600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D6600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D6600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D1580
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D1580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D1580 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D1580
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DC100
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DC100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DC100 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DC100
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4680
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4680 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4680
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D2A80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D2A80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D2A80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D2A80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DEB00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DEB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DEB00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DEB00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4300
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4300 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4300
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D5100
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D5100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D5100 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D5100
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4A00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4A00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4A00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4A00
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E20C00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E20C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E20C00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E20C00
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25900
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25900 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25900
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24780
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24780 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24780
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E26000
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E26000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E26000 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E26000
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24400
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24400 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24400
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E26700
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E26700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E26700 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E26700
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25580
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25580 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25580
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25200
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25200 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25200
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25900
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25900 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25900
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25580
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25580 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25580
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E26700
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E26700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E26700 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E26700
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E27880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E27880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E27880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E27880
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E27880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E27880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E27880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E27880
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24B00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24B00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24B00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24B00
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E23D00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E23D00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E23D00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E23D00
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24080
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24080 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24080
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DF200
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DF200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DF200 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DF200
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD280
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD280 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD280
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DA880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DA880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DA880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DA880
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D2A80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D2A80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D2A80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D2A80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D8900
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D8900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D8900 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D8900
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DFC80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DFC80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DFC80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DFC80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DEB00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DEB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DEB00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DEB00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4D80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4D80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4D80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DF200
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DF200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DF200 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DF200
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DD280
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DD280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DD280 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DD280
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D5100
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D5100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D5100 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D5100
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DEB00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DEB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DEB00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DEB00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4D80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4D80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4D80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4A00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4A00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4A00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4A00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D2A80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D2A80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D2A80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D2A80
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2DE00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2DE00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2DE00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2DE00
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2BE80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2BE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2BE80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2BE80
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E25580
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E25580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E25580 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E25580
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2C580
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2C580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2C580 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2C580
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2BE80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2BE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2BE80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2BE80
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2A280
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2A280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2A280 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2A280
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2E880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2E880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2E880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2E880
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2BB00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2BB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2BB00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2BB00
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24080
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24080 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24080
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2D380
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2D380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2D380 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2D380
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E28680
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E28680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E28680 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E28680
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2F680
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2F680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2F680 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2F680
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2E880
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2E880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2E880 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2E880
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E26000
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E26000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E26000 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E26000
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E24E80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E24E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E24E80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E24E80
[attr] Create ENTER item=000002B7769EE770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B796E2C900
[attr] Create SUCCESS item=000002B7769EE770 data=000002B796E2C900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5028 paint=1407
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B796E2C900 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B796E2C900
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D2A80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D2A80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D2A80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D2A80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D6600
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D6600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D6600 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D6600
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D5F00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D5F00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D5F00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D5F00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D7400
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D7400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D7400 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D7400
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4A00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4A00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4A00 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4A00
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D6980
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D6980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D6980 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D6980
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D4680
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D4680 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D4680 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D4680
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D8900
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D8900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D8900 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D8900
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D5100
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D5100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D5100 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D5100
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D1200
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D1200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D1200 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D1200
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DCB80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DCB80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DCB80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DCB80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D0E80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D0E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D0E80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D0E80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D5100
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D5100 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D5100 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D5100
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DF200
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DF200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0DF200 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0DF200
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0D0E80
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0D0E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000002B7769ED000 def=5032 paint=1440
[attr] Remove ENTER item=000002B7769EE770
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000002B76F0D0E80 owned=YES
[attr] Remove RELEASE INVOKED item=000002B7769EE770 allocation=000002B76F0D0E80
[attr] Create ENTER item=000002B7769EE770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000002B7769EE770 vector=000002B7769EE980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000002B76F0DEB00
[attr] Create SUCCESS item=000002B7769EE770 data=000002B76F0DEB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000002B7769ED000 item=000002B7769EE770 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000002B7769ED000 def=5032 paint=1440
[pawn-scan] controller=000002B77C7A7200 handle=0x00BA01A1 entitySystem=000002B6E143E000 chunk=000002B6FECF0008 entity=000002B7769ED000 vtable=00007FFF4035E258 valid=1
