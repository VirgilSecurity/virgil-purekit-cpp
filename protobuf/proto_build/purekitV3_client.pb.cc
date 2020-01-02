// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: purekitV3_client.proto

#include "purekitV3_client.pb.h"

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
namespace build {
class GetUserRecordsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetUserRecords> _instance;
} _GetUserRecords_default_instance_;
}  // namespace build
static void InitDefaultsscc_info_GetUserRecords_purekitV3_5fclient_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::build::_GetUserRecords_default_instance_;
    new (ptr) ::build::GetUserRecords();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::build::GetUserRecords::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetUserRecords_purekitV3_5fclient_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetUserRecords_purekitV3_5fclient_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_purekitV3_5fclient_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_purekitV3_5fclient_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_purekitV3_5fclient_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_purekitV3_5fclient_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::build::GetUserRecords, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::build::GetUserRecords, user_ids_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::build::GetUserRecords)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::build::_GetUserRecords_default_instance_),
};

const char descriptor_table_protodef_purekitV3_5fclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026purekitV3_client.proto\022\005build\"\"\n\016GetUs"
  "erRecords\022\020\n\010user_ids\030\001 \003(\tBB\n)com.virgi"
  "lsecurity.purekit.protobuf.buildB\025Pureki"
  "tProtosV3Clientb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_purekitV3_5fclient_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_purekitV3_5fclient_2eproto_sccs[1] = {
  &scc_info_GetUserRecords_purekitV3_5fclient_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_purekitV3_5fclient_2eproto_once;
static bool descriptor_table_purekitV3_5fclient_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_purekitV3_5fclient_2eproto = {
  &descriptor_table_purekitV3_5fclient_2eproto_initialized, descriptor_table_protodef_purekitV3_5fclient_2eproto, "purekitV3_client.proto", 143,
  &descriptor_table_purekitV3_5fclient_2eproto_once, descriptor_table_purekitV3_5fclient_2eproto_sccs, descriptor_table_purekitV3_5fclient_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_purekitV3_5fclient_2eproto::offsets,
  file_level_metadata_purekitV3_5fclient_2eproto, 1, file_level_enum_descriptors_purekitV3_5fclient_2eproto, file_level_service_descriptors_purekitV3_5fclient_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_purekitV3_5fclient_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_purekitV3_5fclient_2eproto), true);
namespace build {

// ===================================================================

void GetUserRecords::InitAsDefaultInstance() {
}
class GetUserRecords::_Internal {
 public:
};

GetUserRecords::GetUserRecords()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:build.GetUserRecords)
}
GetUserRecords::GetUserRecords(const GetUserRecords& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      user_ids_(from.user_ids_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:build.GetUserRecords)
}

void GetUserRecords::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetUserRecords_purekitV3_5fclient_2eproto.base);
}

GetUserRecords::~GetUserRecords() {
  // @@protoc_insertion_point(destructor:build.GetUserRecords)
  SharedDtor();
}

void GetUserRecords::SharedDtor() {
}

void GetUserRecords::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetUserRecords& GetUserRecords::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetUserRecords_purekitV3_5fclient_2eproto.base);
  return *internal_default_instance();
}


void GetUserRecords::Clear() {
// @@protoc_insertion_point(message_clear_start:build.GetUserRecords)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_ids_.Clear();
  _internal_metadata_.Clear();
}

const char* GetUserRecords::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string user_ids = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_user_ids();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "build.GetUserRecords.user_ids"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GetUserRecords::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:build.GetUserRecords)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string user_ids = 1;
  for (int i = 0, n = this->_internal_user_ids_size(); i < n; i++) {
    const auto& s = this->_internal_user_ids(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "build.GetUserRecords.user_ids");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:build.GetUserRecords)
  return target;
}

size_t GetUserRecords::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:build.GetUserRecords)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string user_ids = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(user_ids_.size());
  for (int i = 0, n = user_ids_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      user_ids_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetUserRecords::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:build.GetUserRecords)
  GOOGLE_DCHECK_NE(&from, this);
  const GetUserRecords* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetUserRecords>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:build.GetUserRecords)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:build.GetUserRecords)
    MergeFrom(*source);
  }
}

void GetUserRecords::MergeFrom(const GetUserRecords& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:build.GetUserRecords)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  user_ids_.MergeFrom(from.user_ids_);
}

void GetUserRecords::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:build.GetUserRecords)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetUserRecords::CopyFrom(const GetUserRecords& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:build.GetUserRecords)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetUserRecords::IsInitialized() const {
  return true;
}

void GetUserRecords::InternalSwap(GetUserRecords* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  user_ids_.InternalSwap(&other->user_ids_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetUserRecords::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace build
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::build::GetUserRecords* Arena::CreateMaybeMessage< ::build::GetUserRecords >(Arena* arena) {
  return Arena::CreateInternal< ::build::GetUserRecords >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
