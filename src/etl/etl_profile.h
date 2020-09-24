#ifndef ETL_PROFILE_H_
#define ETL_PROFILE_H_

// Embedded Artistry Framework ETL Configuration
// TODO: Review macros that we can set: https://www.etlcpp.com/macros.html

#define ETL_TARGET_DEVICE_GENERIC
#define ETL_TARGET_OS_NONE
//#define ETL_COMPILER_GENERIC
#define ETL_COMPILER_GCC // TODO: better compiler identification
#define ETL_CPP11_SUPPORTED 1
#define ETL_CPP14_SUPPORTED 1
#define ETL_CPP17_SUPPORTED 1
#define ETL_NO_NULLPTR_SUPPORT 0
#define ETL_NO_LARGE_CHAR_SUPPORT 0
#define ETL_CPP11_TYPE_TRAITS_IS_TRIVIAL_SUPPORTED 1

#ifndef ENABLE_ETL_UNIT_TESTS

// These flags should not be set when unit tests are run

// TODO: debug builds use:
// ETL_CHECK_PUSH_POP
// ETL_LOG_ERRORS
// ETL_DEBUG - which may be defined if DEBUG or _DEBUG are defined

#define ETL_DEBUG // TODO: Remove later, or make configurable based on build type
#define ETL_NO_CHECKS

#else // Unit test definitions

#undef ETL_DEBUG
#define ETL_DEBUG

#define ETL_THROW_EXCEPTIONS
#define ETL_VERBOSE_ERRORS
#define ETL_CHECK_PUSH_POP
#define ETL_ISTRING_REPAIR_ENABLE
#define ETL_IVECTOR_REPAIR_ENABLE
#define ETL_IDEQUE_REPAIR_ENABLE
#define ETL_IN_UNIT_TEST
#define ETL_DEBUG_COUNT

#define ETL_MESSAGE_TIMER_USE_ATOMIC_LOCK
#define ETL_CALLBACK_TIMER_USE_ATOMIC_LOCK

#define ETL_POLYMORPHIC_BITSET
#define ETL_POLYMORPHIC_DEQUE
#define ETL_POLYMORPHIC_FLAT_MAP
#define ETL_POLYMORPHIC_FLAT_MULTIMAP
#define ETL_POLYMORPHIC_FLAT_SET
#define ETL_POLYMORPHIC_FLAT_MULTISET
#define ETL_POLYMORPHIC_FORWARD_LIST
#define ETL_POLYMORPHIC_LIST
#define ETL_POLYMORPHIC_MAP
#define ETL_POLYMORPHIC_MULTIMAP
#define ETL_POLYMORPHIC_SET
#define ETL_POLYMORPHIC_MULTISET
#define ETL_POLYMORPHIC_QUEUE
#define ETL_POLYMORPHIC_STACK
#define ETL_POLYMORPHIC_REFERENCE_FLAT_MAP
#define ETL_POLYMORPHIC_REFERENCE_FLAT_MULTIMAP
#define ETL_POLYMORPHIC_REFERENCE_FLAT_SET
#define ETL_POLYMORPHIC_REFERENCE_FLAT_MULTISET
#define ETL_POLYMORPHIC_UNORDERED_MAP
#define ETL_POLYMORPHIC_UNORDERED_MULTIMAP
#define ETL_POLYMORPHIC_UNORDERED_SET
#define ETL_POLYMORPHIC_UNORDERED_MULTISET
#define ETL_POLYMORPHIC_STRINGS
#define ETL_POLYMORPHIC_POOL
#define ETL_POLYMORPHIC_VECTOR
#endif

#endif // ETL_PROFILE_H_
