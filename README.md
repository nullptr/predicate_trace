# Predicate Tracing LLVM Pass

This repository contains a simple LLVM pass to dynamically log predicate counts by instruction type (ICmp or FCmp) and predicate to the path contained in the environment variable PREDICATE_TRACE_LOG_PATH or `/tmp/predicate_trace.json` by default.

The pass will additionally instrument modules to build feature vectors at run-time that describe path predicates.

## Quickstart

First ensure that you have a recent LLVM and clang installation.  Then,

~~~sh
$ mkdir build
$ cd build
$ CC=clang CXX=clang++ cmake ..
$ make
$ ./run_tests
~~~

## TODO

## Trace record mechanism

## Trace diff

### Query interface

There needs to be an interface to query path predicates at run-time.  This should probably take the form of an encoded list of block identifiers in an environment variable.

### Predicate feature pretty-printing

Since features are simply bit vectors, we need a way to convert a vector back to a human-readable version.
