// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lasso.proto

#ifndef PROTOBUF_lasso_2eproto__INCLUDED
#define PROTOBUF_lasso_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace stradslda {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lasso_2eproto();
void protobuf_AssignDesc_lasso_2eproto();
void protobuf_ShutdownFile_lasso_2eproto();

class initinfo;
class singleint;
class singlebucket;
class topicrow;
class worker2coord;

// ===================================================================

class initinfo : public ::google::protobuf::Message {
 public:
  initinfo();
  virtual ~initinfo();

  initinfo(const initinfo& from);

  inline initinfo& operator=(const initinfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const initinfo& default_instance();

  void Swap(initinfo* other);

  // implements Message ----------------------------------------------

  initinfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const initinfo& from);
  void MergeFrom(const initinfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 tokencnt = 1;
  inline bool has_tokencnt() const;
  inline void clear_tokencnt();
  static const int kTokencntFieldNumber = 1;
  inline ::google::protobuf::int32 tokencnt() const;
  inline void set_tokencnt(::google::protobuf::int32 value);

  // required int32 docnt = 2;
  inline bool has_docnt() const;
  inline void clear_docnt();
  static const int kDocntFieldNumber = 2;
  inline ::google::protobuf::int32 docnt() const;
  inline void set_docnt(::google::protobuf::int32 value);

  // required int32 wordmax = 3;
  inline bool has_wordmax() const;
  inline void clear_wordmax();
  static const int kWordmaxFieldNumber = 3;
  inline ::google::protobuf::int32 wordmax() const;
  inline void set_wordmax(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:stradslda.initinfo)
 private:
  inline void set_has_tokencnt();
  inline void clear_has_tokencnt();
  inline void set_has_docnt();
  inline void clear_has_docnt();
  inline void set_has_wordmax();
  inline void clear_has_wordmax();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 tokencnt_;
  ::google::protobuf::int32 docnt_;
  ::google::protobuf::int32 wordmax_;
  friend void  protobuf_AddDesc_lasso_2eproto();
  friend void protobuf_AssignDesc_lasso_2eproto();
  friend void protobuf_ShutdownFile_lasso_2eproto();

  void InitAsDefaultInstance();
  static initinfo* default_instance_;
};
// -------------------------------------------------------------------

class singleint : public ::google::protobuf::Message {
 public:
  singleint();
  virtual ~singleint();

  singleint(const singleint& from);

  inline singleint& operator=(const singleint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const singleint& default_instance();

  void Swap(singleint* other);

  // implements Message ----------------------------------------------

  singleint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const singleint& from);
  void MergeFrom(const singleint& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 ivalue = 1;
  inline bool has_ivalue() const;
  inline void clear_ivalue();
  static const int kIvalueFieldNumber = 1;
  inline ::google::protobuf::int32 ivalue() const;
  inline void set_ivalue(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:stradslda.singleint)
 private:
  inline void set_has_ivalue();
  inline void clear_has_ivalue();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 ivalue_;
  friend void  protobuf_AddDesc_lasso_2eproto();
  friend void protobuf_AssignDesc_lasso_2eproto();
  friend void protobuf_ShutdownFile_lasso_2eproto();

  void InitAsDefaultInstance();
  static singleint* default_instance_;
};
// -------------------------------------------------------------------

class singlebucket : public ::google::protobuf::Message {
 public:
  singlebucket();
  virtual ~singlebucket();

  singlebucket(const singlebucket& from);

