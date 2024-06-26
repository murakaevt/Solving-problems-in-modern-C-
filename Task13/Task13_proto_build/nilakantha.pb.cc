// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nilakantha.proto

#include "nilakantha.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace pi_proto {
PROTOBUF_CONSTEXPR Nilakantha::Nilakantha(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.series_length_)*/uint64_t{0u}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct NilakanthaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NilakanthaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NilakanthaDefaultTypeInternal() {}
  union {
    Nilakantha _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NilakanthaDefaultTypeInternal _Nilakantha_default_instance_;
}  // namespace pi_proto
static ::_pb::Metadata file_level_metadata_nilakantha_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_nilakantha_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_nilakantha_2eproto = nullptr;

const uint32_t TableStruct_nilakantha_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pi_proto::Nilakantha, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::pi_proto::Nilakantha, _impl_.series_length_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::pi_proto::Nilakantha)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::pi_proto::_Nilakantha_default_instance_._instance,
};

const char descriptor_table_protodef_nilakantha_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020nilakantha.proto\022\010pi_proto\"#\n\nNilakant"
  "ha\022\025\n\rseries_length\030\001 \001(\004b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_nilakantha_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_nilakantha_2eproto = {
    false, false, 73, descriptor_table_protodef_nilakantha_2eproto,
    "nilakantha.proto",
    &descriptor_table_nilakantha_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_nilakantha_2eproto::offsets,
    file_level_metadata_nilakantha_2eproto, file_level_enum_descriptors_nilakantha_2eproto,
    file_level_service_descriptors_nilakantha_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_nilakantha_2eproto_getter() {
  return &descriptor_table_nilakantha_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_nilakantha_2eproto(&descriptor_table_nilakantha_2eproto);
namespace pi_proto {

// ===================================================================

class Nilakantha::_Internal {
 public:
};

Nilakantha::Nilakantha(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:pi_proto.Nilakantha)
}
Nilakantha::Nilakantha(const Nilakantha& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Nilakantha* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.series_length_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.series_length_ = from._impl_.series_length_;
  // @@protoc_insertion_point(copy_constructor:pi_proto.Nilakantha)
}

inline void Nilakantha::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.series_length_){uint64_t{0u}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Nilakantha::~Nilakantha() {
  // @@protoc_insertion_point(destructor:pi_proto.Nilakantha)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Nilakantha::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Nilakantha::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Nilakantha::Clear() {
// @@protoc_insertion_point(message_clear_start:pi_proto.Nilakantha)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.series_length_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Nilakantha::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 series_length = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.series_length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Nilakantha::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pi_proto.Nilakantha)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 series_length = 1;
  if (this->_internal_series_length() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_series_length(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pi_proto.Nilakantha)
  return target;
}

size_t Nilakantha::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pi_proto.Nilakantha)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 series_length = 1;
  if (this->_internal_series_length() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_series_length());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Nilakantha::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Nilakantha::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Nilakantha::GetClassData() const { return &_class_data_; }


void Nilakantha::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Nilakantha*>(&to_msg);
  auto& from = static_cast<const Nilakantha&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pi_proto.Nilakantha)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_series_length() != 0) {
    _this->_internal_set_series_length(from._internal_series_length());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Nilakantha::CopyFrom(const Nilakantha& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pi_proto.Nilakantha)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Nilakantha::IsInitialized() const {
  return true;
}

void Nilakantha::InternalSwap(Nilakantha* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.series_length_, other->_impl_.series_length_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Nilakantha::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_nilakantha_2eproto_getter, &descriptor_table_nilakantha_2eproto_once,
      file_level_metadata_nilakantha_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace pi_proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pi_proto::Nilakantha*
Arena::CreateMaybeMessage< ::pi_proto::Nilakantha >(Arena* arena) {
  return Arena::CreateMessageInternal< ::pi_proto::Nilakantha >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
