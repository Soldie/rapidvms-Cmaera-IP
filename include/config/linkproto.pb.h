// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: linkproto.proto

#ifndef PROTOBUF_linkproto_2eproto__INCLUDED
#define PROTOBUF_linkproto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "linksystem.pb.h"
// @@protoc_insertion_point(includes)
class LinkCmd;
class LinkCmdDefaultTypeInternal;
extern LinkCmdDefaultTypeInternal _LinkCmd_default_instance_;
class LinkListCamReq;
class LinkListCamReqDefaultTypeInternal;
extern LinkListCamReqDefaultTypeInternal _LinkListCamReq_default_instance_;
class LinkListCamResp;
class LinkListCamRespDefaultTypeInternal;
extern LinkListCamRespDefaultTypeInternal _LinkListCamResp_default_instance_;
class LinkLoginReq;
class LinkLoginReqDefaultTypeInternal;
extern LinkLoginReqDefaultTypeInternal _LinkLoginReq_default_instance_;
class LinkLoginResp;
class LinkLoginRespDefaultTypeInternal;
extern LinkLoginRespDefaultTypeInternal _LinkLoginResp_default_instance_;

namespace protobuf_linkproto_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_linkproto_2eproto

enum LinkCmdType {
  LINK_CMD_ZERO = 0,
  LINK_CMD_LOGIN_REQ = 1,
  LINK_CMD_LOGIN_RESP = 2,
  LINK_CMD_CAM_LIST_REQ = 3,
  LINK_CMD_CAM_LIST_RESP = 4,
  LinkCmdType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LinkCmdType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LinkCmdType_IsValid(int value);
const LinkCmdType LinkCmdType_MIN = LINK_CMD_ZERO;
const LinkCmdType LinkCmdType_MAX = LINK_CMD_CAM_LIST_RESP;
const int LinkCmdType_ARRAYSIZE = LinkCmdType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LinkCmdType_descriptor();
inline const ::std::string& LinkCmdType_Name(LinkCmdType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LinkCmdType_descriptor(), value);
}
inline bool LinkCmdType_Parse(
    const ::std::string& name, LinkCmdType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LinkCmdType>(
    LinkCmdType_descriptor(), name, value);
}
// ===================================================================

class LinkCmd : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:LinkCmd) */ {
 public:
  LinkCmd();
  virtual ~LinkCmd();

  LinkCmd(const LinkCmd& from);

