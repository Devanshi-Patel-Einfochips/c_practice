// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g_proto_e3.proto

#include "g_proto_e3.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_g_5fproto_5fe3_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_cityData_g_5fproto_5fe3_2eproto;
namespace citiesData {
class cityDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<cityData> _instance;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr cityname_;
  ::PROTOBUF_NAMESPACE_ID::int32 pincode_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
} _cityData_default_instance_;
class stateDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<stateData> _instance;
} _stateData_default_instance_;
}  // namespace citiesData
static void InitDefaultsscc_info_cityData_g_5fproto_5fe3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::citiesData::_cityData_default_instance_;
    new (ptr) ::citiesData::cityData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::citiesData::cityData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_cityData_g_5fproto_5fe3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_cityData_g_5fproto_5fe3_2eproto}, {}};

static void InitDefaultsscc_info_stateData_g_5fproto_5fe3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::citiesData::_stateData_default_instance_;
    new (ptr) ::citiesData::stateData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::citiesData::stateData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_stateData_g_5fproto_5fe3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_stateData_g_5fproto_5fe3_2eproto}, {
      &scc_info_cityData_g_5fproto_5fe3_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_g_5fproto_5fe3_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_g_5fproto_5fe3_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_g_5fproto_5fe3_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_g_5fproto_5fe3_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::citiesData::cityData, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::citiesData::cityData, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::citiesData::cityData, statename_),
  offsetof(::citiesData::cityDataDefaultTypeInternal, cityname_),
  offsetof(::citiesData::cityDataDefaultTypeInternal, pincode_),
  offsetof(::citiesData::cityDataDefaultTypeInternal, address_),
  PROTOBUF_FIELD_OFFSET(::citiesData::cityData, example_oneof_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::citiesData::stateData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::citiesData::stateData, cities_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::citiesData::cityData)},
  { 10, -1, sizeof(::citiesData::stateData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::citiesData::_cityData_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::citiesData::_stateData_default_instance_),
};

const char descriptor_table_protodef_g_5fproto_5fe3_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020g_proto_e3.proto\022\ncitiesData\"h\n\010cityDa"
  "ta\022\021\n\tstateName\030\005 \001(\t\022\022\n\010cityname\030\001 \001(\tH"
  "\000\022\021\n\007pincode\030\002 \001(\005H\000\022\021\n\007address\030\003 \001(\tH\000B"
  "\017\n\rexample_oneof\"1\n\tstateData\022$\n\006cities\030"
  "\001 \003(\0132\024.citiesData.cityDatab\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_g_5fproto_5fe3_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_g_5fproto_5fe3_2eproto_sccs[2] = {
  &scc_info_cityData_g_5fproto_5fe3_2eproto.base,
  &scc_info_stateData_g_5fproto_5fe3_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_g_5fproto_5fe3_2eproto_once;
static bool descriptor_table_g_5fproto_5fe3_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_g_5fproto_5fe3_2eproto = {
  &descriptor_table_g_5fproto_5fe3_2eproto_initialized, descriptor_table_protodef_g_5fproto_5fe3_2eproto, "g_proto_e3.proto", 195,
  &descriptor_table_g_5fproto_5fe3_2eproto_once, descriptor_table_g_5fproto_5fe3_2eproto_sccs, descriptor_table_g_5fproto_5fe3_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_g_5fproto_5fe3_2eproto::offsets,
  file_level_metadata_g_5fproto_5fe3_2eproto, 2, file_level_enum_descriptors_g_5fproto_5fe3_2eproto, file_level_service_descriptors_g_5fproto_5fe3_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_g_5fproto_5fe3_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_g_5fproto_5fe3_2eproto), true);
namespace citiesData {

// ===================================================================

void cityData::InitAsDefaultInstance() {
  ::citiesData::_cityData_default_instance_.cityname_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::citiesData::_cityData_default_instance_.pincode_ = 0;
  ::citiesData::_cityData_default_instance_.address_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
class cityData::_Internal {
 public:
};

cityData::cityData()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:citiesData.cityData)
}
cityData::cityData(const cityData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  statename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_statename().empty()) {
    statename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.statename_);
  }
  clear_has_example_oneof();
  switch (from.example_oneof_case()) {
    case kCityname: {
      _internal_set_cityname(from._internal_cityname());
      break;
    }
    case kPincode: {
      _internal_set_pincode(from._internal_pincode());
      break;
    }
    case kAddress: {
      _internal_set_address(from._internal_address());
      break;
    }
    case EXAMPLE_ONEOF_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:citiesData.cityData)
}

void cityData::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_cityData_g_5fproto_5fe3_2eproto.base);
  statename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  clear_has_example_oneof();
}

cityData::~cityData() {
  // @@protoc_insertion_point(destructor:citiesData.cityData)
  SharedDtor();
}

void cityData::SharedDtor() {
  statename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (has_example_oneof()) {
    clear_example_oneof();
  }
}

void cityData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const cityData& cityData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_cityData_g_5fproto_5fe3_2eproto.base);
  return *internal_default_instance();
}


