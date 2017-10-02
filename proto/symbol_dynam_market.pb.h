// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: symbol_dynam_market.proto

#ifndef PROTOBUF_symbol_5fdynam_5fmarket_2eproto__INCLUDED
#define PROTOBUF_symbol_5fdynam_5fmarket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace chaos_data {
class SymbolDynamMarket;
class SymbolDynamMarketDefaultTypeInternal;
extern SymbolDynamMarketDefaultTypeInternal _SymbolDynamMarket_default_instance_;
}  // namespace chaos_data

namespace chaos_data {

namespace protobuf_symbol_5fdynam_5fmarket_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_symbol_5fdynam_5fmarket_2eproto

// ===================================================================

class SymbolDynamMarket : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chaos_data.SymbolDynamMarket) */ {
 public:
  SymbolDynamMarket();
  virtual ~SymbolDynamMarket();

  SymbolDynamMarket(const SymbolDynamMarket& from);

  inline SymbolDynamMarket& operator=(const SymbolDynamMarket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SymbolDynamMarket& default_instance();

  static inline const SymbolDynamMarket* internal_default_instance() {
    return reinterpret_cast<const SymbolDynamMarket*>(
               &_SymbolDynamMarket_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SymbolDynamMarket* other);

  // implements Message ----------------------------------------------

  inline SymbolDynamMarket* New() const PROTOBUF_FINAL { return New(NULL); }

  SymbolDynamMarket* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolDynamMarket& from);
  void MergeFrom(const SymbolDynamMarket& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SymbolDynamMarket* other);
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

  // repeated uint32 buy_price = 10;
  int buy_price_size() const;
  void clear_buy_price();
  static const int kBuyPriceFieldNumber = 10;
  ::google::protobuf::uint32 buy_price(int index) const;
  void set_buy_price(int index, ::google::protobuf::uint32 value);
  void add_buy_price(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      buy_price() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_buy_price();

  // repeated uint32 buy_vol = 11;
  int buy_vol_size() const;
  void clear_buy_vol();
  static const int kBuyVolFieldNumber = 11;
  ::google::protobuf::uint32 buy_vol(int index) const;
  void set_buy_vol(int index, ::google::protobuf::uint32 value);
  void add_buy_vol(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      buy_vol() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_buy_vol();

  // repeated uint32 sell_price = 12;
  int sell_price_size() const;
  void clear_sell_price();
  static const int kSellPriceFieldNumber = 12;
  ::google::protobuf::uint32 sell_price(int index) const;
  void set_sell_price(int index, ::google::protobuf::uint32 value);
  void add_sell_price(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      sell_price() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_sell_price();

  // repeated uint32 sell_vol = 13;
  int sell_vol_size() const;
  void clear_sell_vol();
  static const int kSellVolFieldNumber = 13;
  ::google::protobuf::uint32 sell_vol(int index) const;
  void set_sell_vol(int index, ::google::protobuf::uint32 value);
  void add_sell_vol(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      sell_vol() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_sell_vol();

  // required uint64 current_time = 1;
  bool has_current_time() const;
  void clear_current_time();
  static const int kCurrentTimeFieldNumber = 1;
  ::google::protobuf::uint64 current_time() const;
  void set_current_time(::google::protobuf::uint64 value);

  // required uint32 open_price = 2;
  bool has_open_price() const;
  void clear_open_price();
  static const int kOpenPriceFieldNumber = 2;
  ::google::protobuf::uint32 open_price() const;
  void set_open_price(::google::protobuf::uint32 value);

  // required uint32 high_price = 3;
  bool has_high_price() const;
  void clear_high_price();
  static const int kHighPriceFieldNumber = 3;
  ::google::protobuf::uint32 high_price() const;
  void set_high_price(::google::protobuf::uint32 value);

  // required uint32 low_price = 4;
  bool has_low_price() const;
  void clear_low_price();
  static const int kLowPriceFieldNumber = 4;
  ::google::protobuf::uint32 low_price() const;
  void set_low_price(::google::protobuf::uint32 value);

  // required uint32 new_price = 5;
  bool has_new_price() const;
  void clear_new_price();
  static const int kNewPriceFieldNumber = 5;
  ::google::protobuf::uint32 new_price() const;
  void set_new_price(::google::protobuf::uint32 value);

  // required uint64 amount = 7;
  bool has_amount() const;
  void clear_amount();
  static const int kAmountFieldNumber = 7;
  ::google::protobuf::uint64 amount() const;
  void set_amount(::google::protobuf::uint64 value);

  // required uint32 volume = 6;
  bool has_volume() const;
  void clear_volume();
  static const int kVolumeFieldNumber = 6;
  ::google::protobuf::uint32 volume() const;
  void set_volume(::google::protobuf::uint32 value);

  // required uint32 tick_count = 9;
  bool has_tick_count() const;
  void clear_tick_count();
  static const int kTickCountFieldNumber = 9;
  ::google::protobuf::uint32 tick_count() const;
  void set_tick_count(::google::protobuf::uint32 value);

  // required uint64 inner_vol = 8;
  bool has_inner_vol() const;
  void clear_inner_vol();
  static const int kInnerVolFieldNumber = 8;
  ::google::protobuf::uint64 inner_vol() const;
  void set_inner_vol(::google::protobuf::uint64 value);

  // required uint32 open_interest = 30;
  bool has_open_interest() const;
  void clear_open_interest();
  static const int kOpenInterestFieldNumber = 30;
  ::google::protobuf::uint32 open_interest() const;
  void set_open_interest(::google::protobuf::uint32 value);

  // required uint32 settle_price = 31;
  bool has_settle_price() const;
  void clear_settle_price();
  static const int kSettlePriceFieldNumber = 31;
  ::google::protobuf::uint32 settle_price() const;
  void set_settle_price(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:chaos_data.SymbolDynamMarket)
 private:
  void set_has_current_time();
  void clear_has_current_time();
  void set_has_open_price();
  void clear_has_open_price();
  void set_has_high_price();
  void clear_has_high_price();
  void set_has_low_price();
  void clear_has_low_price();
  void set_has_new_price();
  void clear_has_new_price();
  void set_has_volume();
  void clear_has_volume();
  void set_has_amount();
  void clear_has_amount();
  void set_has_inner_vol();
  void clear_has_inner_vol();
  void set_has_tick_count();
  void clear_has_tick_count();
  void set_has_open_interest();
  void clear_has_open_interest();
  void set_has_settle_price();
  void clear_has_settle_price();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > buy_price_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > buy_vol_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > sell_price_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > sell_vol_;
  ::google::protobuf::uint64 current_time_;
  ::google::protobuf::uint32 open_price_;
  ::google::protobuf::uint32 high_price_;
  ::google::protobuf::uint32 low_price_;
  ::google::protobuf::uint32 new_price_;
  ::google::protobuf::uint64 amount_;
  ::google::protobuf::uint32 volume_;
  ::google::protobuf::uint32 tick_count_;
  ::google::protobuf::uint64 inner_vol_;
  ::google::protobuf::uint32 open_interest_;
  ::google::protobuf::uint32 settle_price_;
  friend struct protobuf_symbol_5fdynam_5fmarket_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SymbolDynamMarket

// required uint64 current_time = 1;
inline bool SymbolDynamMarket::has_current_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SymbolDynamMarket::set_has_current_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SymbolDynamMarket::clear_has_current_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SymbolDynamMarket::clear_current_time() {
  current_time_ = GOOGLE_ULONGLONG(0);
  clear_has_current_time();
}
inline ::google::protobuf::uint64 SymbolDynamMarket::current_time() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.current_time)
  return current_time_;
}
inline void SymbolDynamMarket::set_current_time(::google::protobuf::uint64 value) {
  set_has_current_time();
  current_time_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.current_time)
}

// required uint32 open_price = 2;
inline bool SymbolDynamMarket::has_open_price() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SymbolDynamMarket::set_has_open_price() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SymbolDynamMarket::clear_has_open_price() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SymbolDynamMarket::clear_open_price() {
  open_price_ = 0u;
  clear_has_open_price();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::open_price() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.open_price)
  return open_price_;
}
inline void SymbolDynamMarket::set_open_price(::google::protobuf::uint32 value) {
  set_has_open_price();
  open_price_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.open_price)
}

// required uint32 high_price = 3;
inline bool SymbolDynamMarket::has_high_price() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SymbolDynamMarket::set_has_high_price() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SymbolDynamMarket::clear_has_high_price() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SymbolDynamMarket::clear_high_price() {
  high_price_ = 0u;
  clear_has_high_price();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::high_price() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.high_price)
  return high_price_;
}
inline void SymbolDynamMarket::set_high_price(::google::protobuf::uint32 value) {
  set_has_high_price();
  high_price_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.high_price)
}

