set -e

green_echo() {
  echo "\033[0;32m$1\033[0m"
}

green_echo "let's build swift additions"

mkdir out || true

# -emit-module -module-name MultiPlatformLibrarySwift \
# -emit-library -static \
swiftc -F . \
  -framework MultiPlatformLibrary \
  -module-name MultiPlatformLibrarySwift \
  -emit-object \
  -o out/MultiPlatformLibrarySwift.o \
  -sdk /Applications/Xcode-14.3.1-release-candidate.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator16.4.sdk \
  -target arm64-apple-ios14.1-simulator \
  MultiPlatformLibrarySwift/moko-kswift_sample_mpp-library.swift

green_echo "let's merge Kotlin Multiplatform with Swift additions"

#libtool -dynamic -v -o MultiPlatformLibrary \
#  libMultiPlatformLibrarySwift.a MultiPlatformLibrary.framework/MultiPlatformLibrary

ld -dylib -dynamic -arch arm64 -v -o out/MultiPlatformLibrary \
  -ios_simulator_version_min 14.1 \
  -syslibroot /Applications/Xcode-14.3.1-release-candidate.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator16.4.sdk \
  MultiPlatformLibrary.framework/MultiPlatformLibrary out/MultiPlatformLibrarySwift.o


#-sdk $(xcrun --show-sdk-path --sdk iphoneos) \