void cityData::clear_example_oneof() {
// @@protoc_insertion_point(one_of_clear_start:citiesData.cityData)
  switch (example_oneof_case()) {
    case kCityname: {
      example_oneof_.cityname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kPincode: {
      // No need to clear
      break;
    }
    case kAddress: {
      example_oneof_.address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case EXAMPLE_ONEOF_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = EXAMPLE_ONEOF_NOT_SET;
}


void cityData::Clear() {
// @@protoc_insertion_point(message_clear_start:citiesData.cityData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  statename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  clear_example_oneof();
  _internal_metadata_.Clear();
}

const char* cityData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string cityname = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_cityname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "citiesData.cityData.cityname"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 pincode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _internal_set_pincode(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string address = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "citiesData.cityData.address"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string stateName = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_statename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "citiesData.cityData.stateName"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* cityData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:citiesData.cityData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string cityname = 1;
  if (_internal_has_cityname()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_cityname().data(), static_cast<int>(this->_internal_cityname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "citiesData.cityData.cityname");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_cityname(), target);
  }

  // int32 pincode = 2;
  if (_internal_has_pincode()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_pincode(), target);
  }

  // string address = 3;
  if (_internal_has_address()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "citiesData.cityData.address");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_address(), target);
  }

  // string stateName = 5;
  if (this->statename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_statename().data(), static_cast<int>(this->_internal_statename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "citiesData.cityData.stateName");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_statename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:citiesData.cityData)
  return target;
}

size_t cityData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:citiesData.cityData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string stateName = 5;
  if (this->statename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_statename());
  }

  switch (example_oneof_case()) {
    // string cityname = 1;
    case kCityname: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_cityname());
      break;
    }
    // int32 pincode = 2;
    case kPincode: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_pincode());
      break;
    }
    // string address = 3;
    case kAddress: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_address());
      break;
    }
    case EXAMPLE_ONEOF_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void cityData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:citiesData.cityData)
  GOOGLE_DCHECK_NE(&from, this);
  const cityData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<cityData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:citiesData.cityData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:citiesData.cityData)
    MergeFrom(*source);
  }
}

void cityData::MergeFrom(const cityData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:citiesData.cityData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.statename().size() > 0) {

    statename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.statename_);
  }
  switch (from.example_oneof_case()) {
    case kCityname: {
      _internal_set_cityname(from._internal_cityname());
      break;
    }
    case kPincode: {
      _internal_set_pincode(from._internal_pincode());
      break;
    }
    case kAddress: {
      _internal_set_address(from._internal_address());
      break;
    }
    case EXAMPLE_ONEOF_NOT_SET: {
      break;
    }
  }
}

void cityData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:citiesData.cityData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void cityData::CopyFrom(const cityData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:citiesData.cityData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool cityData::IsInitialized() const {
  return true;
}

void cityData::InternalSwap(cityData* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  statename_.Swap(&other->statename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(example_oneof_, other->example_oneof_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata cityData::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void stateData::InitAsDefaultInstance() {
}
class stateData::_Internal {
 public:
};

stateData::stateData()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:citiesData.stateData)
}
stateData::stateData(const stateData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      cities_(from.cities_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:citiesData.stateData)
}

void stateData::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_stateData_g_5fproto_5fe3_2eproto.base);
}

stateData::~stateData() {
  // @@protoc_insertion_point(destructor:citiesData.stateData)
  SharedDtor();
}

void stateData::SharedDtor() {
}

void stateData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const stateData& stateData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_stateData_g_5fproto_5fe3_2eproto.base);
  return *internal_default_instance();
}


void stateData::Clear() {
// @@protoc_insertion_point(message_clear_start:citiesData.stateData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cities_.Clear();
  _internal_metadata_.Clear();
}

const char* stateData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .citiesData.cityData cities = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_cities(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* stateData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:citiesData.stateData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .citiesData.cityData cities = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_cities_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_cities(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:citiesData.stateData)
  return target;
}

size_t stateData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:citiesData.stateData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .citiesData.cityData cities = 1;
  total_size += 1UL * this->_internal_cities_size();
  for (const auto& msg : this->cities_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void stateData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:citiesData.stateData)
  GOOGLE_DCHECK_NE(&from, this);
  const stateData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<stateData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:citiesData.stateData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:citiesData.stateData)
    MergeFrom(*source);
  }
}

void stateData::MergeFrom(const stateData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:citiesData.stateData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cities_.MergeFrom(from.cities_);
}

void stateData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:citiesData.stateData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void stateData::CopyFrom(const stateData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:citiesData.stateData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool stateData::IsInitialized() const {
  return true;
}

void stateData::InternalSwap(stateData* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  cities_.InternalSwap(&other->cities_);
}

::PROTOBUF_NAMESPACE_ID::Metadata stateData::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace citiesData
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::citiesData::cityData* Arena::CreateMaybeMessage< ::citiesData::cityData >(Arena* arena) {
  return Arena::CreateInternal< ::citiesData::cityData >(arena);
}
template<> PROTOBUF_NOINLINE ::citiesData::stateData* Arena::CreateMaybeMessage< ::citiesData::stateData >(Arena* arena) {
  return Arena::CreateInternal< ::citiesData::stateData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
