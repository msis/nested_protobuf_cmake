ADD_SUBDIRECTORY(proto)

set_source_files_properties(${PROTO_SRCS} ${PROTO_HDRS} PROPERTIES
  GENERATED TRUE)

SET(SRC
  ${PROTO_SRCS}
  main.cpp
)

include_directories(${Protobuf_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}/proto
)

ADD_EXECUTABLE(test ${SRC})

add_dependencies(test protobuf_compilation)

TARGET_LINK_LIBRARIES(test
  ${Protobuf_LIBRARIES}
)