  inline LinkCmd& operator=(const LinkCmd& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LinkCmd& default_instance();

  enum CmdCase {
    kLoginReq = 2,
    kLoginResp = 3,
    CMD_NOT_SET = 0,
  };

  static inline const LinkCmd* internal_default_instance() {
    return reinterpret_cast<const LinkCmd*>(
               &_LinkCmd_default_instance_);
  }

  void Swap(LinkCmd* other);

  // implements Message ----------------------------------------------

  inline LinkCmd* New() const PROTOBUF_FINAL { return New(NULL); }

  LinkCmd* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LinkCmd& from);
  void MergeFrom(const LinkCmd& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LinkCmd* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .LinkCmdType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::LinkCmdType type() const;
  void set_type(::LinkCmdType value);

  // .LinkLoginReq loginReq = 2;
  bool has_loginreq() const;
  void clear_loginreq();
  static const int kLoginReqFieldNumber = 2;
  const ::LinkLoginReq& loginreq() const;
  ::LinkLoginReq* mutable_loginreq();
  ::LinkLoginReq* release_loginreq();
  void set_allocated_loginreq(::LinkLoginReq* loginreq);

  // .LinkLoginResp loginResp = 3;
  bool has_loginresp() const;
  void clear_loginresp();
  static const int kLoginRespFieldNumber = 3;
  const ::LinkLoginResp& loginresp() const;
  ::LinkLoginResp* mutable_loginresp();
  ::LinkLoginResp* release_loginresp();
  void set_allocated_loginresp(::LinkLoginResp* loginresp);

  CmdCase cmd_case() const;
  // @@protoc_insertion_point(class_scope:LinkCmd)
 private:
  void set_has_loginreq();
  void set_has_loginresp();

  inline bool has_cmd() const;
  void clear_cmd();
  inline void clear_has_cmd();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int type_;
  union CmdUnion {
    CmdUnion() {}
    ::LinkLoginReq* loginreq_;
    ::LinkLoginResp* loginresp_;
  } cmd_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct  protobuf_linkproto_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCmd

// .LinkCmdType type = 1;
inline void LinkCmd::clear_type() {
  type_ = 0;
}
inline ::LinkCmdType LinkCmd::type() const {
  // @@protoc_insertion_point(field_get:LinkCmd.type)
  return static_cast< ::LinkCmdType >(type_);
}
inline void LinkCmd::set_type(::LinkCmdType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:LinkCmd.type)
}

// .LinkLoginReq loginReq = 2;
inline bool LinkCmd::has_loginreq() const {
  return cmd_case() == kLoginReq;
}
inline void LinkCmd::set_has_loginreq() {
  _oneof_case_[0] = kLoginReq;
}
inline void LinkCmd::clear_loginreq() {
  if (has_loginreq()) {
    delete cmd_.loginreq_;
    clear_has_cmd();
  }
}
inline  const ::LinkLoginReq& LinkCmd::loginreq() const {
  // @@protoc_insertion_point(field_get:LinkCmd.loginReq)
  return has_loginreq()
      ? *cmd_.loginreq_
      : ::LinkLoginReq::default_instance();
}
inline ::LinkLoginReq* LinkCmd::mutable_loginreq() {
  if (!has_loginreq()) {
    clear_cmd();
    set_has_loginreq();
    cmd_.loginreq_ = new ::LinkLoginReq;
  }
  // @@protoc_insertion_point(field_mutable:LinkCmd.loginReq)
  return cmd_.loginreq_;
}
inline ::LinkLoginReq* LinkCmd::release_loginreq() {
  // @@protoc_insertion_point(field_release:LinkCmd.loginReq)
  if (has_loginreq()) {
    clear_has_cmd();
    ::LinkLoginReq* temp = cmd_.loginreq_;
    cmd_.loginreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_loginreq(::LinkLoginReq* loginreq) {
  clear_cmd();
  if (loginreq) {
    set_has_loginreq();
    cmd_.loginreq_ = loginreq;
  }
  // @@protoc_insertion_point(field_set_allocated:LinkCmd.loginReq)
}

// .LinkLoginResp loginResp = 3;
inline bool LinkCmd::has_loginresp() const {
  return cmd_case() == kLoginResp;
}
inline void LinkCmd::set_has_loginresp() {
  _oneof_case_[0] = kLoginResp;
}
inline void LinkCmd::clear_loginresp() {
  if (has_loginresp()) {
    delete cmd_.loginresp_;
    clear_has_cmd();
  }
}
inline  const ::LinkLoginResp& LinkCmd::loginresp() const {
  // @@protoc_insertion_point(field_get:LinkCmd.loginResp)
  return has_loginresp()
      ? *cmd_.loginresp_
      : ::LinkLoginResp::default_instance();
}
inline ::LinkLoginResp* LinkCmd::mutable_loginresp() {
  if (!has_loginresp()) {
    clear_cmd();
    set_has_loginresp();
    cmd_.loginresp_ = new ::LinkLoginResp;
  }
  // @@protoc_insertion_point(field_mutable:LinkCmd.loginResp)
  return cmd_.loginresp_;
}
inline ::LinkLoginResp* LinkCmd::release_loginresp() {
  // @@protoc_insertion_point(field_release:LinkCmd.loginResp)
  if (has_loginresp()) {
    clear_has_cmd();
    ::LinkLoginResp* temp = cmd_.loginresp_;
    cmd_.loginresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LinkCmd::set_allocated_loginresp(::LinkLoginResp* loginresp) {
  clear_cmd();
  if (loginresp) {
    set_has_loginresp();
    cmd_.loginresp_ = loginresp;
  }
  // @@protoc_insertion_point(field_set_allocated:LinkCmd.loginResp)
}

inline bool LinkCmd::has_cmd() const {
  return cmd_case() != CMD_NOT_SET;
}
inline void LinkCmd::clear_has_cmd() {
  _oneof_case_[0] = CMD_NOT_SET;
}
inline LinkCmd::CmdCase LinkCmd::cmd_case() const {
  return LinkCmd::CmdCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::LinkCmdType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LinkCmdType>() {
  return ::LinkCmdType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_linkproto_2eproto__INCLUDED
