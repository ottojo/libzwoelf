# libzwoelf
> If [liboelf](https://github.com/ottojo/liboelf) is so great, then why isn't there libzwoelf?

## Build
```console
foo@bar:~$ cd libzwoelf
foo@bar:libzwoelf$ mkdir build; cd build
foo@bar:build$ cmake ..
foo@bar:build$ make
```

## Use
```console
foo@bar:build$ ./someCompletelyNormalCProgram
Hello, World!
[1]    157663 segmentation fault (core dumped)  ./someCompletelyNormalCProgram
```

```console
foo@bar:build$ LD_PRELOAD=$PWD/libzwoelf.so ./someCompletelyNormalCProgram
Hello, World!
Successfully modified memory location 11!
```