  inline singlebucket& operator=(const singlebucket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const singlebucket& default_instance();

  void Swap(singlebucket* other);

  // implements Message ----------------------------------------------

  singlebucket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const singlebucket& from);
  void MergeFrom(const singlebucket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 wid = 1 [packed = true];
  inline int wid_size() const;
  inline void clear_wid();
  static const int kWidFieldNumber = 1;
  inline ::google::protobuf::int32 wid(int index) const;
  inline void set_wid(int index, ::google::protobuf::int32 value);
  inline void add_wid(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      wid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_wid();

  // @@protoc_insertion_point(class_scope:stradslda.singlebucket)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > wid_;
  mutable int _wid_cached_byte_size_;
  friend void  protobuf_AddDesc_lasso_2eproto();
  friend void protobuf_AssignDesc_lasso_2eproto();
  friend void protobuf_ShutdownFile_lasso_2eproto();

  void InitAsDefaultInstance();
  static singlebucket* default_instance_;
};
// -------------------------------------------------------------------

class topicrow : public ::google::protobuf::Message {
 public:
  topicrow();
  virtual ~topicrow();

  topicrow(const topicrow& from);

  inline topicrow& operator=(const topicrow& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const topicrow& default_instance();

  void Swap(topicrow* other);

  // implements Message ----------------------------------------------

  topicrow* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const topicrow& from);
  void MergeFrom(const topicrow& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 wordid = 1;
  inline bool has_wordid() const;
  inline void clear_wordid();
  static const int kWordidFieldNumber = 1;
  inline ::google::protobuf::int32 wordid() const;
  inline void set_wordid(::google::protobuf::int32 value);

  // repeated int32 tid = 2 [packed = true];
  inline int tid_size() const;
  inline void clear_tid();
  static const int kTidFieldNumber = 2;
  inline ::google::protobuf::int32 tid(int index) const;
  inline void set_tid(int index, ::google::protobuf::int32 value);
  inline void add_tid(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      tid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_tid();

  // repeated int32 assigned = 3 [packed = true];
  inline int assigned_size() const;
  inline void clear_assigned();
  static const int kAssignedFieldNumber = 3;
  inline ::google::protobuf::int32 assigned(int index) const;
  inline void set_assigned(int index, ::google::protobuf::int32 value);
  inline void add_assigned(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      assigned() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_assigned();

  // @@protoc_insertion_point(class_scope:stradslda.topicrow)
 private:
  inline void set_has_wordid();
  inline void clear_has_wordid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > tid_;
  mutable int _tid_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > assigned_;
  mutable int _assigned_cached_byte_size_;
  ::google::protobuf::int32 wordid_;
  friend void  protobuf_AddDesc_lasso_2eproto();
  friend void protobuf_AssignDesc_lasso_2eproto();
  friend void protobuf_ShutdownFile_lasso_2eproto();

  void InitAsDefaultInstance();
  static topicrow* default_instance_;
};
// -------------------------------------------------------------------

class worker2coord : public ::google::protobuf::Message {
 public:
  worker2coord();
  virtual ~worker2coord();

  worker2coord(const worker2coord& from);

  inline worker2coord& operator=(const worker2coord& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const worker2coord& default_instance();

  void Swap(worker2coord* other);

  // implements Message ----------------------------------------------

  worker2coord* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const worker2coord& from);
  void MergeFrom(const worker2coord& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 ringsrc = 2;
  inline bool has_ringsrc() const;
  inline void clear_ringsrc();
  static const int kRingsrcFieldNumber = 2;
  inline ::google::protobuf::int32 ringsrc() const;
  inline void set_ringsrc(::google::protobuf::int32 value);

  // optional int32 ringdst = 3;
  inline bool has_ringdst() const;
  inline void clear_ringdst();
  static const int kRingdstFieldNumber = 3;
  inline ::google::protobuf::int32 ringdst() const;
  inline void set_ringdst(::google::protobuf::int32 value);

  // repeated .stradslda.initinfo init = 4;
  inline int init_size() const;
  inline void clear_init();
  static const int kInitFieldNumber = 4;
  inline const ::stradslda::initinfo& init(int index) const;
  inline ::stradslda::initinfo* mutable_init(int index);
  inline ::stradslda::initinfo* add_init();
  inline const ::google::protobuf::RepeatedPtrField< ::stradslda::initinfo >&
      init() const;
  inline ::google::protobuf::RepeatedPtrField< ::stradslda::initinfo >*
      mutable_init();

  // repeated .stradslda.singleint singlei = 5;
  inline int singlei_size() const;
  inline void clear_singlei();
  static const int kSingleiFieldNumber = 5;
  inline const ::stradslda::singleint& singlei(int index) const;
  inline ::stradslda::singleint* mutable_singlei(int index);
  inline ::stradslda::singleint* add_singlei();
  inline const ::google::protobuf::RepeatedPtrField< ::stradslda::singleint >&
      singlei() const;
  inline ::google::protobuf::RepeatedPtrField< ::stradslda::singleint >*
      mutable_singlei();

  // repeated .stradslda.singlebucket buckets = 6;
  inline int buckets_size() const;
  inline void clear_buckets();
  static const int kBucketsFieldNumber = 6;
  inline const ::stradslda::singlebucket& buckets(int index) const;
  inline ::stradslda::singlebucket* mutable_buckets(int index);
  inline ::stradslda::singlebucket* add_buckets();
  inline const ::google::protobuf::RepeatedPtrField< ::stradslda::singlebucket >&
      buckets() const;
  inline ::google::protobuf::RepeatedPtrField< ::stradslda::singlebucket >*
      mutable_buckets();

  // repeated .stradslda.topicrow trow = 7;
  inline int trow_size() const;
  inline void clear_trow();
  static const int kTrowFieldNumber = 7;
  inline const ::stradslda::topicrow& trow(int index) const;
  inline ::stradslda::topicrow* mutable_trow(int index);
  inline ::stradslda::topicrow* add_trow();
  inline const ::google::protobuf::RepeatedPtrField< ::stradslda::topicrow >&
      trow() const;
  inline ::google::protobuf::RepeatedPtrField< ::stradslda::topicrow >*
      mutable_trow();

  // repeated int32 summary = 8;
  inline int summary_size() const;
  inline void clear_summary();
  static const int kSummaryFieldNumber = 8;
  inline ::google::protobuf::int32 summary(int index) const;
  inline void set_summary(int index, ::google::protobuf::int32 value);
  inline void add_summary(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      summary() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_summary();

  // optional double docll = 9;
  inline bool has_docll() const;
  inline void clear_docll();
  static const int kDocllFieldNumber = 9;
  inline double docll() const;
  inline void set_docll(double value);

  // optional double moll1 = 10;
  inline bool has_moll1() const;
  inline void clear_moll1();
  static const int kMoll1FieldNumber = 10;
  inline double moll1() const;
  inline void set_moll1(double value);

  // optional double moll2 = 11;
  inline bool has_moll2() const;
  inline void clear_moll2();
  static const int kMoll2FieldNumber = 11;
  inline double moll2() const;
  inline void set_moll2(double value);

  // optional int32 nzwt = 12;
  inline bool has_nzwt() const;
  inline void clear_nzwt();
  static const int kNzwtFieldNumber = 12;
  inline ::google::protobuf::int32 nzwt() const;
  inline void set_nzwt(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:stradslda.worker2coord)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_ringsrc();
  inline void clear_has_ringsrc();
  inline void set_has_ringdst();
  inline void clear_has_ringdst();
  inline void set_has_docll();
  inline void clear_has_docll();
  inline void set_has_moll1();
  inline void clear_has_moll1();
  inline void set_has_moll2();
  inline void clear_has_moll2();
  inline void set_has_nzwt();
  inline void clear_has_nzwt();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 ringsrc_;
  ::google::protobuf::RepeatedPtrField< ::stradslda::initinfo > init_;
  ::google::protobuf::RepeatedPtrField< ::stradslda::singleint > singlei_;
  ::google::protobuf::RepeatedPtrField< ::stradslda::singlebucket > buckets_;
  ::google::protobuf::RepeatedPtrField< ::stradslda::topicrow > trow_;
  ::google::protobuf::int32 ringdst_;
  ::google::protobuf::int32 nzwt_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > summary_;
  double docll_;
  double moll1_;
  double moll2_;
  friend void  protobuf_AddDesc_lasso_2eproto();
  friend void protobuf_AssignDesc_lasso_2eproto();
  friend void protobuf_ShutdownFile_lasso_2eproto();

  void InitAsDefaultInstance();
  static worker2coord* default_instance_;
};
// ===================================================================


// ===================================================================

// initinfo

// required int32 tokencnt = 1;
inline bool initinfo::has_tokencnt() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void initinfo::set_has_tokencnt() {
  _has_bits_[0] |= 0x00000001u;
}
inline void initinfo::clear_has_tokencnt() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void initinfo::clear_tokencnt() {
  tokencnt_ = 0;
  clear_has_tokencnt();
}
inline ::google::protobuf::int32 initinfo::tokencnt() const {
  // @@protoc_insertion_point(field_get:stradslda.initinfo.tokencnt)
  return tokencnt_;
}
inline void initinfo::set_tokencnt(::google::protobuf::int32 value) {
  set_has_tokencnt();
  tokencnt_ = value;
  // @@protoc_insertion_point(field_set:stradslda.initinfo.tokencnt)
}

// required int32 docnt = 2;
inline bool initinfo::has_docnt() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void initinfo::set_has_docnt() {
  _has_bits_[0] |= 0x00000002u;
}
inline void initinfo::clear_has_docnt() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void initinfo::clear_docnt() {
  docnt_ = 0;
  clear_has_docnt();
}
inline ::google::protobuf::int32 initinfo::docnt() const {
  // @@protoc_insertion_point(field_get:stradslda.initinfo.docnt)
  return docnt_;
}
inline void initinfo::set_docnt(::google::protobuf::int32 value) {
  set_has_docnt();
  docnt_ = value;
  // @@protoc_insertion_point(field_set:stradslda.initinfo.docnt)
}

// required int32 wordmax = 3;
inline bool initinfo::has_wordmax() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void initinfo::set_has_wordmax() {
  _has_bits_[0] |= 0x00000004u;
}
inline void initinfo::clear_has_wordmax() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void initinfo::clear_wordmax() {
  wordmax_ = 0;
  clear_has_wordmax();
}
inline ::google::protobuf::int32 initinfo::wordmax() const {
  // @@protoc_insertion_point(field_get:stradslda.initinfo.wordmax)
  return wordmax_;
}
inline void initinfo::set_wordmax(::google::protobuf::int32 value) {
  set_has_wordmax();
  wordmax_ = value;
  // @@protoc_insertion_point(field_set:stradslda.initinfo.wordmax)
}

// -------------------------------------------------------------------

// singleint

// required int32 ivalue = 1;
inline bool singleint::has_ivalue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void singleint::set_has_ivalue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void singleint::clear_has_ivalue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void singleint::clear_ivalue() {
  ivalue_ = 0;
  clear_has_ivalue();
}
inline ::google::protobuf::int32 singleint::ivalue() const {
  // @@protoc_insertion_point(field_get:stradslda.singleint.ivalue)
  return ivalue_;
}
inline void singleint::set_ivalue(::google::protobuf::int32 value) {
  set_has_ivalue();
  ivalue_ = value;
  // @@protoc_insertion_point(field_set:stradslda.singleint.ivalue)
}

// -------------------------------------------------------------------

// singlebucket

// repeated int32 wid = 1 [packed = true];
inline int singlebucket::wid_size() const {
  return wid_.size();
}
inline void singlebucket::clear_wid() {
  wid_.Clear();
}
inline ::google::protobuf::int32 singlebucket::wid(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.singlebucket.wid)
  return wid_.Get(index);
}
inline void singlebucket::set_wid(int index, ::google::protobuf::int32 value) {
  wid_.Set(index, value);
  // @@protoc_insertion_point(field_set:stradslda.singlebucket.wid)
}
inline void singlebucket::add_wid(::google::protobuf::int32 value) {
  wid_.Add(value);
  // @@protoc_insertion_point(field_add:stradslda.singlebucket.wid)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
singlebucket::wid() const {
  // @@protoc_insertion_point(field_list:stradslda.singlebucket.wid)
  return wid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
singlebucket::mutable_wid() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.singlebucket.wid)
  return &wid_;
}

// -------------------------------------------------------------------

// topicrow

// optional int32 wordid = 1;
inline bool topicrow::has_wordid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void topicrow::set_has_wordid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void topicrow::clear_has_wordid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void topicrow::clear_wordid() {
  wordid_ = 0;
  clear_has_wordid();
}
inline ::google::protobuf::int32 topicrow::wordid() const {
  // @@protoc_insertion_point(field_get:stradslda.topicrow.wordid)
  return wordid_;
}
inline void topicrow::set_wordid(::google::protobuf::int32 value) {
  set_has_wordid();
  wordid_ = value;
  // @@protoc_insertion_point(field_set:stradslda.topicrow.wordid)
}

// repeated int32 tid = 2 [packed = true];
inline int topicrow::tid_size() const {
  return tid_.size();
}
inline void topicrow::clear_tid() {
  tid_.Clear();
}
inline ::google::protobuf::int32 topicrow::tid(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.topicrow.tid)
  return tid_.Get(index);
}
inline void topicrow::set_tid(int index, ::google::protobuf::int32 value) {
  tid_.Set(index, value);
  // @@protoc_insertion_point(field_set:stradslda.topicrow.tid)
}
inline void topicrow::add_tid(::google::protobuf::int32 value) {
  tid_.Add(value);
  // @@protoc_insertion_point(field_add:stradslda.topicrow.tid)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
topicrow::tid() const {
  // @@protoc_insertion_point(field_list:stradslda.topicrow.tid)
  return tid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
topicrow::mutable_tid() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.topicrow.tid)
  return &tid_;
}

// repeated int32 assigned = 3 [packed = true];
inline int topicrow::assigned_size() const {
  return assigned_.size();
}
inline void topicrow::clear_assigned() {
  assigned_.Clear();
}
inline ::google::protobuf::int32 topicrow::assigned(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.topicrow.assigned)
  return assigned_.Get(index);
}
inline void topicrow::set_assigned(int index, ::google::protobuf::int32 value) {
  assigned_.Set(index, value);
  // @@protoc_insertion_point(field_set:stradslda.topicrow.assigned)
}
inline void topicrow::add_assigned(::google::protobuf::int32 value) {
  assigned_.Add(value);
  // @@protoc_insertion_point(field_add:stradslda.topicrow.assigned)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
topicrow::assigned() const {
  // @@protoc_insertion_point(field_list:stradslda.topicrow.assigned)
  return assigned_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
topicrow::mutable_assigned() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.topicrow.assigned)
  return &assigned_;
}

// -------------------------------------------------------------------

// worker2coord

// optional int32 type = 1;
inline bool worker2coord::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void worker2coord::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void worker2coord::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void worker2coord::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 worker2coord::type() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.type)
  return type_;
}
inline void worker2coord::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.type)
}

// optional int32 ringsrc = 2;
inline bool worker2coord::has_ringsrc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void worker2coord::set_has_ringsrc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void worker2coord::clear_has_ringsrc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void worker2coord::clear_ringsrc() {
  ringsrc_ = 0;
  clear_has_ringsrc();
}
inline ::google::protobuf::int32 worker2coord::ringsrc() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.ringsrc)
  return ringsrc_;
}
inline void worker2coord::set_ringsrc(::google::protobuf::int32 value) {
  set_has_ringsrc();
  ringsrc_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.ringsrc)
}

