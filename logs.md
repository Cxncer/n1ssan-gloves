[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF3CC40000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF3DDD0AA0 resolved=00007FFF3DDD0AA0
[gloves] SetBodyGroup match=00007FFF3D8702BC resolved=00007FFF3D5A4A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FFF5A49DD30 free=00007FFF5A49DD70
[paintkit-schema] READY offset=0x2A0 kits=1481
[paintkit-schema] READY
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FF826ED0000)
[schema] CreateInterface: FOUND (00007FF826F07560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FF826F46710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 000005C71F822000
[schema] classCount: 542
[schema] classes: 000005C695602000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF3D65924B global=00007FFF3F35EB28 value=000005C71F460000 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF3D5755D0 global=00007FFF3F1813F8 value=000005C7ABE02400 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF3CD915D5 global=00007FFF3F378160 value=000005C73C283600 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF3D7AEE60
[integration] Hook: INSTALLED
[pawn-scan] controller=000005C7ABE02400 handle=0x0046000B entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7ABCD2800 vtable=00007FFF3E8CE258 valid=1
[integration] VALID LOCAL PAWN: 000005C7ABCD2800 health=100 stage=0
[integration] NET_UPDATE_END hit #1
[integration] NET_UPDATE_END hit #2
[integration] NET_UPDATE_END hit #3
[integration] NET_UPDATE_END hit #4
[integration] NET_UPDATE_END hit #5
[pawn-scan] controller=000005C7ABE02400 handle=0x0046000B entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7ABCD2800 vtable=00007FFF3E8CE258 valid=1
[pawn-scan] controller=000005C7ABE02400 handle=0x0046000B entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7ABCD2800 vtable=00007FFF3E8CE258 valid=1
[pawn-scan] globals: controller=00007FFF3F1813F8 pawn=00007FFF3F378160 entityList=00007FFF3F35EB28
[pawn-scan] controllerRead=1 controller=0000000000000000 directRead=1 pawn=000005C73C283600 vtable=00007FFF42313740 validVtable=0 healthRead=1 health=1479
[integration] VALID LOCAL PAWN: 000005C7B2998800 health=100 stage=7
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=00000000 expected=00000000 init=0 reapply=0 config=1 team=0 pawn=1 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7D24AC700
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7D24AC700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=1 reset=0 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7D24AC700 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7D24AC700
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372BF80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372BF80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372BF80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372BF80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726800
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726800 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726800
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3725D80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3725D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3725D80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3725D80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3725D80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3725D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3725D80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3725D80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726480
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726480 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726480
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3723380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3723380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3723380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3723380
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721400
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721400 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721400
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3723380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3723380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3723380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3723380
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372A380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372A380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372A380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372A380
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372BF80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372BF80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372BF80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372BF80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3724880
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3724880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3724880 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3724880
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372A000
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372A000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372A000 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372A000
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3723380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3723380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3723380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3723380
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3729900
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3729900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3729900 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3729900
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3724C00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3724C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3724C00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3724C00
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3727280
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3727280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=3 def=5032 current=5028 idHigh=00000000 expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3727280 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3727280
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7BAA2D580
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7BAA2D580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7BAA2D580 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7BAA2D580
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7BAA2D200
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7BAA2D200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7BAA2D200 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7BAA2D200
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7BAA2D200
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7BAA2D200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7BAA2D200 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7BAA2D200
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7BAA2F880
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7BAA2F880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7BAA2F880 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7BAA2F880
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3722900
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3722900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3722900 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3722900
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3728B00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3728B00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3728B00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3728B00
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3728B00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3728B00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3728B00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3728B00
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726480
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726480 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726480
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721E80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721E80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721E80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372F780
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372F780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372F780 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372F780
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721400
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721400 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721400
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3723380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3723380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3723380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3723380
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3729C80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3729C80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3729C80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3729C80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3724880
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3724880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3724880 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3724880
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372F080
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372F080 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372F080
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726800
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=2 def=5028 current=5032 idHigh=FFFFFFFF expected=00000000 init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726800 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726800
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=FFFFFFFF expected=00000000 init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=2 def=5028 current=0 idHigh=FFFFFFFF expected=00000000 init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7BAA2DC80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7BAA2DC80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7BAA2DC80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7BAA2DC80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7ECEAD980
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7ECEAD980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7ECEAD980 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7ECEAD980
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3727280
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3727280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3727280 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3727280
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721E80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721E80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721E80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372A380
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372A380 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372A380 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372A380
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372B500
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372B500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372B500 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372B500
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372B500
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372B500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372B500 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372B500
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372CA00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372CA00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372CA00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372CA00
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372F080
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372F080 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372F080
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3724C00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3724C00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3724C00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3724C00
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726B80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726B80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726B80
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372CA00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372CA00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=2 def=5028 current=5028 idHigh=00000000 expected=00000000 init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372CA00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372CA00
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7D24AC700
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7D24AC700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7D24AC700 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7D24AC700
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7ECEACF00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7ECEACF00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7ECEACF00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7ECEACF00
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7D24AC700
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7D24AC700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5028 paint=1407
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7D24AC700 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7D24AC700
[attr] Create ENTER item=000005C7B2999F70 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7D24AC700
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7D24AC700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5028 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5028 paint=1407
[runtime] TRIGGER team=3 def=5032 current=5028 idHigh=00000000 expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=0 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7D24AC700 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7D24AC700
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=3 def=5032 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7ECEAC480
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7ECEAC480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7ECEAC480 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7ECEAC480
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721E80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721E80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721E80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3725300
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3725300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3725300 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3725300
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3729580
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3729580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3729580 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3729580
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372F080
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372F080 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372F080
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3728080
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3728080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3728080 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3728080
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3725300
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3725300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3725300 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3725300
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372D480
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372D480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372D480 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372D480
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3722900
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3722900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3722900 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3722900
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372F400
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372F400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372F400 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372F400
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721E80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721E80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721E80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3726480
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3726480 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
[pawn-scan] controller=000005C7C26F0600 handle=0x00E401A1 entitySystem=000005C71F460000 chunk=000005C73CD20008 entity=000005C7B2998800 vtable=00007FFF3E8CE258 valid=1
[runtime] TRIGGER team=3 def=5032 current=5032 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3726480 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3726480
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3721E80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3721E80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C3721E80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C3721E80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372CA00
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372CA00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372CA00 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372CA00
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C372AA80
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C372AA80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000005C7B2998800 def=5032 paint=1440
[attr] Remove ENTER item=000005C7B2999F70
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000005C7C372AA80 owned=YES
[attr] Remove RELEASE INVOKED item=000005C7B2999F70 allocation=000005C7C372AA80
[attr] Create ENTER item=000005C7B2999F70 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000005C7B2999F70 vector=000005C7B299A180 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000005C7C3727280
[attr] Create SUCCESS item=000005C7B2999F70 data=000005C7C3727280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000005C7B2998800 item=000005C7B2999F70 def=5032 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000005C7B2998800 def=5032 paint=1440
