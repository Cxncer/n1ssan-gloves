[n1ssan-gloves] Checkpoint 1 starting
[gloves] client.dll base=00007FFF3A860000 size=0x29A2000
[gloves] CreatePaintKit match=00007FFF3B9F0AA0 resolved=00007FFF3B9F0AA0
[gloves] SetBodyGroup match=00007FFF3B4902BC resolved=00007FFF3B1C4A30
[gloves] CreatePaintKit: FOUND
[gloves] SetBodyGroup: FOUND
[gloves] allocator READY: alloc=00007FFF5962DD30 free=00007FFF5962DD70
[paintkit-schema] READY offset=0x2A0 kits=1481
[paintkit-schema] READY
[gloves] Function table: READY
[schema] Initialize requested for: client.dll
[schema] schemasystem.dll: FOUND (00007FF80C4A0000)
[schema] CreateInterface: FOUND (00007FF80C4D7560)
[schema] Probe SchemaSystem_00      result=0000000000000000 returnCode=1
[schema] Probe SchemaSystem_001     result=00007FF80C516710 returnCode=0
[schema] Interface acquired using: SchemaSystem_001
[schema] TypeScope for client.dll: 000004AA7D702800
[schema] classCount: 542
[schema] classes: 000004A9EF602000
[schema] Valid classes: 542
[schema] Valid fields: 3276
[schema] Initialization: READY
[gloves] Schema: READY
[gloves] C_EconItemView::m_AttributeList = 0x208
[gloves] CAttributeList::m_Attributes = 0x8
[n1ssan-gloves] Checkpoint 1 complete
[auto-off] Resolving client.dll globals...
[auto-off] dwEntityList               hit=00007FFF3B27924B global=00007FFF3CF7EB28 value=000004AA7D43E000 read=1
[auto-off] dwLocalPlayerController    hit=00007FFF3B1955D0 global=00007FFF3CDA13F8 value=000004AB0D306800 read=1
[auto-off] dwLocalPlayerPawn          hit=00007FFF3A9B15D5 global=00007FFF3CF98160 value=000004AA9A282E00 read=1
[auto-off] Summary: 3/3 globals resolved
[integration] Pawn globals: READY
[integration] FrameStageNotify installed slot=36 original=00007FFF3B3CEE60
[integration] Hook: INSTALLED
[pawn-scan] controller=000004AB0D306800 handle=0x0160000B entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0DACB800 vtable=00007FFF3C4EE258 valid=1
[integration] VALID LOCAL PAWN: 000004AB0DACB800 health=100 stage=0
[integration] NET_UPDATE_END(stage=7) hit #1
[integration] NET_UPDATE_END(stage=7) hit #2
[integration] NET_UPDATE_END(stage=7) hit #3
[integration] NET_UPDATE_END(stage=7) hit #4
[integration] NET_UPDATE_END(stage=7) hit #5
[pawn-scan] controller=000004AB0D306800 handle=0x0160000B entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0DACB800 vtable=00007FFF3C4EE258 valid=1
[pawn-scan] controller=000004AB0D306800 handle=0x0160000B entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0DACB800 vtable=00007FFF3C4EE258 valid=1
[integration] VALID LOCAL PAWN: 000004AB0E90E000 health=100 stage=7
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=00000000 expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=1 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB4B998800
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB4B998800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB4B998800 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB4B998800
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BA600
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BA600 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BA600 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BA600
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2F00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2F00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2F00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2F00
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BE500
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BE500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BE500 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BE500
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BB080
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BB080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BB080 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BB080
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B4B00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B4B00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B4B00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B4B00
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B4780
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B4780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B4780 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B4780
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B3280
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B3280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B3280 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B3280
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B5900
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B5900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B5900 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B5900
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B9800
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B9800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B9800 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B9800
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B0180
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B0180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B0180 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B0180
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BB080
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BB080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BB080 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BB080
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BBE80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BBE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BBE80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BBE80
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BA980
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BA980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BA980 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BA980
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B8300
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B8300 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B8300 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B8300
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B3D00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B3D00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=2 def=5030 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B3D00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B3D00
[runtime] TRIGGER team=2 def=5030 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=2 def=5030 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB0998F080
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB0998F080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB0998F080 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB0998F080
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB4B99A400
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB4B99A400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB4B99A400 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB4B99A400
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B3280
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B3280 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B3280 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B3280
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2800
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5030 paint=1407
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2800 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2800
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BB780
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BB780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BB780 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BB780
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2F00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2F00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2F00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2F00
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B4780
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B4780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B4780 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B4780
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BAD00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BAD00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5030 paint=1407
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BAD00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BAD00
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BBE80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BBE80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BBE80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BBE80
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B0180
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B0180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B0180 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B0180
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B4080
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B4080 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B4080 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B4080
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B6700
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B6700 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5030 paint=1407
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=2 def=5030 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B6700 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B6700
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BA980
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BA980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BA980 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BA980
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BDA80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BDA80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BDA80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BDA80
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B7500
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B7500 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5030 paint=1407
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B7500 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B7500
[attr] Create ENTER item=000004AB0E90F770 paint=1407 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BB400
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BB400 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5030 paint=1407 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5030 paint=1407
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=5030 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=1 team=1 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BB400 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BB400
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[runtime] TRIGGER team=3 def=5034 current=0 idHigh=FFFFFFFF expected=FFFFFFFF init=0 reapply=0 config=1 team=0 pawn=0 spawn=1 reset=1 follow=0
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=0 data=0000000000000000 owned=NO
[attr] Remove ABORT: no owned allocation
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BE880
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BE880 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BE880 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BE880
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BB780
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BB780 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BB780 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BB780
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B5580
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B5580 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B5580 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B5580
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2800
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2800 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2800
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BDA80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BDA80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BDA80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BDA80
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B3980
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B3980 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B3980 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B3980
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BE180
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BE180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BE180 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BE180
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BBB00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BBB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BBB00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BBB00
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B8D80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B8D80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B8D80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B8D80
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BC900
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BC900 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BC900 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BC900
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BC200
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BC200 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BC200 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BC200
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2800
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2800 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[runtime] TRIGGER team=3 def=5034 current=5034 idHigh=FFFFFFFF expected=FFFFFFFF init=1 reapply=0 config=0 team=0 pawn=0 spawn=0 reset=0 follow=1
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2800 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2800
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B2B80
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B2B80 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=3 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B2B80 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B2B80
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469BBB00
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469BBB00 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=2 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469BBB00 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469BBB00
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B6000
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B6000 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=1 pawn=000004AB0E90E000 def=5034 paint=1440
[attr] Remove ENTER item=000004AB0E90F770
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Remove current size=3 data=000004AB469B6000 owned=YES
[attr] Remove RELEASE INVOKED item=000004AB0E90F770 allocation=000004AB469B6000
[attr] Create ENTER item=000004AB0E90F770 paint=1440 wear=0.100000 seed=0
[attr] vector resolved item=000004AB0E90F770 vector=000004AB0E90F980 listOffset=0x208 attributesOffset=0x8
[attr] Create current size=0 data=0000000000000000 capacity=0 flags=0x0
[attr] Allocate size=792 result=000004AB469B7180
[attr] Create SUCCESS item=000004AB0E90F770 data=000004AB469B7180 size=3 capacity=11 flags=0x40000000
[gloves] APPLY OK pawn=000004AB0E90E000 item=000004AB0E90F770 def=5034 paint=1440 seed=0 wear=0.100000
[runtime] APPLY remaining=0 pawn=000004AB0E90E000 def=5034 paint=1440
[pawn-scan] controller=000004AB0A951A00 handle=0x010801A1 entitySystem=000004AA7D43E000 chunk=000004AA9AD20008 entity=000004AB0E90E000 vtable=00007FFF3C4EE258 valid=1