// required uint32 low_price = 4;
inline bool SymbolDynamMarket::has_low_price() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SymbolDynamMarket::set_has_low_price() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SymbolDynamMarket::clear_has_low_price() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SymbolDynamMarket::clear_low_price() {
  low_price_ = 0u;
  clear_has_low_price();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::low_price() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.low_price)
  return low_price_;
}
inline void SymbolDynamMarket::set_low_price(::google::protobuf::uint32 value) {
  set_has_low_price();
  low_price_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.low_price)
}

// required uint32 new_price = 5;
inline bool SymbolDynamMarket::has_new_price() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SymbolDynamMarket::set_has_new_price() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SymbolDynamMarket::clear_has_new_price() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SymbolDynamMarket::clear_new_price() {
  new_price_ = 0u;
  clear_has_new_price();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::new_price() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.new_price)
  return new_price_;
}
inline void SymbolDynamMarket::set_new_price(::google::protobuf::uint32 value) {
  set_has_new_price();
  new_price_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.new_price)
}

// required uint32 volume = 6;
inline bool SymbolDynamMarket::has_volume() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SymbolDynamMarket::set_has_volume() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SymbolDynamMarket::clear_has_volume() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SymbolDynamMarket::clear_volume() {
  volume_ = 0u;
  clear_has_volume();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::volume() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.volume)
  return volume_;
}
inline void SymbolDynamMarket::set_volume(::google::protobuf::uint32 value) {
  set_has_volume();
  volume_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.volume)
}