// optional int32 ringdst = 3;
inline bool worker2coord::has_ringdst() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void worker2coord::set_has_ringdst() {
  _has_bits_[0] |= 0x00000004u;
}
inline void worker2coord::clear_has_ringdst() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void worker2coord::clear_ringdst() {
  ringdst_ = 0;
  clear_has_ringdst();
}
inline ::google::protobuf::int32 worker2coord::ringdst() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.ringdst)
  return ringdst_;
}
inline void worker2coord::set_ringdst(::google::protobuf::int32 value) {
  set_has_ringdst();
  ringdst_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.ringdst)
}

// repeated .stradslda.initinfo init = 4;
inline int worker2coord::init_size() const {
  return init_.size();
}
inline void worker2coord::clear_init() {
  init_.Clear();
}
inline const ::stradslda::initinfo& worker2coord::init(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.init)
  return init_.Get(index);
}
inline ::stradslda::initinfo* worker2coord::mutable_init(int index) {
  // @@protoc_insertion_point(field_mutable:stradslda.worker2coord.init)
  return init_.Mutable(index);
}
inline ::stradslda::initinfo* worker2coord::add_init() {
  // @@protoc_insertion_point(field_add:stradslda.worker2coord.init)
  return init_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::stradslda::initinfo >&
worker2coord::init() const {
  // @@protoc_insertion_point(field_list:stradslda.worker2coord.init)
  return init_;
}
inline ::google::protobuf::RepeatedPtrField< ::stradslda::initinfo >*
worker2coord::mutable_init() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.worker2coord.init)
  return &init_;
}

