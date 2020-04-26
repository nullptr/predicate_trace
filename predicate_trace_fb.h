// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PREDICATETRACE_PREDICATETRACE_H_
#define FLATBUFFERS_GENERATED_PREDICATETRACE_PREDICATETRACE_H_

#include "flatbuffers/flatbuffers.h"

namespace PredicateTrace {

struct Trace;
struct TraceBuilder;

struct Edge;

struct BlockPredicate;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) Edge FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t source_;
  uint64_t target_;

 public:
  Edge() {
    memset(static_cast<void *>(this), 0, sizeof(Edge));
  }
  Edge(uint64_t _source, uint64_t _target)
      : source_(flatbuffers::EndianScalar(_source)),
        target_(flatbuffers::EndianScalar(_target)) {
  }
  uint64_t source() const {
    return flatbuffers::EndianScalar(source_);
  }
  uint64_t target() const {
    return flatbuffers::EndianScalar(target_);
  }
};
FLATBUFFERS_STRUCT_END(Edge, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) BlockPredicate FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t block_;
  uint64_t predicate_;
  uint64_t size_;

 public:
  BlockPredicate() {
    memset(static_cast<void *>(this), 0, sizeof(BlockPredicate));
  }
  BlockPredicate(uint64_t _block, uint64_t _predicate, uint64_t _size)
      : block_(flatbuffers::EndianScalar(_block)),
        predicate_(flatbuffers::EndianScalar(_predicate)),
        size_(flatbuffers::EndianScalar(_size)) {
  }
  uint64_t block() const {
    return flatbuffers::EndianScalar(block_);
  }
  uint64_t predicate() const {
    return flatbuffers::EndianScalar(predicate_);
  }
  uint64_t size() const {
    return flatbuffers::EndianScalar(size_);
  }
};
FLATBUFFERS_STRUCT_END(BlockPredicate, 24);

struct Trace FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TraceBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_EDGES = 4,
    VT_PREDICATES = 6
  };
  const flatbuffers::Vector<const PredicateTrace::Edge *> *edges() const {
    return GetPointer<const flatbuffers::Vector<const PredicateTrace::Edge *> *>(VT_EDGES);
  }
  const flatbuffers::Vector<const PredicateTrace::BlockPredicate *> *predicates() const {
    return GetPointer<const flatbuffers::Vector<const PredicateTrace::BlockPredicate *> *>(VT_PREDICATES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_EDGES) &&
           verifier.VerifyVector(edges()) &&
           VerifyOffset(verifier, VT_PREDICATES) &&
           verifier.VerifyVector(predicates()) &&
           verifier.EndTable();
  }
};

struct TraceBuilder {
  typedef Trace Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_edges(flatbuffers::Offset<flatbuffers::Vector<const PredicateTrace::Edge *>> edges) {
    fbb_.AddOffset(Trace::VT_EDGES, edges);
  }
  void add_predicates(flatbuffers::Offset<flatbuffers::Vector<const PredicateTrace::BlockPredicate *>> predicates) {
    fbb_.AddOffset(Trace::VT_PREDICATES, predicates);
  }
  explicit TraceBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TraceBuilder &operator=(const TraceBuilder &);
  flatbuffers::Offset<Trace> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Trace>(end);
    return o;
  }
};

inline flatbuffers::Offset<Trace> CreateTrace(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const PredicateTrace::Edge *>> edges = 0,
    flatbuffers::Offset<flatbuffers::Vector<const PredicateTrace::BlockPredicate *>> predicates = 0) {
  TraceBuilder builder_(_fbb);
  builder_.add_predicates(predicates);
  builder_.add_edges(edges);
  return builder_.Finish();
}

inline flatbuffers::Offset<Trace> CreateTraceDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<PredicateTrace::Edge> *edges = nullptr,
    const std::vector<PredicateTrace::BlockPredicate> *predicates = nullptr) {
  auto edges__ = edges ? _fbb.CreateVectorOfStructs<PredicateTrace::Edge>(*edges) : 0;
  auto predicates__ = predicates ? _fbb.CreateVectorOfStructs<PredicateTrace::BlockPredicate>(*predicates) : 0;
  return PredicateTrace::CreateTrace(
      _fbb,
      edges__,
      predicates__);
}

inline const PredicateTrace::Trace *GetTrace(const void *buf) {
  return flatbuffers::GetRoot<PredicateTrace::Trace>(buf);
}

inline const PredicateTrace::Trace *GetSizePrefixedTrace(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<PredicateTrace::Trace>(buf);
}

inline bool VerifyTraceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<PredicateTrace::Trace>(nullptr);
}

inline bool VerifySizePrefixedTraceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<PredicateTrace::Trace>(nullptr);
}

inline void FinishTraceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<PredicateTrace::Trace> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTraceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<PredicateTrace::Trace> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace PredicateTrace

#endif  // FLATBUFFERS_GENERATED_PREDICATETRACE_PREDICATETRACE_H_