// Generated by Apple Swift version 5.0 (swiftlang-1001.0.69.5 clang-1001.0.46.3)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DemoSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC7DemoSDK9NewtonSDK")
@interface NewtonSDK : NSObject
- (nonnull instancetype)initWithDappId:(NSString * _Nonnull)dappId protocolVersion:(NSString * _Nonnull)protocolVersion protocolName:(NSString * _Nonnull)protocolName bundleSource:(NSString * _Nonnull)bundleSource environment:(NSInteger)environment schemaProtocol:(NSString * _Nonnull)schemaProtocol OBJC_DESIGNATED_INITIALIZER;
/// requestProfile: Request Profile for Login
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     Public parameters
///   </li>
///   <li>
///     message: (String) Content shows in the authorization confirm view
///   </li>
///   <li>
///     signature: (String) The signature hex string by application owner. The exclude fields is [‘signature’, ‘sign_type’]
///   </li>
///   <li>
///     signType: (String) Signature Type, by default is secp256r1
///   </li>
///   <li>
///     scope: (Int) 1 for basic profile without phone number, 2 for profile with more details
///   </li>
///   <li>
///     nonce: (String) Random string or auto-increment sequence
///   </li>
///   <li>
///     ts: (String) timestamp
///   </li>
/// </ul>
- (void)authLoginWithMemo:(NSString * _Nonnull)memo signature:(NSString * _Nonnull)signature signType:(NSString * _Nonnull)signType scope:(NSInteger)scope nonce:(NSString * _Nonnull)nonce ts:(NSString * _Nonnull)ts uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSString * _Nonnull))completion failure:(void (^ _Nonnull)(NSString * _Nonnull))failure;
/// placeOrder: Place order proof onto NewChain
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     Public Parameters
///   </li>
///   <li>
///     message: (String) Content shows in the authorization confirm view
///   </li>
///   <li>
///     signature: (String) The signature hex string by application owner. The exclude fields is [‘signature’, ‘sign_type’]
///   </li>
///   <li>
///     signType: (String) Signature Type, by default is secp256r1
///   </li>
///   <li>
///     orderJson: (String) Order proof json string
///   </li>
///   <li>
///     nonce: (String) Random string or auto-increment sequence
///   </li>
///   <li>
///     ts: (String) timestamp
///   </li>
///   <li>
///     Order Json Parameters
///   </li>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     price_currency: (String)
///   </li>
///   <li>
///     order_item_number: (String)
///   </li>
///   <li>
///     price: (String)
///   </li>
///   <li>
///     order_item_quantity: (String)
///   </li>
///   <li>
///     ordered_item: [item]
///   </li>
///   <li>
///     item Parameters
///   </li>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     name: (String) The product name
///   </li>
///   <li>
///     thing_type: (String) The value is product
///   </li>
///   <li>
///     thing_id: (String) The product identifier, such as ISBN. For example: isbn:123-456-789.
///   </li>
/// </ul>
- (void)placeOrderWithSignature:(NSString * _Nonnull)signature signType:(NSString * _Nonnull)signType proofHash:(NSString * _Nonnull)proofHash nonce:(NSString * _Nonnull)nonce ts:(NSString * _Nonnull)ts uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSString * _Nonnull))completion failure:(void (^ _Nonnull)(NSString * _Nonnull))failure;
/// Make payment using Newpay
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     Public parameters
///   </li>
///   <li>
///     message: (String) Content shows in the authorization confirm view
///   </li>
///   <li>
///     signature: (String) The signature hex string by application owner. The exclude fields is [‘signature’, ‘sign_type’]
///   </li>
///   <li>
///     signType: (String) Signature Type, by default is secp256r1
///   </li>
///   <li>
///     description: (String) The order description
///   </li>
///   <li>
///     priceCurrency: (String) The symbol of fiat or digital token, such as USD, RMB, NEW,BTC,ETH.
///   </li>
///   <li>
///     totalPrice: (String) The amount of fiat or digital token, unit is the minimum unit of given fiat or digital token.
///   </li>
///   <li>
///     orderNumber: (String) The order number
///   </li>
///   <li>
///     seller: (String) The seller’s NewID
///   </li>
///   <li>
///     customer: (String) The customer’s NewID
///   </li>
///   <li>
///     broker: (String) The broker’s NewID.
///   </li>
///   <li>
///     nonce: (String) Random string or auto-increment sequence
///   </li>
///   <li>
///     ts: (String) timestamp
///   </li>
/// </ul>
- (void)payWithSignature:(NSString * _Nonnull)signature signType:(NSString * _Nonnull)signType description:(NSString * _Nonnull)description priceCurrency:(NSString * _Nonnull)priceCurrency totalPrice:(NSString * _Nonnull)totalPrice orderNumber:(NSString * _Nonnull)orderNumber seller:(NSString * _Nonnull)seller customer:(NSString * _Nonnull)customer broker:(NSString * _Nonnull)broker nonce:(NSString * _Nonnull)nonce ts:(NSString * _Nonnull)ts uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSString * _Nonnull))completion failure:(void (^ _Nonnull)(NSString * _Nonnull))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
