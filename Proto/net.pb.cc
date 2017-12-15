// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "net.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace MydataNet {

namespace {

const ::google::protobuf::Descriptor* ConnectQuery_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectQuery_reflection_ = NULL;
const ::google::protobuf::Descriptor* ConnectReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_net_2eproto() {
  protobuf_AddDesc_net_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "net.proto");
  GOOGLE_CHECK(file != NULL);
  ConnectQuery_descriptor_ = file->message_type(0);
  static const int ConnectQuery_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectQuery, unused_),
  };
  ConnectQuery_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectQuery_descriptor_,
      ConnectQuery::default_instance_,
      ConnectQuery_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectQuery, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectQuery, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectQuery));
  ConnectReply_descriptor_ = file->message_type(1);
  static const int ConnectReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectReply, err_),
  };
  ConnectReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectReply_descriptor_,
      ConnectReply::default_instance_,
      ConnectReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectReply));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_net_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectQuery_descriptor_, &ConnectQuery::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectReply_descriptor_, &ConnectReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_net_2eproto() {
  delete ConnectQuery::default_instance_;
  delete ConnectQuery_reflection_;
  delete ConnectReply::default_instance_;
  delete ConnectReply_reflection_;
}

void protobuf_AddDesc_net_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tnet.proto\022\tMydataNet\"\036\n\014ConnectQuery\022\016"
    "\n\006unused\030\001 \002(\005\"\033\n\014ConnectReply\022\013\n\003err\030\002 "
    "\002(\005", 83);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "net.proto", &protobuf_RegisterTypes);
  ConnectQuery::default_instance_ = new ConnectQuery();
  ConnectReply::default_instance_ = new ConnectReply();
  ConnectQuery::default_instance_->InitAsDefaultInstance();
  ConnectReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_net_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_net_2eproto {
  StaticDescriptorInitializer_net_2eproto() {
    protobuf_AddDesc_net_2eproto();
  }
} static_descriptor_initializer_net_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ConnectQuery::kUnusedFieldNumber;
#endif  // !_MSC_VER

ConnectQuery::ConnectQuery()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectQuery::InitAsDefaultInstance() {
}

ConnectQuery::ConnectQuery(const ConnectQuery& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectQuery::SharedCtor() {
  _cached_size_ = 0;
  unused_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectQuery::~ConnectQuery() {
  SharedDtor();
}

void ConnectQuery::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConnectQuery::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectQuery::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectQuery_descriptor_;
}

const ConnectQuery& ConnectQuery::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_net_2eproto();
  return *default_instance_;
}

ConnectQuery* ConnectQuery::default_instance_ = NULL;

ConnectQuery* ConnectQuery::New() const {
  return new ConnectQuery;
}

void ConnectQuery::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    unused_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectQuery::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 unused = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &unused_)));
          set_has_unused();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectQuery::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 unused = 1;
  if (has_unused()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->unused(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectQuery::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 unused = 1;
  if (has_unused()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->unused(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectQuery::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 unused = 1;
    if (has_unused()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->unused());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConnectQuery::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectQuery* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectQuery*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectQuery::MergeFrom(const ConnectQuery& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_unused()) {
      set_unused(from.unused());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectQuery::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectQuery::CopyFrom(const ConnectQuery& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectQuery::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ConnectQuery::Swap(ConnectQuery* other) {
  if (other != this) {
    std::swap(unused_, other->unused_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectQuery::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectQuery_descriptor_;
  metadata.reflection = ConnectQuery_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ConnectReply::kErrFieldNumber;
#endif  // !_MSC_VER

ConnectReply::ConnectReply()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectReply::InitAsDefaultInstance() {
}

ConnectReply::ConnectReply(const ConnectReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectReply::SharedCtor() {
  _cached_size_ = 0;
  err_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectReply::~ConnectReply() {
  SharedDtor();
}

void ConnectReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConnectReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectReply_descriptor_;
}

const ConnectReply& ConnectReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_net_2eproto();
  return *default_instance_;
}

ConnectReply* ConnectReply::default_instance_ = NULL;

ConnectReply* ConnectReply::New() const {
  return new ConnectReply;
}

void ConnectReply::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    err_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 err = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &err_)));
          set_has_err();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 err = 2;
  if (has_err()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->err(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 err = 2;
  if (has_err()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->err(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 err = 2;
    if (has_err()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->err());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConnectReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectReply::MergeFrom(const ConnectReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_err()) {
      set_err(from.err());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectReply::CopyFrom(const ConnectReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectReply::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ConnectReply::Swap(ConnectReply* other) {
  if (other != this) {
    std::swap(err_, other->err_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectReply_descriptor_;
  metadata.reflection = ConnectReply_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MydataNet

// @@protoc_insertion_point(global_scope)