// required uint64 amount = 7;
inline bool SymbolDynamMarket::has_amount() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SymbolDynamMarket::set_has_amount() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SymbolDynamMarket::clear_has_amount() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SymbolDynamMarket::clear_amount() {
  amount_ = GOOGLE_ULONGLONG(0);
  clear_has_amount();
}
inline ::google::protobuf::uint64 SymbolDynamMarket::amount() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.amount)
  return amount_;
}
inline void SymbolDynamMarket::set_amount(::google::protobuf::uint64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.amount)
}

// required uint64 inner_vol = 8;
inline bool SymbolDynamMarket::has_inner_vol() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SymbolDynamMarket::set_has_inner_vol() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SymbolDynamMarket::clear_has_inner_vol() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SymbolDynamMarket::clear_inner_vol() {
  inner_vol_ = GOOGLE_ULONGLONG(0);
  clear_has_inner_vol();
}
inline ::google::protobuf::uint64 SymbolDynamMarket::inner_vol() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.inner_vol)
  return inner_vol_;
}
inline void SymbolDynamMarket::set_inner_vol(::google::protobuf::uint64 value) {
  set_has_inner_vol();
  inner_vol_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.inner_vol)
}

// required uint32 tick_count = 9;
inline bool SymbolDynamMarket::has_tick_count() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SymbolDynamMarket::set_has_tick_count() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SymbolDynamMarket::clear_has_tick_count() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SymbolDynamMarket::clear_tick_count() {
  tick_count_ = 0u;
  clear_has_tick_count();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::tick_count() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.tick_count)
  return tick_count_;
}
inline void SymbolDynamMarket::set_tick_count(::google::protobuf::uint32 value) {
  set_has_tick_count();
  tick_count_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.tick_count)
}

// repeated uint32 buy_price = 10;
inline int SymbolDynamMarket::buy_price_size() const {
  return buy_price_.size();
}
inline void SymbolDynamMarket::clear_buy_price() {
  buy_price_.Clear();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::buy_price(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.buy_price)
  return buy_price_.Get(index);
}
inline void SymbolDynamMarket::set_buy_price(int index, ::google::protobuf::uint32 value) {
  buy_price_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.buy_price)
}
inline void SymbolDynamMarket::add_buy_price(::google::protobuf::uint32 value) {
  buy_price_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolDynamMarket.buy_price)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SymbolDynamMarket::buy_price() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolDynamMarket.buy_price)
  return buy_price_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SymbolDynamMarket::mutable_buy_price() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolDynamMarket.buy_price)
  return &buy_price_;
}

