# Example CMake project with protocol buffer nested in subdirectory
I just spent a huge amount of time trying to figure out how to properly setup a CMake project that has nested protocol definitions.
This an example project that solves the issue for future reference.

## Resources used
- [yuikns project](https://github.com/yuikns/cmake-proto)
- [j-rivero project](https://github.com/j-rivero/multilevel_cmake_protobuf_example)
- [stackoverflow](https://stackoverflow.com/questions/38530491/undefined-reference-to-function-cmake)
- [stackoverflow](https://stackoverflow.com/questions/41430991/cmake-with-protobuf-file-in-subdirectory)
- [stackoverflow](https://stackoverflow.com/questions/18861818/cmake-conditionally-generate-protobuf-pb-hcpp-files-when-proto-files-ch)
- [stackoverflow](https://stackoverflow.com/questions/20824194/cmake-with-google-protocol-buffers)
- [stackoverflow](https://stackoverflow.com/questions/32715225/cmakelist-to-generate-cc-and-h-files-from-proto-file-under-a-specific-folder)
- [stackoverflow](https://stackoverflow.com/questions/35605286/forcing-protobuf-generate-cpp-to-complete-when-using-make-multithreaded)
- [Alex Shaver question in protobuf group](https://groups.google.com/forum/#!topic/protobuf/eow2fNDUHvc)
- [stackoverflow](https://stackoverflow.com/questions/33960999/protobuf-will-set-allocated-delete-the-allocated-object)
