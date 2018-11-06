#include <node.h>

using namespace v8;

void Method(const FunctionCallbackInfo<Value>& args) {
  auto isolate = args.GetIsolate();
  auto value = String::NewFromUtf8(isolate, "world");
  args.GetReturnValue().Set(value);
}

void Init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "hello", Method);
}

NODE_MODULE(hello, Init)
