// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "nymble_token.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace Nymble {
namespace Marshal {

namespace {

const ::google::protobuf::Descriptor* Token_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Token_reflection_ = NULL;

}  // namespace


void protobuf_BuildDesc_nymble_5ftoken_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  ::google::protobuf::DescriptorPool* pool =
    ::google::protobuf::DescriptorPool::internal_generated_pool();

  const ::google::protobuf::FileDescriptor* file = pool->InternalBuildGeneratedFile(
    "\n\022nymble_token.proto\022\016Nymble.Marshal\"\025\n\005"
    "Token\022\014\n\004seed\030\001 \002(\014", 59);
  Token_descriptor_ = file->message_type(0);
  Token_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Token_descriptor_,
      &Token::default_instance(),
      Token::_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Token_descriptor_, &Token::default_instance());
}

// Force BuildDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_nymble_5ftoken_2eproto {
  StaticDescriptorInitializer_nymble_5ftoken_2eproto() {
    protobuf_BuildDesc_nymble_5ftoken_2eproto();
  }
} static_descriptor_initializer_nymble_5ftoken_2eproto_;


// ===================================================================

const Token Token::default_instance_;

const ::std::string Token::_default_seed_;
const int Token::_offsets_[1] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Token, seed_),
};

Token::Token()
  : _cached_size_(0),
    seed_(const_cast< ::std::string*>(&_default_seed_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (this == &default_instance_) {
  }
}

Token::Token(const Token& from)
  : _cached_size_(0),
    seed_(const_cast< ::std::string*>(&_default_seed_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

Token::~Token() {
  if (seed_ != &_default_seed_) {
    delete seed_;
  }
  if (this != &default_instance_) {
  }
}

const ::google::protobuf::Descriptor* Token::descriptor() {
  if (Token_descriptor_ == NULL) protobuf_BuildDesc_nymble_5ftoken_2eproto();
  return Token_descriptor_;
}

Token* Token::New() const {
  return new Token;
}

const ::google::protobuf::Descriptor* Token::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* Token::GetReflection() const {
  if (Token_reflection_ == NULL) protobuf_BuildDesc_nymble_5ftoken_2eproto();
  return Token_reflection_;
}

}  // namespace Marshal
}  // namespace Nymble