// repeated uint32 buy_vol = 11;
inline int SymbolDynamMarket::buy_vol_size() const {
  return buy_vol_.size();
}
inline void SymbolDynamMarket::clear_buy_vol() {
  buy_vol_.Clear();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::buy_vol(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.buy_vol)
  return buy_vol_.Get(index);
}
inline void SymbolDynamMarket::set_buy_vol(int index, ::google::protobuf::uint32 value) {
  buy_vol_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.buy_vol)
}
inline void SymbolDynamMarket::add_buy_vol(::google::protobuf::uint32 value) {
  buy_vol_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolDynamMarket.buy_vol)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SymbolDynamMarket::buy_vol() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolDynamMarket.buy_vol)
  return buy_vol_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SymbolDynamMarket::mutable_buy_vol() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolDynamMarket.buy_vol)
  return &buy_vol_;
}

// repeated uint32 sell_price = 12;
inline int SymbolDynamMarket::sell_price_size() const {
  return sell_price_.size();
}
inline void SymbolDynamMarket::clear_sell_price() {
  sell_price_.Clear();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::sell_price(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.sell_price)
  return sell_price_.Get(index);
}
inline void SymbolDynamMarket::set_sell_price(int index, ::google::protobuf::uint32 value) {
  sell_price_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.sell_price)
}
inline void SymbolDynamMarket::add_sell_price(::google::protobuf::uint32 value) {
  sell_price_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolDynamMarket.sell_price)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SymbolDynamMarket::sell_price() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolDynamMarket.sell_price)
  return sell_price_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SymbolDynamMarket::mutable_sell_price() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolDynamMarket.sell_price)
  return &sell_price_;
}

// repeated uint32 sell_vol = 13;
inline int SymbolDynamMarket::sell_vol_size() const {
  return sell_vol_.size();
}
inline void SymbolDynamMarket::clear_sell_vol() {
  sell_vol_.Clear();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::sell_vol(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.sell_vol)
  return sell_vol_.Get(index);
}
inline void SymbolDynamMarket::set_sell_vol(int index, ::google::protobuf::uint32 value) {
  sell_vol_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.sell_vol)
}
inline void SymbolDynamMarket::add_sell_vol(::google::protobuf::uint32 value) {
  sell_vol_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolDynamMarket.sell_vol)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SymbolDynamMarket::sell_vol() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolDynamMarket.sell_vol)
  return sell_vol_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SymbolDynamMarket::mutable_sell_vol() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolDynamMarket.sell_vol)
  return &sell_vol_;
}

// required uint32 open_interest = 30;
inline bool SymbolDynamMarket::has_open_interest() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SymbolDynamMarket::set_has_open_interest() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SymbolDynamMarket::clear_has_open_interest() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SymbolDynamMarket::clear_open_interest() {
  open_interest_ = 0u;
  clear_has_open_interest();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::open_interest() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.open_interest)
  return open_interest_;
}
inline void SymbolDynamMarket::set_open_interest(::google::protobuf::uint32 value) {
  set_has_open_interest();
  open_interest_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.open_interest)
}

// required uint32 settle_price = 31;
inline bool SymbolDynamMarket::has_settle_price() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SymbolDynamMarket::set_has_settle_price() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SymbolDynamMarket::clear_has_settle_price() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SymbolDynamMarket::clear_settle_price() {
  settle_price_ = 0u;
  clear_has_settle_price();
}
inline ::google::protobuf::uint32 SymbolDynamMarket::settle_price() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolDynamMarket.settle_price)
  return settle_price_;
}
inline void SymbolDynamMarket::set_settle_price(::google::protobuf::uint32 value) {
  set_has_settle_price();
  settle_price_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolDynamMarket.settle_price)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace chaos_data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_symbol_5fdynam_5fmarket_2eproto__INCLUDED
