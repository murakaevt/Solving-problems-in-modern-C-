// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pi_number.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pi_5fnumber_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pi_5fnumber_2eproto

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
#include "nilakantha.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pi_5fnumber_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pi_5fnumber_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pi_5fnumber_2eproto;
namespace pi_proto {
class ContainerPi;
struct ContainerPiDefaultTypeInternal;
extern ContainerPiDefaultTypeInternal _ContainerPi_default_instance_;
class Pi;
struct PiDefaultTypeInternal;
extern PiDefaultTypeInternal _Pi_default_instance_;
}  // namespace pi_proto
PROTOBUF_NAMESPACE_OPEN
template<> ::pi_proto::ContainerPi* Arena::CreateMaybeMessage<::pi_proto::ContainerPi>(Arena*);
template<> ::pi_proto::Pi* Arena::CreateMaybeMessage<::pi_proto::Pi>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pi_proto {

// ===================================================================

class Pi final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pi_proto.Pi) */ {
 public:
  inline Pi() : Pi(nullptr) {}
  ~Pi() override;
  explicit PROTOBUF_CONSTEXPR Pi(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Pi(const Pi& from);
  Pi(Pi&& from) noexcept
    : Pi() {
    *this = ::std::move(from);
  }

  inline Pi& operator=(const Pi& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pi& operator=(Pi&& from) noexcept {
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
  static const Pi& default_instance() {
    return *internal_default_instance();
  }
  static inline const Pi* internal_default_instance() {
    return reinterpret_cast<const Pi*>(
               &_Pi_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Pi& a, Pi& b) {
    a.Swap(&b);
  }
  inline void Swap(Pi* other) {
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
  void UnsafeArenaSwap(Pi* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Pi* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Pi>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Pi& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Pi& from) {
    Pi::MergeImpl(*this, from);
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
  void InternalSwap(Pi* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pi_proto.Pi";
  }
  protected:
  explicit Pi(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNilakanthaFieldNumber = 2,
    kValueFieldNumber = 1,
    kInputNumberFieldNumber = 3,
  };
  // .pi_proto.Nilakantha nilakantha = 2;
  bool has_nilakantha() const;
  private:
  bool _internal_has_nilakantha() const;
  public:
  void clear_nilakantha();
  const ::pi_proto::Nilakantha& nilakantha() const;
  PROTOBUF_NODISCARD ::pi_proto::Nilakantha* release_nilakantha();
  ::pi_proto::Nilakantha* mutable_nilakantha();
  void set_allocated_nilakantha(::pi_proto::Nilakantha* nilakantha);
  private:
  const ::pi_proto::Nilakantha& _internal_nilakantha() const;
  ::pi_proto::Nilakantha* _internal_mutable_nilakantha();
  public:
  void unsafe_arena_set_allocated_nilakantha(
      ::pi_proto::Nilakantha* nilakantha);
  ::pi_proto::Nilakantha* unsafe_arena_release_nilakantha();

  // double value = 1;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // uint64 input_number = 3;
  void clear_input_number();
  uint64_t input_number() const;
  void set_input_number(uint64_t value);
  private:
  uint64_t _internal_input_number() const;
  void _internal_set_input_number(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:pi_proto.Pi)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::pi_proto::Nilakantha* nilakantha_;
    double value_;
    uint64_t input_number_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_pi_5fnumber_2eproto;
};
// -------------------------------------------------------------------

class ContainerPi final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pi_proto.ContainerPi) */ {
 public:
  inline ContainerPi() : ContainerPi(nullptr) {}
  ~ContainerPi() override;
  explicit PROTOBUF_CONSTEXPR ContainerPi(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ContainerPi(const ContainerPi& from);
  ContainerPi(ContainerPi&& from) noexcept
    : ContainerPi() {
    *this = ::std::move(from);
  }

  inline ContainerPi& operator=(const ContainerPi& from) {
    CopyFrom(from);
    return *this;
  }
  inline ContainerPi& operator=(ContainerPi&& from) noexcept {
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
  static const ContainerPi& default_instance() {
    return *internal_default_instance();
  }
  static inline const ContainerPi* internal_default_instance() {
    return reinterpret_cast<const ContainerPi*>(
               &_ContainerPi_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ContainerPi& a, ContainerPi& b) {
    a.Swap(&b);
  }
  inline void Swap(ContainerPi* other) {
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
  void UnsafeArenaSwap(ContainerPi* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ContainerPi* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ContainerPi>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ContainerPi& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ContainerPi& from) {
    ContainerPi::MergeImpl(*this, from);
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
  void InternalSwap(ContainerPi* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pi_proto.ContainerPi";
  }
  protected:
  explicit ContainerPi(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAllPiFieldNumber = 1,
  };
  // repeated .pi_proto.Pi all_pi = 1;
  int all_pi_size() const;
  private:
  int _internal_all_pi_size() const;
  public:
  void clear_all_pi();
  ::pi_proto::Pi* mutable_all_pi(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pi_proto::Pi >*
      mutable_all_pi();
  private:
  const ::pi_proto::Pi& _internal_all_pi(int index) const;
  ::pi_proto::Pi* _internal_add_all_pi();
  public:
  const ::pi_proto::Pi& all_pi(int index) const;
  ::pi_proto::Pi* add_all_pi();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pi_proto::Pi >&
      all_pi() const;

  // @@protoc_insertion_point(class_scope:pi_proto.ContainerPi)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pi_proto::Pi > all_pi_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_pi_5fnumber_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pi

// double value = 1;
inline void Pi::clear_value() {
  _impl_.value_ = 0;
}
inline double Pi::_internal_value() const {
  return _impl_.value_;
}
inline double Pi::value() const {
  // @@protoc_insertion_point(field_get:pi_proto.Pi.value)
  return _internal_value();
}
inline void Pi::_internal_set_value(double value) {
  
  _impl_.value_ = value;
}
inline void Pi::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:pi_proto.Pi.value)
}

// .pi_proto.Nilakantha nilakantha = 2;
inline bool Pi::_internal_has_nilakantha() const {
  return this != internal_default_instance() && _impl_.nilakantha_ != nullptr;
}
inline bool Pi::has_nilakantha() const {
  return _internal_has_nilakantha();
}
inline const ::pi_proto::Nilakantha& Pi::_internal_nilakantha() const {
  const ::pi_proto::Nilakantha* p = _impl_.nilakantha_;
  return p != nullptr ? *p : reinterpret_cast<const ::pi_proto::Nilakantha&>(
      ::pi_proto::_Nilakantha_default_instance_);
}
inline const ::pi_proto::Nilakantha& Pi::nilakantha() const {
  // @@protoc_insertion_point(field_get:pi_proto.Pi.nilakantha)
  return _internal_nilakantha();
}
inline void Pi::unsafe_arena_set_allocated_nilakantha(
    ::pi_proto::Nilakantha* nilakantha) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.nilakantha_);
  }
  _impl_.nilakantha_ = nilakantha;
  if (nilakantha) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:pi_proto.Pi.nilakantha)
}
inline ::pi_proto::Nilakantha* Pi::release_nilakantha() {
  
  ::pi_proto::Nilakantha* temp = _impl_.nilakantha_;
  _impl_.nilakantha_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::pi_proto::Nilakantha* Pi::unsafe_arena_release_nilakantha() {
  // @@protoc_insertion_point(field_release:pi_proto.Pi.nilakantha)
  
  ::pi_proto::Nilakantha* temp = _impl_.nilakantha_;
  _impl_.nilakantha_ = nullptr;
  return temp;
}
inline ::pi_proto::Nilakantha* Pi::_internal_mutable_nilakantha() {
  
  if (_impl_.nilakantha_ == nullptr) {
    auto* p = CreateMaybeMessage<::pi_proto::Nilakantha>(GetArenaForAllocation());
    _impl_.nilakantha_ = p;
  }
  return _impl_.nilakantha_;
}
inline ::pi_proto::Nilakantha* Pi::mutable_nilakantha() {
  ::pi_proto::Nilakantha* _msg = _internal_mutable_nilakantha();
  // @@protoc_insertion_point(field_mutable:pi_proto.Pi.nilakantha)
  return _msg;
}
inline void Pi::set_allocated_nilakantha(::pi_proto::Nilakantha* nilakantha) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.nilakantha_);
  }
  if (nilakantha) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(nilakantha));
    if (message_arena != submessage_arena) {
      nilakantha = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, nilakantha, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.nilakantha_ = nilakantha;
  // @@protoc_insertion_point(field_set_allocated:pi_proto.Pi.nilakantha)
}

// uint64 input_number = 3;
inline void Pi::clear_input_number() {
  _impl_.input_number_ = uint64_t{0u};
}
inline uint64_t Pi::_internal_input_number() const {
  return _impl_.input_number_;
}
inline uint64_t Pi::input_number() const {
  // @@protoc_insertion_point(field_get:pi_proto.Pi.input_number)
  return _internal_input_number();
}
inline void Pi::_internal_set_input_number(uint64_t value) {
  
  _impl_.input_number_ = value;
}
inline void Pi::set_input_number(uint64_t value) {
  _internal_set_input_number(value);
  // @@protoc_insertion_point(field_set:pi_proto.Pi.input_number)
}

// -------------------------------------------------------------------

// ContainerPi

// repeated .pi_proto.Pi all_pi = 1;
inline int ContainerPi::_internal_all_pi_size() const {
  return _impl_.all_pi_.size();
}
inline int ContainerPi::all_pi_size() const {
  return _internal_all_pi_size();
}
inline void ContainerPi::clear_all_pi() {
  _impl_.all_pi_.Clear();
}
inline ::pi_proto::Pi* ContainerPi::mutable_all_pi(int index) {
  // @@protoc_insertion_point(field_mutable:pi_proto.ContainerPi.all_pi)
  return _impl_.all_pi_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pi_proto::Pi >*
ContainerPi::mutable_all_pi() {
  // @@protoc_insertion_point(field_mutable_list:pi_proto.ContainerPi.all_pi)
  return &_impl_.all_pi_;
}
inline const ::pi_proto::Pi& ContainerPi::_internal_all_pi(int index) const {
  return _impl_.all_pi_.Get(index);
}
inline const ::pi_proto::Pi& ContainerPi::all_pi(int index) const {
  // @@protoc_insertion_point(field_get:pi_proto.ContainerPi.all_pi)
  return _internal_all_pi(index);
}
inline ::pi_proto::Pi* ContainerPi::_internal_add_all_pi() {
  return _impl_.all_pi_.Add();
}
inline ::pi_proto::Pi* ContainerPi::add_all_pi() {
  ::pi_proto::Pi* _add = _internal_add_all_pi();
  // @@protoc_insertion_point(field_add:pi_proto.ContainerPi.all_pi)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pi_proto::Pi >&
ContainerPi::all_pi() const {
  // @@protoc_insertion_point(field_list:pi_proto.ContainerPi.all_pi)
  return _impl_.all_pi_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pi_proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pi_5fnumber_2eproto