// repeated .stradslda.singleint singlei = 5;
inline int worker2coord::singlei_size() const {
  return singlei_.size();
}
inline void worker2coord::clear_singlei() {
  singlei_.Clear();
}
inline const ::stradslda::singleint& worker2coord::singlei(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.singlei)
  return singlei_.Get(index);
}
inline ::stradslda::singleint* worker2coord::mutable_singlei(int index) {
  // @@protoc_insertion_point(field_mutable:stradslda.worker2coord.singlei)
  return singlei_.Mutable(index);
}
inline ::stradslda::singleint* worker2coord::add_singlei() {
  // @@protoc_insertion_point(field_add:stradslda.worker2coord.singlei)
  return singlei_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::stradslda::singleint >&
worker2coord::singlei() const {
  // @@protoc_insertion_point(field_list:stradslda.worker2coord.singlei)
  return singlei_;
}
inline ::google::protobuf::RepeatedPtrField< ::stradslda::singleint >*
worker2coord::mutable_singlei() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.worker2coord.singlei)
  return &singlei_;
}

// repeated .stradslda.singlebucket buckets = 6;
inline int worker2coord::buckets_size() const {
  return buckets_.size();
}
inline void worker2coord::clear_buckets() {
  buckets_.Clear();
}
inline const ::stradslda::singlebucket& worker2coord::buckets(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.buckets)
  return buckets_.Get(index);
}
inline ::stradslda::singlebucket* worker2coord::mutable_buckets(int index) {
  // @@protoc_insertion_point(field_mutable:stradslda.worker2coord.buckets)
  return buckets_.Mutable(index);
}
inline ::stradslda::singlebucket* worker2coord::add_buckets() {
  // @@protoc_insertion_point(field_add:stradslda.worker2coord.buckets)
  return buckets_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::stradslda::singlebucket >&
worker2coord::buckets() const {
  // @@protoc_insertion_point(field_list:stradslda.worker2coord.buckets)
  return buckets_;
}
inline ::google::protobuf::RepeatedPtrField< ::stradslda::singlebucket >*
worker2coord::mutable_buckets() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.worker2coord.buckets)
  return &buckets_;
}

