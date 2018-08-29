#include "hello.pb.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  std::string wo("world!");
  World* w = new World();
  // there's no need to delete w, see https://stackoverflow.com/questions/33960999/protobuf-will-set-allocated-delete-the-allocated-object
  w->set_s(wo);

  std::string he("hello");
  Hello h;
  h.set_hello(he);
  h.set_allocated_world(w);

  std::string out_s;
  h.SerializeToString(&out_s);
  std::cout << out_s << '\n';

  google::protobuf::ShutdownProtobufLibrary();
  return 0;
}
