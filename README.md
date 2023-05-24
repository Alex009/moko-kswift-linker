# THIS IS RESEARCH REPO

## idea

when we have compiled kotlin framework and generated swift files we can automatically merge it.

when we compile static framework:
1. compile generated swift files to object with pass of kotlin framework
2. merge object from generated swift and objects from static binary of kotlin framework
3. add generated swift interface to kotlin framework to work both - kotlin and swift parts

when we compile dynamic framework:
1. compile generated swift files to static library with pass of kotlin framework
2. compile kotlin framework AGAIN (yes, it's pain point) but now with linking of our static library
3. add generated swift interface to kotlin framework to work both - kotlin and swift parts

to improve perfomance of dynamic framework way we can cache static library if generated swift files not changed. so double framework linking will be only when generated code is changed.

maybe i find some way to link already linked dynamic framework with static library or object.

## useful links

- https://theswiftdev.com/building-static-and-dynamic-swift-libraries-using-the-swift-compiler/otool -L
- https://github.com/JetBrains/kotlin/blob/e0389a0a870766b3d595b93c24905b491d02fab9/kotlin-native/konan/konan.properties#L132
- https://github.com/JetBrains/kotlin/blob/e0389a0a870766b3d595b93c24905b491d02fab9/kotlin-native/backend.native/compiler/ir/backend.native/src/org/jetbrains/kotlin/backend/konan/Linker.kt#L127
- https://github.com/JetBrains/kotlin/blob/e0389a0a870766b3d595b93c24905b491d02fab9/native/utils/src/org/jetbrains/kotlin/konan/target/Linker.kt#L75

## research notes
```
otool -L MultiPlatformLibrary.framework/MultiPlatformLibrary 
MultiPlatformLibrary.framework/MultiPlatformLibrary:
        @rpath/MultiPlatformLibrary.framework/MultiPlatformLibrary (compatibility version 0.0.0, current version 0.0.0)
        /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1311.120.1)
        /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 1300.25.0)
        /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
        /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1860.0.0)
        /usr/lib/libresolv.9.dylib (compatibility version 1.0.0, current version 1.0.0)
        /usr/lib/libz.1.dylib (compatibility version 1.0.0, current version 1.2.11)
        /usr/lib/libbz2.1.0.dylib (compatibility version 1.0.0, current version 1.0.8)
        /usr/lib/libcompression.dylib (compatibility version 1.0.0, current version 1.0.0)
        /usr/lib/libate.dylib (compatibility version 1.0.0, current version 3.0.6)
        /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1860.0.0)
        /usr/lib/libc++abi.dylib (compatibility version 1.0.0, current version 1300.25.0)
```

```
dwarfdump --arch=arm64 MultiPlatformLibrary.framework/MultiPlatformLibrary
MultiPlatformLibrary.framework/MultiPlatformLibrary:    file format Mach-O arm64

.debug_info contents:
```

```
/Users/amikhailov/.konan/kotlin-native-prebuilt-macos-aarch64-1.6.10/bin/konanc \
        -verbose \
        -g \
        -Xprint-files \
        -ea \
        -target \
        ios_simulator_arm64 \
        -p \
        framework \
        -o \
        /Users/amikhailov/Documents/projects/moko/moko-kswift/sample/mpp-library/build/bin/iosSimulatorArm64/MultiPlatformLibraryDebugFramework/MultiPlatformLibrary.framework \
        -l \
        /Users/amikhailov/Documents/projects/moko/moko-kswift/kswift-runtime/build/classes/kotlin/iosSimulatorArm64/main/klib/kswift-runtime.klib \
        -l \
        /Users/amikhailov/.gradle/caches/modules-2/files-2.1/org.jetbrains.kotlinx/kotlinx-coroutines-core-iossimulatorarm64/1.6.0-native-mt/a04333af793c7a37bbc1735f916f3bc768e0804b/kotlinx-coroutines-core.klib \
        -l \
        /Users/amikhailov/.gradle/caches/modules-2/files-2.1/org.jetbrains.kotlinx/atomicfu-iossimulatorarm64/0.17.0/44365a68ff4f7af4560dd6f8e0afe460c4768ee5/atomicfu.klib \
        -l \
        /Users/amikhailov/.gradle/caches/modules-2/files-2.1/org.jetbrains.kotlinx/atomicfu-iossimulatorarm64/0.17.0/ae8c936fbb582556f21036706f0324afcf2195e1/atomicfu-cinterop-interop.klib \
        -Xexternal-dependencies=/var/folders/6_/kh9fm6_96xl3vmx7c7kcdlw40000gn/T/kotlin-native-external-dependencies7904076690601842881.deps \
        -Xcache-directory=/Users/amikhailov/.konan/kotlin-native-prebuilt-macos-aarch64-1.6.10/klib/cache/ios_simulator_arm64-gSTATIC \
        -Xcache-directory=/Users/amikhailov/.konan/kotlin-native-prebuilt-macos-aarch64-1.6.10/klib/cache/ios_simulator_arm64-gSTATIC/kotlinx-coroutines-core-iossimulatorarm64/1.6.0-native-mt/f72d916f5c970ab19d1c830bfced0f73a833bcdc61dbf3f20bfdcb6922ec1419 \
        -Xcache-directory=/Users/amikhailov/.konan/kotlin-native-prebuilt-macos-aarch64-1.6.10/klib/cache/ios_simulator_arm64-gSTATIC/atomicfu-iossimulatorarm64/0.17.0/5b8c6811bb00a771be8f7b29586448059a2ff923571ec851ad7ed0b5f374d7ab \
        -Xembed-bitcode-marker \
        -Xexport-library=/Users/amikhailov/Documents/projects/moko/moko-kswift/kswift-runtime/build/classes/kotlin/iosSimulatorArm64/main/klib/kswift-runtime.klib \
        -Xexport-library=/Users/amikhailov/.gradle/caches/modules-2/files-2.1/org.jetbrains.kotlinx/kotlinx-coroutines-core-iossimulatorarm64/1.6.0-native-mt/a04333af793c7a37bbc1735f916f3bc768e0804b/kotlinx-coroutines-core.klib \
        -Xmulti-platform \
        -no-endorsed-libs \
        -Xinclude=/Users/amikhailov/Documents/projects/moko/moko-kswift/sample/mpp-library/build/classes/kotlin/iosSimulatorArm64/main/klib/mpp-library.klib
```