// repeated .stradslda.topicrow trow = 7;
inline int worker2coord::trow_size() const {
  return trow_.size();
}
inline void worker2coord::clear_trow() {
  trow_.Clear();
}
inline const ::stradslda::topicrow& worker2coord::trow(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.trow)
  return trow_.Get(index);
}
inline ::stradslda::topicrow* worker2coord::mutable_trow(int index) {
  // @@protoc_insertion_point(field_mutable:stradslda.worker2coord.trow)
  return trow_.Mutable(index);
}
inline ::stradslda::topicrow* worker2coord::add_trow() {
  // @@protoc_insertion_point(field_add:stradslda.worker2coord.trow)
  return trow_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::stradslda::topicrow >&
worker2coord::trow() const {
  // @@protoc_insertion_point(field_list:stradslda.worker2coord.trow)
  return trow_;
}
inline ::google::protobuf::RepeatedPtrField< ::stradslda::topicrow >*
worker2coord::mutable_trow() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.worker2coord.trow)
  return &trow_;
}

// repeated int32 summary = 8;
inline int worker2coord::summary_size() const {
  return summary_.size();
}
inline void worker2coord::clear_summary() {
  summary_.Clear();
}
inline ::google::protobuf::int32 worker2coord::summary(int index) const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.summary)
  return summary_.Get(index);
}
inline void worker2coord::set_summary(int index, ::google::protobuf::int32 value) {
  summary_.Set(index, value);
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.summary)
}
inline void worker2coord::add_summary(::google::protobuf::int32 value) {
  summary_.Add(value);
  // @@protoc_insertion_point(field_add:stradslda.worker2coord.summary)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
worker2coord::summary() const {
  // @@protoc_insertion_point(field_list:stradslda.worker2coord.summary)
  return summary_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
worker2coord::mutable_summary() {
  // @@protoc_insertion_point(field_mutable_list:stradslda.worker2coord.summary)
  return &summary_;
}

// optional double docll = 9;
inline bool worker2coord::has_docll() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void worker2coord::set_has_docll() {
  _has_bits_[0] |= 0x00000100u;
}
inline void worker2coord::clear_has_docll() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void worker2coord::clear_docll() {
  docll_ = 0;
  clear_has_docll();
}
inline double worker2coord::docll() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.docll)
  return docll_;
}
inline void worker2coord::set_docll(double value) {
  set_has_docll();
  docll_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.docll)
}

