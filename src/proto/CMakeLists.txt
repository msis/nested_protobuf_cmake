set(PROTOBUF_GENERATE_CPP_APPEND_PATH OFF)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS
  child/world.proto
  hello.proto
)

set(Protobuf_INCLUDE_DIRS ${Protobuf_INCLUDE_DIRS} PARENT_SCOPE)
set(Protobuf_LIBRARIES ${Protobuf_LIBRARIES} PARENT_SCOPE)
set(PROTO_SRCS ${PROTO_SRCS} PARENT_SCOPE)
set(PROTO_HDRS ${PROTO_HDRS} PARENT_SCOPE)

add_custom_target(protobuf_compilation ALL DEPENDS ${PROTO_HDRS} ${PROTO_SRCS})
