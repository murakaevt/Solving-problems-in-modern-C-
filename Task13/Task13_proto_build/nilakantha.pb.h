// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nilakantha.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_nilakantha_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_nilakantha_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_nilakantha_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_nilakantha_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_nilakantha_2eproto;
namespace pi_proto {
class Nilakantha;
struct NilakanthaDefaultTypeInternal;
extern NilakanthaDefaultTypeInternal _Nilakantha_default_instance_;
}  // namespace pi_proto
PROTOBUF_NAMESPACE_OPEN
template<> ::pi_proto::Nilakantha* Arena::CreateMaybeMessage<::pi_proto::Nilakantha>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pi_proto {

// ===================================================================

class Nilakantha final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pi_proto.Nilakantha) */ {
 public:
  inline Nilakantha() : Nilakantha(nullptr) {}
  ~Nilakantha() override;
  explicit PROTOBUF_CONSTEXPR Nilakantha(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Nilakantha(const Nilakantha& from);
  Nilakantha(Nilakantha&& from) noexcept
    : Nilakantha() {
    *this = ::std::move(from);
  }

  inline Nilakantha& operator=(const Nilakantha& from) {
    CopyFrom(from);
    return *this;
  }
  inline Nilakantha& operator=(Nilakantha&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Nilakantha& default_instance() {
    return *internal_default_instance();
  }
  static inline const Nilakantha* internal_default_instance() {
    return reinterpret_cast<const Nilakantha*>(
               &_Nilakantha_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Nilakantha& a, Nilakantha& b) {
    a.Swap(&b);
  }
  inline void Swap(Nilakantha* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Nilakantha* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Nilakantha* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Nilakantha>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Nilakantha& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Nilakantha& from) {
    Nilakantha::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Nilakantha* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pi_proto.Nilakantha";
  }
  protected:
  explicit Nilakantha(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSeriesLengthFieldNumber = 1,
  };
  // uint64 series_length = 1;
  void clear_series_length();
  uint64_t series_length() const;
  void set_series_length(uint64_t value);
  private:
  uint64_t _internal_series_length() const;
  void _internal_set_series_length(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:pi_proto.Nilakantha)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t series_length_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_nilakantha_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Nilakantha

// uint64 series_length = 1;
inline void Nilakantha::clear_series_length() {
  _impl_.series_length_ = uint64_t{0u};
}
inline uint64_t Nilakantha::_internal_series_length() const {
  return _impl_.series_length_;
}
inline uint64_t Nilakantha::series_length() const {
  // @@protoc_insertion_point(field_get:pi_proto.Nilakantha.series_length)
  return _internal_series_length();
}
inline void Nilakantha::_internal_set_series_length(uint64_t value) {
  
  _impl_.series_length_ = value;
}
inline void Nilakantha::set_series_length(uint64_t value) {
  _internal_set_series_length(value);
  // @@protoc_insertion_point(field_set:pi_proto.Nilakantha.series_length)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace pi_proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_nilakantha_2eproto