// optional double moll1 = 10;
inline bool worker2coord::has_moll1() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void worker2coord::set_has_moll1() {
  _has_bits_[0] |= 0x00000200u;
}
inline void worker2coord::clear_has_moll1() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void worker2coord::clear_moll1() {
  moll1_ = 0;
  clear_has_moll1();
}
inline double worker2coord::moll1() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.moll1)
  return moll1_;
}
inline void worker2coord::set_moll1(double value) {
  set_has_moll1();
  moll1_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.moll1)
}

// optional double moll2 = 11;
inline bool worker2coord::has_moll2() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void worker2coord::set_has_moll2() {
  _has_bits_[0] |= 0x00000400u;
}
inline void worker2coord::clear_has_moll2() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void worker2coord::clear_moll2() {
  moll2_ = 0;
  clear_has_moll2();
}
inline double worker2coord::moll2() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.moll2)
  return moll2_;
}
inline void worker2coord::set_moll2(double value) {
  set_has_moll2();
  moll2_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.moll2)
}

// optional int32 nzwt = 12;
inline bool worker2coord::has_nzwt() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void worker2coord::set_has_nzwt() {
  _has_bits_[0] |= 0x00000800u;
}
inline void worker2coord::clear_has_nzwt() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void worker2coord::clear_nzwt() {
  nzwt_ = 0;
  clear_has_nzwt();
}
inline ::google::protobuf::int32 worker2coord::nzwt() const {
  // @@protoc_insertion_point(field_get:stradslda.worker2coord.nzwt)
  return nzwt_;
}
inline void worker2coord::set_nzwt(::google::protobuf::int32 value) {
  set_has_nzwt();
  nzwt_ = value;
  // @@protoc_insertion_point(field_set:stradslda.worker2coord.nzwt)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace stradslda

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lasso_2eproto__INCLUDED