## DOWNLOAD(s)

Download & run the version appropriate for your PC:
- [Windows(x86_64)](https://github.com/natsu-anon/binary-baking-survey/releases/download/not-a-miner/baking-test-windows-x86_64.exe)
- [Linux(x86_64)](https://github.com/natsu-anon/binary-baking-survey/releases/download/not-a-miner/baking-test-linux-x86_64)
- [Linux(aarch64)](https://github.com/natsu-anon/binary-baking-survey/releases/download/not-a-miner/baking-test-linux-aarch64)

You should be able to drag it to any folder & run it.  Why is it 3MB?  I baked a 2.7 MB binary data structure into the program (see [src/godot_api.gen](https://github.com/natsu-anon/binary-baking-survey/blob/master/src/godot_api.gen), which itself is 16MB).


## Desired Output

It should look something like this. If it closes too quickly run it in the terminal.

```
testing api!
global api: OK!
Nil: OK!
bool: OK!
int: OK!
float: OK!
String: OK!
Vector2: OK!
Vector2i: OK!
Rect2: OK!
Rect2i: OK!
Vector3: OK!
Vector3i: OK!
Transform2D: OK!
Vector4: OK!
Vector4i: OK!
Plane: OK!
Quaternion: OK!
AABB: OK!
Basis: OK!
Transform3D: OK!
Projection: OK!
Color: OK!
StringName: OK!
NodePath: OK!
RID: OK!
Callable: OK!
Signal: OK!
Dictionary: OK!
Array: OK!
PackedByteArray: OK!
PackedInt32Array: OK!
PackedInt64Array: OK!
PackedFloat32Array: OK!
PackedFloat64Array: OK!
PackedStringArray: OK!
PackedVector2Array: OK!
PackedVector3Array: OK!
PackedColorArray: OK!
PackedVector4Array: OK!
AESContext: OK!
AStar2D: OK!
AStar3D: OK!
AStarGrid2D: OK!
AcceptDialog: OK!
AnimatableBody2D: OK!
AnimatableBody3D: OK!
AnimatedSprite2D: OK!
AnimatedSprite3D: OK!
AnimatedTexture: OK!
Animation: OK!
AnimationLibrary: OK!
AnimationMixer: OK!
AnimationNode: OK!
AnimationNodeAdd2: OK!
AnimationNodeAdd3: OK!
AnimationNodeAnimation: OK!
AnimationNodeBlend2: OK!
AnimationNodeBlend3: OK!
AnimationNodeBlendSpace1D: OK!
AnimationNodeBlendSpace2D: OK!
AnimationNodeBlendTree: OK!
AnimationNodeExtension: OK!
AnimationNodeOneShot: OK!
AnimationNodeOutput: OK!
AnimationNodeStateMachine: OK!
AnimationNodeStateMachinePlayback: OK!
AnimationNodeStateMachineTransition: OK!
AnimationNodeSub2: OK!
AnimationNodeSync: OK!
AnimationNodeTimeScale: OK!
AnimationNodeTimeSeek: OK!
AnimationNodeTransition: OK!
AnimationPlayer: OK!
AnimationRootNode: OK!
AnimationTree: OK!

... for 20k+ more lines...

fetch: ZIPPacker -> ZipAppend (9:enum)
fetch: ZIPPacker -> close_file (10:function)
fetch: ZIPPacker -> open (4:function)
fetch: ZIPPacker -> write_file (10:function)
fetch: ZIPPacker -> close (5:function)
fetch: ZIPPacker -> start_file (10:function)
fetch: ZIPReader -> get_files (9:function)
fetch: ZIPReader -> open (4:function)
fetch: ZIPReader -> close (5:function)
fetch: ZIPReader -> file_exists (11:function)
fetch: ZIPReader -> read_file (9:function)
BAKING SURVEY: OK!
```

If it doesn't run GREAT!  LET ME KNOW! Tell me your CPU & OS by either [leaving a comment in the original video](https://youtu.be/68vBFsGB628), [create a new issue](https://github.com/natsu-anon/binary-baking-survey/issues/new?template=i-can-t-run-it-.md), or email at natsudevgames@gmail.com
