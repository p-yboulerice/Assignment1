#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3940763575;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Exception
struct Exception_t;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.IO.Stream
struct Stream_t1273022909;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t221103672;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1364470182;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Net.Security.SslStream
struct SslStream_t2700741536;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2080034863;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t1002784953;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3112562943;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t2465948139;
// System.Net.CookieCollection/CookieCollectionComparer
struct CookieCollectionComparer_t1373927847;
// System.Net.CookieCollection
struct CookieCollection_t3881042616;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1577818305;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.IO.Compression.DeflateStream
struct DeflateStream_t4175168077;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Uri
struct Uri_t100236324;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1942268960;
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1667413407;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3014364904;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2354453884;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t876388624;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Queue
struct Queue_t3637523393;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t596328627;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t2098880770;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Net.FileWebResponse
struct FileWebResponse_t544571260;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// System.Net.FileWebRequest
struct FileWebRequest_t591858885;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t341650829;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Net.ServicePoint
struct ServicePoint_t2786966844;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.Net.NetworkCredential
struct NetworkCredential_t3282608323;
// System.Net.IPHostEntry
struct IPHostEntry_t263743900;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3265664217;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Net.WebResponse
struct WebResponse_t229922639;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef DIGESTHEADERPARSER_T341650829_H
#define DIGESTHEADERPARSER_T341650829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestHeaderParser
struct  DigestHeaderParser_t341650829  : public RuntimeObject
{
public:
	// System.String System.Net.DigestHeaderParser::header
	String_t* ___header_0;
	// System.Int32 System.Net.DigestHeaderParser::length
	int32_t ___length_1;
	// System.Int32 System.Net.DigestHeaderParser::pos
	int32_t ___pos_2;
	// System.String[] System.Net.DigestHeaderParser::values
	StringU5BU5D_t1281789340* ___values_4;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t341650829, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t341650829, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t341650829, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_values_4() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t341650829, ___values_4)); }
	inline StringU5BU5D_t1281789340* get_values_4() const { return ___values_4; }
	inline StringU5BU5D_t1281789340** get_address_of_values_4() { return &___values_4; }
	inline void set_values_4(StringU5BU5D_t1281789340* value)
	{
		___values_4 = value;
		Il2CppCodeGenWriteBarrier((&___values_4), value);
	}
};

struct DigestHeaderParser_t341650829_StaticFields
{
public:
	// System.String[] System.Net.DigestHeaderParser::keywords
	StringU5BU5D_t1281789340* ___keywords_3;

public:
	inline static int32_t get_offset_of_keywords_3() { return static_cast<int32_t>(offsetof(DigestHeaderParser_t341650829_StaticFields, ___keywords_3)); }
	inline StringU5BU5D_t1281789340* get_keywords_3() const { return ___keywords_3; }
	inline StringU5BU5D_t1281789340** get_address_of_keywords_3() { return &___keywords_3; }
	inline void set_keywords_3(StringU5BU5D_t1281789340* value)
	{
		___keywords_3 = value;
		Il2CppCodeGenWriteBarrier((&___keywords_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGESTHEADERPARSER_T341650829_H
#ifndef DIGESTCLIENT_T660790528_H
#define DIGESTCLIENT_T660790528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestClient
struct  DigestClient_t660790528  : public RuntimeObject
{
public:

public:
};

struct DigestClient_t660790528_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.DigestClient::cache
	Hashtable_t1853889766 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(DigestClient_t660790528_StaticFields, ___cache_0)); }
	inline Hashtable_t1853889766 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t1853889766 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t1853889766 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGESTCLIENT_T660790528_H
#ifndef WEAKOBJECTWRAPPER_T827463650_H
#define WEAKOBJECTWRAPPER_T827463650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t827463650  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t1334886716 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t827463650, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t827463650, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t1334886716 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t1334886716 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t1334886716 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T827463650_H
#ifndef DNS_T384099571_H
#define DNS_T384099571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Dns
struct  Dns_t384099571  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNS_T384099571_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef FILEWEBREQUESTCREATOR_T1781329382_H
#define FILEWEBREQUESTCREATOR_T1781329382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequestCreator
struct  FileWebRequestCreator_t1781329382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUESTCREATOR_T1781329382_H
#ifndef FTPASYNCRESULT_T3265664217_H
#define FTPASYNCRESULT_T3265664217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpAsyncResult
struct  FtpAsyncResult_t3265664217  : public RuntimeObject
{
public:
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t3940763575 * ___response_0;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t451242010 * ___waitHandle_1;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t * ___exception_2;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t3962456242 * ___callback_3;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t1273022909 * ___stream_4;
	// System.Object System.Net.FtpAsyncResult::state
	RuntimeObject * ___state_5;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch_7;
	// System.Object System.Net.FtpAsyncResult::locker
	RuntimeObject * ___locker_8;

public:
	inline static int32_t get_offset_of_response_0() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___response_0)); }
	inline FtpWebResponse_t3940763575 * get_response_0() const { return ___response_0; }
	inline FtpWebResponse_t3940763575 ** get_address_of_response_0() { return &___response_0; }
	inline void set_response_0(FtpWebResponse_t3940763575 * value)
	{
		___response_0 = value;
		Il2CppCodeGenWriteBarrier((&___response_0), value);
	}

	inline static int32_t get_offset_of_waitHandle_1() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___waitHandle_1)); }
	inline ManualResetEvent_t451242010 * get_waitHandle_1() const { return ___waitHandle_1; }
	inline ManualResetEvent_t451242010 ** get_address_of_waitHandle_1() { return &___waitHandle_1; }
	inline void set_waitHandle_1(ManualResetEvent_t451242010 * value)
	{
		___waitHandle_1 = value;
		Il2CppCodeGenWriteBarrier((&___waitHandle_1), value);
	}

	inline static int32_t get_offset_of_exception_2() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___exception_2)); }
	inline Exception_t * get_exception_2() const { return ___exception_2; }
	inline Exception_t ** get_address_of_exception_2() { return &___exception_2; }
	inline void set_exception_2(Exception_t * value)
	{
		___exception_2 = value;
		Il2CppCodeGenWriteBarrier((&___exception_2), value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___callback_3)); }
	inline AsyncCallback_t3962456242 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t3962456242 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t3962456242 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_stream_4() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___stream_4)); }
	inline Stream_t1273022909 * get_stream_4() const { return ___stream_4; }
	inline Stream_t1273022909 ** get_address_of_stream_4() { return &___stream_4; }
	inline void set_stream_4(Stream_t1273022909 * value)
	{
		___stream_4 = value;
		Il2CppCodeGenWriteBarrier((&___stream_4), value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___state_5)); }
	inline RuntimeObject * get_state_5() const { return ___state_5; }
	inline RuntimeObject ** get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(RuntimeObject * value)
	{
		___state_5 = value;
		Il2CppCodeGenWriteBarrier((&___state_5), value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_synch_7() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___synch_7)); }
	inline bool get_synch_7() const { return ___synch_7; }
	inline bool* get_address_of_synch_7() { return &___synch_7; }
	inline void set_synch_7(bool value)
	{
		___synch_7 = value;
	}

	inline static int32_t get_offset_of_locker_8() { return static_cast<int32_t>(offsetof(FtpAsyncResult_t3265664217, ___locker_8)); }
	inline RuntimeObject * get_locker_8() const { return ___locker_8; }
	inline RuntimeObject ** get_address_of_locker_8() { return &___locker_8; }
	inline void set_locker_8(RuntimeObject * value)
	{
		___locker_8 = value;
		Il2CppCodeGenWriteBarrier((&___locker_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPASYNCRESULT_T3265664217_H
#ifndef INFO_T3260944019_H
#define INFO_T3260944019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t3260944019  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t4221220734 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____attributes_1)); }
	inline AttributeCollection_t4221220734 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t4221220734 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t4221220734 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T3260944019_H
#ifndef TYPEDESCRIPTOR_T3066613587_H
#define TYPEDESCRIPTOR_T3066613587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3066613587  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3066613587_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t2718874744 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1853889766 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1853889766 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t221103672 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1364470182 * ___componentDescriptionProviders_7;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t2718874744 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t2718874744 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t2718874744 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentTable_2)); }
	inline Hashtable_t1853889766 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t1853889766 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t1853889766 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeTable_3)); }
	inline Hashtable_t1853889766 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t1853889766 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t1853889766 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t221103672 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t221103672 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t221103672 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t1364470182 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t1364470182 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t1364470182 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3066613587_H
#ifndef DEFAULTCERTIFICATEPOLICY_T3607119947_H
#define DEFAULTCERTIFICATEPOLICY_T3607119947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DefaultCertificatePolicy
struct  DefaultCertificatePolicy_t3607119947  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCERTIFICATEPOLICY_T3607119947_H
#ifndef MULTICASTOPTION_T3861143239_H
#define MULTICASTOPTION_T3861143239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t3861143239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T3861143239_H
#ifndef U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1222040293_H
#define U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1222040293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7
struct  U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::clientCertificates
	X509CertificateCollection_t3399372417 * ___clientCertificates_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::<>f__this
	SslStream_t2700741536 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_clientCertificates_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293, ___clientCertificates_0)); }
	inline X509CertificateCollection_t3399372417 * get_clientCertificates_0() const { return ___clientCertificates_0; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_clientCertificates_0() { return &___clientCertificates_0; }
	inline void set_clientCertificates_0(X509CertificateCollection_t3399372417 * value)
	{
		___clientCertificates_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientCertificates_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293, ___U3CU3Ef__this_1)); }
	inline SslStream_t2700741536 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t2700741536 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t2700741536 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1222040293_H
#ifndef WORKER_T2051517921_H
#define WORKER_T2051517921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/Worker
struct  Worker_t2051517921  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket/SocketAsyncResult System.Net.Sockets.Socket/Worker::result
	SocketAsyncResult_t2080034863 * ___result_0;
	// System.Boolean System.Net.Sockets.Socket/Worker::requireSocketSecurity
	bool ___requireSocketSecurity_1;
	// System.Int32 System.Net.Sockets.Socket/Worker::send_so_far
	int32_t ___send_so_far_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(Worker_t2051517921, ___result_0)); }
	inline SocketAsyncResult_t2080034863 * get_result_0() const { return ___result_0; }
	inline SocketAsyncResult_t2080034863 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(SocketAsyncResult_t2080034863 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((&___result_0), value);
	}

	inline static int32_t get_offset_of_requireSocketSecurity_1() { return static_cast<int32_t>(offsetof(Worker_t2051517921, ___requireSocketSecurity_1)); }
	inline bool get_requireSocketSecurity_1() const { return ___requireSocketSecurity_1; }
	inline bool* get_address_of_requireSocketSecurity_1() { return &___requireSocketSecurity_1; }
	inline void set_requireSocketSecurity_1(bool value)
	{
		___requireSocketSecurity_1 = value;
	}

	inline static int32_t get_offset_of_send_so_far_2() { return static_cast<int32_t>(offsetof(Worker_t2051517921, ___send_so_far_2)); }
	inline int32_t get_send_so_far_2() const { return ___send_so_far_2; }
	inline int32_t* get_address_of_send_so_far_2() { return &___send_so_far_2; }
	inline void set_send_so_far_2(int32_t value)
	{
		___send_so_far_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORKER_T2051517921_H
#ifndef AUTHENTICATIONMANAGER_T2084001809_H
#define AUTHENTICATIONMANAGER_T2084001809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.AuthenticationManager
struct  AuthenticationManager_t2084001809  : public RuntimeObject
{
public:

public:
};

struct AuthenticationManager_t2084001809_StaticFields
{
public:
	// System.Collections.ArrayList System.Net.AuthenticationManager::modules
	ArrayList_t2718874744 * ___modules_0;
	// System.Object System.Net.AuthenticationManager::locker
	RuntimeObject * ___locker_1;
	// System.Net.ICredentialPolicy System.Net.AuthenticationManager::credential_policy
	RuntimeObject* ___credential_policy_2;

public:
	inline static int32_t get_offset_of_modules_0() { return static_cast<int32_t>(offsetof(AuthenticationManager_t2084001809_StaticFields, ___modules_0)); }
	inline ArrayList_t2718874744 * get_modules_0() const { return ___modules_0; }
	inline ArrayList_t2718874744 ** get_address_of_modules_0() { return &___modules_0; }
	inline void set_modules_0(ArrayList_t2718874744 * value)
	{
		___modules_0 = value;
		Il2CppCodeGenWriteBarrier((&___modules_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(AuthenticationManager_t2084001809_StaticFields, ___locker_1)); }
	inline RuntimeObject * get_locker_1() const { return ___locker_1; }
	inline RuntimeObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(RuntimeObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier((&___locker_1), value);
	}

	inline static int32_t get_offset_of_credential_policy_2() { return static_cast<int32_t>(offsetof(AuthenticationManager_t2084001809_StaticFields, ___credential_policy_2)); }
	inline RuntimeObject* get_credential_policy_2() const { return ___credential_policy_2; }
	inline RuntimeObject** get_address_of_credential_policy_2() { return &___credential_policy_2; }
	inline void set_credential_policy_2(RuntimeObject* value)
	{
		___credential_policy_2 = value;
		Il2CppCodeGenWriteBarrier((&___credential_policy_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMANAGER_T2084001809_H
#ifndef AUTHORIZATION_T542416582_H
#define AUTHORIZATION_T542416582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Authorization
struct  Authorization_t542416582  : public RuntimeObject
{
public:
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.String System.Net.Authorization::connectionGroupId
	String_t* ___connectionGroupId_2;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	RuntimeObject* ___module_3;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((&___token_0), value);
	}

	inline static int32_t get_offset_of_complete_1() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___complete_1)); }
	inline bool get_complete_1() const { return ___complete_1; }
	inline bool* get_address_of_complete_1() { return &___complete_1; }
	inline void set_complete_1(bool value)
	{
		___complete_1 = value;
	}

	inline static int32_t get_offset_of_connectionGroupId_2() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___connectionGroupId_2)); }
	inline String_t* get_connectionGroupId_2() const { return ___connectionGroupId_2; }
	inline String_t** get_address_of_connectionGroupId_2() { return &___connectionGroupId_2; }
	inline void set_connectionGroupId_2(String_t* value)
	{
		___connectionGroupId_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroupId_2), value);
	}

	inline static int32_t get_offset_of_module_3() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___module_3)); }
	inline RuntimeObject* get_module_3() const { return ___module_3; }
	inline RuntimeObject** get_address_of_module_3() { return &___module_3; }
	inline void set_module_3(RuntimeObject* value)
	{
		___module_3 = value;
		Il2CppCodeGenWriteBarrier((&___module_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORIZATION_T542416582_H
#ifndef BASICCLIENT_T3463561396_H
#define BASICCLIENT_T3463561396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.BasicClient
struct  BasicClient_t3463561396  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCLIENT_T3463561396_H
#ifndef CHUNK_T1455545707_H
#define CHUNK_T1455545707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkStream/Chunk
struct  Chunk_t1455545707  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.ChunkStream/Chunk::Bytes
	ByteU5BU5D_t4116647657* ___Bytes_0;
	// System.Int32 System.Net.ChunkStream/Chunk::Offset
	int32_t ___Offset_1;

public:
	inline static int32_t get_offset_of_Bytes_0() { return static_cast<int32_t>(offsetof(Chunk_t1455545707, ___Bytes_0)); }
	inline ByteU5BU5D_t4116647657* get_Bytes_0() const { return ___Bytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Bytes_0() { return &___Bytes_0; }
	inline void set_Bytes_0(ByteU5BU5D_t4116647657* value)
	{
		___Bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Bytes_0), value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(Chunk_t1455545707, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUNK_T1455545707_H
#ifndef COOKIECOLLECTION_T3881042616_H
#define COOKIECOLLECTION_T3881042616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieCollection
struct  CookieCollection_t3881042616  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Net.Cookie> System.Net.CookieCollection::list
	List_1_t2465948139 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CookieCollection_t3881042616, ___list_0)); }
	inline List_1_t2465948139 * get_list_0() const { return ___list_0; }
	inline List_1_t2465948139 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2465948139 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

struct CookieCollection_t3881042616_StaticFields
{
public:
	// System.Net.CookieCollection/CookieCollectionComparer System.Net.CookieCollection::Comparer
	CookieCollectionComparer_t1373927847 * ___Comparer_1;

public:
	inline static int32_t get_offset_of_Comparer_1() { return static_cast<int32_t>(offsetof(CookieCollection_t3881042616_StaticFields, ___Comparer_1)); }
	inline CookieCollectionComparer_t1373927847 * get_Comparer_1() const { return ___Comparer_1; }
	inline CookieCollectionComparer_t1373927847 ** get_address_of_Comparer_1() { return &___Comparer_1; }
	inline void set_Comparer_1(CookieCollectionComparer_t1373927847 * value)
	{
		___Comparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___Comparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COOKIECOLLECTION_T3881042616_H
#ifndef COOKIECOLLECTIONCOMPARER_T1373927847_H
#define COOKIECOLLECTIONCOMPARER_T1373927847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieCollection/CookieCollectionComparer
struct  CookieCollectionComparer_t1373927847  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COOKIECOLLECTIONCOMPARER_T1373927847_H
#ifndef COOKIECONTAINER_T2331592909_H
#define COOKIECONTAINER_T2331592909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieContainer
struct  CookieContainer_t2331592909  : public RuntimeObject
{
public:
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity_0;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity_1;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize_2;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t3881042616 * ___cookies_3;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(CookieContainer_t2331592909, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_perDomainCapacity_1() { return static_cast<int32_t>(offsetof(CookieContainer_t2331592909, ___perDomainCapacity_1)); }
	inline int32_t get_perDomainCapacity_1() const { return ___perDomainCapacity_1; }
	inline int32_t* get_address_of_perDomainCapacity_1() { return &___perDomainCapacity_1; }
	inline void set_perDomainCapacity_1(int32_t value)
	{
		___perDomainCapacity_1 = value;
	}

	inline static int32_t get_offset_of_maxCookieSize_2() { return static_cast<int32_t>(offsetof(CookieContainer_t2331592909, ___maxCookieSize_2)); }
	inline int32_t get_maxCookieSize_2() const { return ___maxCookieSize_2; }
	inline int32_t* get_address_of_maxCookieSize_2() { return &___maxCookieSize_2; }
	inline void set_maxCookieSize_2(int32_t value)
	{
		___maxCookieSize_2 = value;
	}

	inline static int32_t get_offset_of_cookies_3() { return static_cast<int32_t>(offsetof(CookieContainer_t2331592909, ___cookies_3)); }
	inline CookieCollection_t3881042616 * get_cookies_3() const { return ___cookies_3; }
	inline CookieCollection_t3881042616 ** get_address_of_cookies_3() { return &___cookies_3; }
	inline void set_cookies_3(CookieCollection_t3881042616 * value)
	{
		___cookies_3 = value;
		Il2CppCodeGenWriteBarrier((&___cookies_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COOKIECONTAINER_T2331592909_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3232077895_H
#define TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3232077895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifndef EQUALITYCOMPARER_1_T3292203282_H
#define EQUALITYCOMPARER_1_T3292203282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t3292203282  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3292203282_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t3292203282 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3292203282_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t3292203282 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t3292203282 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t3292203282 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3292203282_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1575011174* ___attrs_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrs_1)); }
	inline AttributeU5BU5D_t1575011174* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1575011174* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2278158832_H
#define EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2278158832  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t2718874744 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventList_0)); }
	inline ArrayList_t2718874744 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t2718874744 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t2718874744 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t2278158832_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2278158832 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t2278158832 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t2278158832 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef LINGEROPTION_T2688985448_H
#define LINGEROPTION_T2688985448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t2688985448  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t2688985448, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t2688985448, ___seconds_1)); }
	inline int32_t get_seconds_1() const { return ___seconds_1; }
	inline int32_t* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(int32_t value)
	{
		___seconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T2688985448_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#define PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t4164928659  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t2718874744 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___properties_1)); }
	inline ArrayList_t2718874744 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t2718874744 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t2718874744 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t4164928659_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t4164928659 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifndef FTPREQUESTCREATOR_T2926281497_H
#define FTPREQUESTCREATOR_T2926281497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpRequestCreator
struct  FtpRequestCreator_t2926281497  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPREQUESTCREATOR_T2926281497_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t874390736 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t874390736 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t312147029, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef FTPDATASTREAM_T1366729715_H
#define FTPDATASTREAM_T1366729715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpDataStream
struct  FtpDataStream_t1366729715  : public Stream_t1273022909
{
public:
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t1577818305 * ___request_1;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t1273022909 * ___networkStream_2;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_4;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_5;

public:
	inline static int32_t get_offset_of_request_1() { return static_cast<int32_t>(offsetof(FtpDataStream_t1366729715, ___request_1)); }
	inline FtpWebRequest_t1577818305 * get_request_1() const { return ___request_1; }
	inline FtpWebRequest_t1577818305 ** get_address_of_request_1() { return &___request_1; }
	inline void set_request_1(FtpWebRequest_t1577818305 * value)
	{
		___request_1 = value;
		Il2CppCodeGenWriteBarrier((&___request_1), value);
	}

	inline static int32_t get_offset_of_networkStream_2() { return static_cast<int32_t>(offsetof(FtpDataStream_t1366729715, ___networkStream_2)); }
	inline Stream_t1273022909 * get_networkStream_2() const { return ___networkStream_2; }
	inline Stream_t1273022909 ** get_address_of_networkStream_2() { return &___networkStream_2; }
	inline void set_networkStream_2(Stream_t1273022909 * value)
	{
		___networkStream_2 = value;
		Il2CppCodeGenWriteBarrier((&___networkStream_2), value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(FtpDataStream_t1366729715, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_isRead_4() { return static_cast<int32_t>(offsetof(FtpDataStream_t1366729715, ___isRead_4)); }
	inline bool get_isRead_4() const { return ___isRead_4; }
	inline bool* get_address_of_isRead_4() { return &___isRead_4; }
	inline void set_isRead_4(bool value)
	{
		___isRead_4 = value;
	}

	inline static int32_t get_offset_of_totalRead_5() { return static_cast<int32_t>(offsetof(FtpDataStream_t1366729715, ___totalRead_5)); }
	inline int32_t get_totalRead_5() const { return ___totalRead_5; }
	inline int32_t* get_address_of_totalRead_5() { return &___totalRead_5; }
	inline void set_totalRead_5(int32_t value)
	{
		___totalRead_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPDATASTREAM_T1366729715_H
#ifndef NULLABLECONVERTER_T1985728604_H
#define NULLABLECONVERTER_T1985728604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1985728604  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2249118273 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2249118273 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2249118273 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2249118273 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1985728604_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3313059048_H
#define PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3313059048  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3313059048, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
#ifndef AUTHENTICATEDSTREAM_T3415418016_H
#define AUTHENTICATEDSTREAM_T3415418016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t3415418016  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t1273022909 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ___innerStream_1)); }
	inline Stream_t1273022909 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t1273022909 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t1273022909 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_leaveStreamOpen_2() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ___leaveStreamOpen_2)); }
	inline bool get_leaveStreamOpen_2() const { return ___leaveStreamOpen_2; }
	inline bool* get_address_of_leaveStreamOpen_2() { return &___leaveStreamOpen_2; }
	inline void set_leaveStreamOpen_2(bool value)
	{
		___leaveStreamOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATEDSTREAM_T3415418016_H
#ifndef GZIPSTREAM_T3417139389_H
#define GZIPSTREAM_T3417139389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t3417139389  : public Stream_t1273022909
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t4175168077 * ___deflateStream_1;

public:
	inline static int32_t get_offset_of_deflateStream_1() { return static_cast<int32_t>(offsetof(GZipStream_t3417139389, ___deflateStream_1)); }
	inline DeflateStream_t4175168077 * get_deflateStream_1() const { return ___deflateStream_1; }
	inline DeflateStream_t4175168077 ** get_address_of_deflateStream_1() { return &___deflateStream_1; }
	inline void set_deflateStream_1(DeflateStream_t4175168077 * value)
	{
		___deflateStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___deflateStream_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T3417139389_H
#ifndef STRINGCONVERTER_T3216726494_H
#define STRINGCONVERTER_T3216726494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3216726494  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3216726494_H
#ifndef TIMESPANCONVERTER_T3504031848_H
#define TIMESPANCONVERTER_T3504031848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t3504031848  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T3504031848_H
#ifndef TYPECONVERTERATTRIBUTE_T3271584429_H
#define TYPECONVERTERATTRIBUTE_T3271584429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3271584429  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3271584429_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3271584429 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3271584429 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3271584429 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3271584429 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3271584429_H
#ifndef TYPEINFO_T323385814_H
#define TYPEINFO_T323385814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t323385814  : public Info_t3260944019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T323385814_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T303980402_H
#define WEAKOBJECTWRAPPERCOMPARER_T303980402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t303980402  : public EqualityComparer_1_t3292203282
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T303980402_H
#ifndef ENUMCONVERTER_T1688858217_H
#define ENUMCONVERTER_T1688858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1688858217  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1688858217_H
#ifndef GUIDCONVERTER_T3396672461_H
#define GUIDCONVERTER_T3396672461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3396672461  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3396672461_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
#ifndef EDITORBROWSABLESTATE_T2839071299_H
#define EDITORBROWSABLESTATE_T2839071299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2839071299 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2839071299, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T2839071299_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef FILEWEBRESPONSE_T544571260_H
#define FILEWEBRESPONSE_T544571260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebResponse
struct  FileWebResponse_t544571260  : public WebResponse_t229922639
{
public:
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t100236324 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t4292183065 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t1942268960 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;

public:
	inline static int32_t get_offset_of_responseUri_1() { return static_cast<int32_t>(offsetof(FileWebResponse_t544571260, ___responseUri_1)); }
	inline Uri_t100236324 * get_responseUri_1() const { return ___responseUri_1; }
	inline Uri_t100236324 ** get_address_of_responseUri_1() { return &___responseUri_1; }
	inline void set_responseUri_1(Uri_t100236324 * value)
	{
		___responseUri_1 = value;
		Il2CppCodeGenWriteBarrier((&___responseUri_1), value);
	}

	inline static int32_t get_offset_of_fileStream_2() { return static_cast<int32_t>(offsetof(FileWebResponse_t544571260, ___fileStream_2)); }
	inline FileStream_t4292183065 * get_fileStream_2() const { return ___fileStream_2; }
	inline FileStream_t4292183065 ** get_address_of_fileStream_2() { return &___fileStream_2; }
	inline void set_fileStream_2(FileStream_t4292183065 * value)
	{
		___fileStream_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileStream_2), value);
	}

	inline static int32_t get_offset_of_contentLength_3() { return static_cast<int32_t>(offsetof(FileWebResponse_t544571260, ___contentLength_3)); }
	inline int64_t get_contentLength_3() const { return ___contentLength_3; }
	inline int64_t* get_address_of_contentLength_3() { return &___contentLength_3; }
	inline void set_contentLength_3(int64_t value)
	{
		___contentLength_3 = value;
	}

	inline static int32_t get_offset_of_webHeaders_4() { return static_cast<int32_t>(offsetof(FileWebResponse_t544571260, ___webHeaders_4)); }
	inline WebHeaderCollection_t1942268960 * get_webHeaders_4() const { return ___webHeaders_4; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_webHeaders_4() { return &___webHeaders_4; }
	inline void set_webHeaders_4(WebHeaderCollection_t1942268960 * value)
	{
		___webHeaders_4 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_4), value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(FileWebResponse_t544571260, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBRESPONSE_T544571260_H
#ifndef UINT16CONVERTER_T819459975_H
#define UINT16CONVERTER_T819459975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t819459975  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T819459975_H
#ifndef SOCKETOPTIONNAME_T403346465_H
#define SOCKETOPTIONNAME_T403346465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionName
struct  SocketOptionName_t403346465 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOptionName_t403346465, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETOPTIONNAME_T403346465_H
#ifndef UINT32CONVERTER_T3472493373_H
#define UINT32CONVERTER_T3472493373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3472493373  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3472493373_H
#ifndef DOUBLECONVERTER_T805142290_H
#define DOUBLECONVERTER_T805142290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t805142290  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T805142290_H
#ifndef FTPSTATUSCODE_T58879933_H
#define FTPSTATUSCODE_T58879933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpStatusCode
struct  FtpStatusCode_t58879933 
{
public:
	// System.Int32 System.Net.FtpStatusCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FtpStatusCode_t58879933, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPSTATUSCODE_T58879933_H
#ifndef INT32CONVERTER_T677227065_H
#define INT32CONVERTER_T677227065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t677227065  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T677227065_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef INT16CONVERTER_T1119562914_H
#define INT16CONVERTER_T1119562914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1119562914  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1119562914_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef SBYTECONVERTER_T2970182448_H
#define SBYTECONVERTER_T2970182448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t2970182448  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T2970182448_H
#ifndef SINGLECONVERTER_T902207630_H
#define SINGLECONVERTER_T902207630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t902207630  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T902207630_H
#ifndef INT64CONVERTER_T1092099567_H
#define INT64CONVERTER_T1092099567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1092099567  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1092099567_H
#ifndef REQUESTSTATE_T4091696808_H
#define REQUESTSTATE_T4091696808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest/RequestState
struct  RequestState_t4091696808 
{
public:
	// System.Int32 System.Net.FtpWebRequest/RequestState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RequestState_t4091696808, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTSTATE_T4091696808_H
#ifndef UINT64CONVERTER_T4189949036_H
#define UINT64CONVERTER_T4189949036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t4189949036  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T4189949036_H
#ifndef SOCKETOPTIONLEVEL_T201167901_H
#define SOCKETOPTIONLEVEL_T201167901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionLevel
struct  SocketOptionLevel_t201167901 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t201167901, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETOPTIONLEVEL_T201167901_H
#ifndef SSLPOLICYERRORS_T2205227823_H
#define SSLPOLICYERRORS_T2205227823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2205227823 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2205227823, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLPOLICYERRORS_T2205227823_H
#ifndef SOCKETSHUTDOWN_T2687738148_H
#define SOCKETSHUTDOWN_T2687738148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketShutdown
struct  SocketShutdown_t2687738148 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketShutdown_t2687738148, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETSHUTDOWN_T2687738148_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_T2175930299_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef STATE_T4053927353_H
#define STATE_T4053927353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkStream/State
struct  State_t4053927353 
{
public:
	// System.Int32 System.Net.ChunkStream/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t4053927353, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T4053927353_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETFLAGS_T2969870452_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SELECTMODE_T1123767949_H
#define SELECTMODE_T1123767949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t1123767949 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t1123767949, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTMODE_T1123767949_H
#ifndef SOCKETOPERATION_T1288882297_H
#define SOCKETOPERATION_T1288882297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketOperation
struct  SocketOperation_t1288882297 
{
public:
	// System.Int32 System.Net.Sockets.Socket/SocketOperation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOperation_t1288882297, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETOPERATION_T1288882297_H
#ifndef SSLSTREAM_T2700741536_H
#define SSLSTREAM_T2700741536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t2700741536  : public AuthenticatedStream_t3415418016
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t1667413407 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t3014364904 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t2354453884 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___ssl_stream_3)); }
	inline SslStreamBase_t1667413407 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t1667413407 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t1667413407 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___ssl_stream_3), value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___validation_callback_4), value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t2354453884 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t2354453884 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t2354453884 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier((&___selection_callback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T2700741536_H
#ifndef SOCKETERROR_T3760144386_H
#define SOCKETERROR_T3760144386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t3760144386 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketError_t3760144386, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETERROR_T3760144386_H
#ifndef DECOMPRESSIONMETHODS_T1612219745_H
#define DECOMPRESSIONMETHODS_T1612219745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DecompressionMethods
struct  DecompressionMethods_t1612219745 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DecompressionMethods_t1612219745, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECOMPRESSIONMETHODS_T1612219745_H
#ifndef COMPRESSIONMODE_T3714291783_H
#define COMPRESSIONMODE_T3714291783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.CompressionMode
struct  CompressionMode_t3714291783 
{
public:
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMode_t3714291783, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMODE_T3714291783_H
#ifndef COOKIEEXCEPTION_T2325395694_H
#define COOKIEEXCEPTION_T2325395694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieException
struct  CookieException_t2325395694  : public FormatException_t154580423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COOKIEEXCEPTION_T2325395694_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DEFLATESTREAM_T4175168077_H
#define DEFLATESTREAM_T4175168077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t4175168077  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t1273022909 * ___base_stream_1;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_2;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_3;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_4;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t876388624 * ___feeder_5;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	intptr_t ___z_stream_6;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t4116647657* ___io_buffer_7;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t3351438187  ___data_8;

public:
	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___base_stream_1)); }
	inline Stream_t1273022909 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t1273022909 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t1273022909 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___leaveOpen_3)); }
	inline bool get_leaveOpen_3() const { return ___leaveOpen_3; }
	inline bool* get_address_of_leaveOpen_3() { return &___leaveOpen_3; }
	inline void set_leaveOpen_3(bool value)
	{
		___leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_feeder_5() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___feeder_5)); }
	inline UnmanagedReadOrWrite_t876388624 * get_feeder_5() const { return ___feeder_5; }
	inline UnmanagedReadOrWrite_t876388624 ** get_address_of_feeder_5() { return &___feeder_5; }
	inline void set_feeder_5(UnmanagedReadOrWrite_t876388624 * value)
	{
		___feeder_5 = value;
		Il2CppCodeGenWriteBarrier((&___feeder_5), value);
	}

	inline static int32_t get_offset_of_z_stream_6() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___z_stream_6)); }
	inline intptr_t get_z_stream_6() const { return ___z_stream_6; }
	inline intptr_t* get_address_of_z_stream_6() { return &___z_stream_6; }
	inline void set_z_stream_6(intptr_t value)
	{
		___z_stream_6 = value;
	}

	inline static int32_t get_offset_of_io_buffer_7() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___io_buffer_7)); }
	inline ByteU5BU5D_t4116647657* get_io_buffer_7() const { return ___io_buffer_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_io_buffer_7() { return &___io_buffer_7; }
	inline void set_io_buffer_7(ByteU5BU5D_t4116647657* value)
	{
		___io_buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___io_buffer_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___data_8)); }
	inline GCHandle_t3351438187  get_data_8() const { return ___data_8; }
	inline GCHandle_t3351438187 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(GCHandle_t3351438187  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T4175168077_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t1119025450 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___socket_2)); }
	inline Socket_t1119025450 * get_socket_2() const { return ___socket_2; }
	inline Socket_t1119025450 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t1119025450 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1475454531_H
#define EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1475454531  : public Attribute_t861562559
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1475454531, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifndef CHUNKSTREAM_T2634567336_H
#define CHUNKSTREAM_T2634567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkStream
struct  ChunkStream_t2634567336  : public RuntimeObject
{
public:
	// System.Net.WebHeaderCollection System.Net.ChunkStream::headers
	WebHeaderCollection_t1942268960 * ___headers_0;
	// System.Int32 System.Net.ChunkStream::chunkSize
	int32_t ___chunkSize_1;
	// System.Int32 System.Net.ChunkStream::chunkRead
	int32_t ___chunkRead_2;
	// System.Net.ChunkStream/State System.Net.ChunkStream::state
	int32_t ___state_3;
	// System.Text.StringBuilder System.Net.ChunkStream::saved
	StringBuilder_t * ___saved_4;
	// System.Boolean System.Net.ChunkStream::sawCR
	bool ___sawCR_5;
	// System.Boolean System.Net.ChunkStream::gotit
	bool ___gotit_6;
	// System.Int32 System.Net.ChunkStream::trailerState
	int32_t ___trailerState_7;
	// System.Collections.ArrayList System.Net.ChunkStream::chunks
	ArrayList_t2718874744 * ___chunks_8;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___headers_0)); }
	inline WebHeaderCollection_t1942268960 * get_headers_0() const { return ___headers_0; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(WebHeaderCollection_t1942268960 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((&___headers_0), value);
	}

	inline static int32_t get_offset_of_chunkSize_1() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___chunkSize_1)); }
	inline int32_t get_chunkSize_1() const { return ___chunkSize_1; }
	inline int32_t* get_address_of_chunkSize_1() { return &___chunkSize_1; }
	inline void set_chunkSize_1(int32_t value)
	{
		___chunkSize_1 = value;
	}

	inline static int32_t get_offset_of_chunkRead_2() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___chunkRead_2)); }
	inline int32_t get_chunkRead_2() const { return ___chunkRead_2; }
	inline int32_t* get_address_of_chunkRead_2() { return &___chunkRead_2; }
	inline void set_chunkRead_2(int32_t value)
	{
		___chunkRead_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_saved_4() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___saved_4)); }
	inline StringBuilder_t * get_saved_4() const { return ___saved_4; }
	inline StringBuilder_t ** get_address_of_saved_4() { return &___saved_4; }
	inline void set_saved_4(StringBuilder_t * value)
	{
		___saved_4 = value;
		Il2CppCodeGenWriteBarrier((&___saved_4), value);
	}

	inline static int32_t get_offset_of_sawCR_5() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___sawCR_5)); }
	inline bool get_sawCR_5() const { return ___sawCR_5; }
	inline bool* get_address_of_sawCR_5() { return &___sawCR_5; }
	inline void set_sawCR_5(bool value)
	{
		___sawCR_5 = value;
	}

	inline static int32_t get_offset_of_gotit_6() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___gotit_6)); }
	inline bool get_gotit_6() const { return ___gotit_6; }
	inline bool* get_address_of_gotit_6() { return &___gotit_6; }
	inline void set_gotit_6(bool value)
	{
		___gotit_6 = value;
	}

	inline static int32_t get_offset_of_trailerState_7() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___trailerState_7)); }
	inline int32_t get_trailerState_7() const { return ___trailerState_7; }
	inline int32_t* get_address_of_trailerState_7() { return &___trailerState_7; }
	inline void set_trailerState_7(int32_t value)
	{
		___trailerState_7 = value;
	}

	inline static int32_t get_offset_of_chunks_8() { return static_cast<int32_t>(offsetof(ChunkStream_t2634567336, ___chunks_8)); }
	inline ArrayList_t2718874744 * get_chunks_8() const { return ___chunks_8; }
	inline ArrayList_t2718874744 ** get_address_of_chunks_8() { return &___chunks_8; }
	inline void set_chunks_8(ArrayList_t2718874744 * value)
	{
		___chunks_8 = value;
		Il2CppCodeGenWriteBarrier((&___chunks_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUNKSTREAM_T2634567336_H
#ifndef FTPSTATUS_T2376455776_H
#define FTPSTATUS_T2376455776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpStatus
struct  FtpStatus_t2376455776  : public RuntimeObject
{
public:
	// System.Net.FtpStatusCode System.Net.FtpStatus::statusCode
	int32_t ___statusCode_0;
	// System.String System.Net.FtpStatus::statusDescription
	String_t* ___statusDescription_1;

public:
	inline static int32_t get_offset_of_statusCode_0() { return static_cast<int32_t>(offsetof(FtpStatus_t2376455776, ___statusCode_0)); }
	inline int32_t get_statusCode_0() const { return ___statusCode_0; }
	inline int32_t* get_address_of_statusCode_0() { return &___statusCode_0; }
	inline void set_statusCode_0(int32_t value)
	{
		___statusCode_0 = value;
	}

	inline static int32_t get_offset_of_statusDescription_1() { return static_cast<int32_t>(offsetof(FtpStatus_t2376455776, ___statusDescription_1)); }
	inline String_t* get_statusDescription_1() const { return ___statusDescription_1; }
	inline String_t** get_address_of_statusDescription_1() { return &___statusDescription_1; }
	inline void set_statusDescription_1(String_t* value)
	{
		___statusDescription_1 = value;
		Il2CppCodeGenWriteBarrier((&___statusDescription_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPSTATUS_T2376455776_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t3637523393 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t3637523393 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Boolean System.Net.Sockets.Socket::useoverlappedIO
	bool ___useoverlappedIO_3;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_5;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_8;
	// System.IntPtr System.Net.Sockets.Socket::socket
	intptr_t ___socket_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_12;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_13;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t2300836069 * ___blocking_thread_14;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_15;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_17;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_18;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_19;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_20;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_21;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___readQ_0)); }
	inline Queue_t3637523393 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t3637523393 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t3637523393 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___writeQ_1)); }
	inline Queue_t3637523393 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t3637523393 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t3637523393 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_useoverlappedIO_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useoverlappedIO_3)); }
	inline bool get_useoverlappedIO_3() const { return ___useoverlappedIO_3; }
	inline bool* get_address_of_useoverlappedIO_3() { return &___useoverlappedIO_3; }
	inline void set_useoverlappedIO_3(bool value)
	{
		___useoverlappedIO_3 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MinListenPort_4)); }
	inline int32_t get_MinListenPort_4() const { return ___MinListenPort_4; }
	inline int32_t* get_address_of_MinListenPort_4() { return &___MinListenPort_4; }
	inline void set_MinListenPort_4(int32_t value)
	{
		___MinListenPort_4 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MaxListenPort_5)); }
	inline int32_t get_MaxListenPort_5() const { return ___MaxListenPort_5; }
	inline int32_t* get_address_of_MaxListenPort_5() { return &___MaxListenPort_5; }
	inline void set_MaxListenPort_5(int32_t value)
	{
		___MaxListenPort_5 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_8)); }
	inline int32_t get_linger_timeout_8() const { return ___linger_timeout_8; }
	inline int32_t* get_address_of_linger_timeout_8() { return &___linger_timeout_8; }
	inline void set_linger_timeout_8(int32_t value)
	{
		___linger_timeout_8 = value;
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_9)); }
	inline intptr_t get_socket_9() const { return ___socket_9; }
	inline intptr_t* get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(intptr_t value)
	{
		___socket_9 = value;
	}

	inline static int32_t get_offset_of_address_family_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___address_family_10)); }
	inline int32_t get_address_family_10() const { return ___address_family_10; }
	inline int32_t* get_address_of_address_family_10() { return &___address_family_10; }
	inline void set_address_family_10(int32_t value)
	{
		___address_family_10 = value;
	}

	inline static int32_t get_offset_of_socket_type_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_type_11)); }
	inline int32_t get_socket_type_11() const { return ___socket_type_11; }
	inline int32_t* get_address_of_socket_type_11() { return &___socket_type_11; }
	inline void set_socket_type_11(int32_t value)
	{
		___socket_type_11 = value;
	}

	inline static int32_t get_offset_of_protocol_type_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocol_type_12)); }
	inline int32_t get_protocol_type_12() const { return ___protocol_type_12; }
	inline int32_t* get_address_of_protocol_type_12() { return &___protocol_type_12; }
	inline void set_protocol_type_12(int32_t value)
	{
		___protocol_type_12 = value;
	}

	inline static int32_t get_offset_of_blocking_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_13)); }
	inline bool get_blocking_13() const { return ___blocking_13; }
	inline bool* get_address_of_blocking_13() { return &___blocking_13; }
	inline void set_blocking_13(bool value)
	{
		___blocking_13 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_thread_14)); }
	inline Thread_t2300836069 * get_blocking_thread_14() const { return ___blocking_thread_14; }
	inline Thread_t2300836069 ** get_address_of_blocking_thread_14() { return &___blocking_thread_14; }
	inline void set_blocking_thread_14(Thread_t2300836069 * value)
	{
		___blocking_thread_14 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_14), value);
	}

	inline static int32_t get_offset_of_isbound_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___isbound_15)); }
	inline bool get_isbound_15() const { return ___isbound_15; }
	inline bool* get_address_of_isbound_15() { return &___isbound_15; }
	inline void set_isbound_15(bool value)
	{
		___isbound_15 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___max_bind_count_17)); }
	inline int32_t get_max_bind_count_17() const { return ___max_bind_count_17; }
	inline int32_t* get_address_of_max_bind_count_17() { return &___max_bind_count_17; }
	inline void set_max_bind_count_17(int32_t value)
	{
		___max_bind_count_17 = value;
	}

	inline static int32_t get_offset_of_connected_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connected_18)); }
	inline bool get_connected_18() const { return ___connected_18; }
	inline bool* get_address_of_connected_18() { return &___connected_18; }
	inline void set_connected_18(bool value)
	{
		___connected_18 = value;
	}

	inline static int32_t get_offset_of_closed_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___closed_19)); }
	inline bool get_closed_19() const { return ___closed_19; }
	inline bool* get_address_of_closed_19() { return &___closed_19; }
	inline void set_closed_19(bool value)
	{
		___closed_19 = value;
	}

	inline static int32_t get_offset_of_disposed_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___disposed_20)); }
	inline bool get_disposed_20() const { return ___disposed_20; }
	inline bool* get_address_of_disposed_20() { return &___disposed_20; }
	inline void set_disposed_20(bool value)
	{
		___disposed_20 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_21)); }
	inline EndPoint_t982345378 * get_seed_endpoint_21() const { return ___seed_endpoint_21; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_21() { return &___seed_endpoint_21; }
	inline void set_seed_endpoint_21(EndPoint_t982345378 * value)
	{
		___seed_endpoint_21 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_21), value);
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_6;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_7;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_16;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_22;

public:
	inline static int32_t get_offset_of_ipv4Supported_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv4Supported_6)); }
	inline int32_t get_ipv4Supported_6() const { return ___ipv4Supported_6; }
	inline int32_t* get_address_of_ipv4Supported_6() { return &___ipv4Supported_6; }
	inline void set_ipv4Supported_6(int32_t value)
	{
		___ipv4Supported_6 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv6Supported_7)); }
	inline int32_t get_ipv6Supported_7() const { return ___ipv6Supported_7; }
	inline int32_t* get_address_of_ipv6Supported_7() { return &___ipv6Supported_7; }
	inline void set_ipv6Supported_7(int32_t value)
	{
		___ipv6Supported_7 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___current_bind_count_16)); }
	inline int32_t get_current_bind_count_16() const { return ___current_bind_count_16; }
	inline int32_t* get_address_of_current_bind_count_16() { return &___current_bind_count_16; }
	inline void set_current_bind_count_16(int32_t value)
	{
		___current_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___check_socket_policy_22)); }
	inline MethodInfo_t * get_check_socket_policy_22() const { return ___check_socket_policy_22; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_22() { return &___check_socket_policy_22; }
	inline void set_check_socket_policy_22(MethodInfo_t * value)
	{
		___check_socket_policy_22 = value;
		Il2CppCodeGenWriteBarrier((&___check_socket_policy_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef SOCKETASYNCRESULT_T2080034863_H
#define SOCKETASYNCRESULT_T2080034863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketAsyncResult
struct  SocketAsyncResult_t2080034863  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t1119025450 * ___Sock_0;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	intptr_t ___handle_1;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	RuntimeObject * ___state_2;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t3962456242 * ___callback_3;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t1743403487 * ___waithandle_4;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t * ___delayedException_5;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t982345378 * ___EndPoint_6;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t4116647657* ___Buffer_7;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size_9;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags_10;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t1119025450 * ___AcceptSocket_11;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t596328627* ___Addresses_12;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port_13;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_14;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t1119025450 * ___acc_socket_16;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::total
	int32_t ___total_17;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed
	bool ___completed_19;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::blocking
	bool ___blocking_20;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::error
	int32_t ___error_21;
	// System.Net.Sockets.Socket/SocketOperation System.Net.Sockets.Socket/SocketAsyncResult::operation
	int32_t ___operation_22;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::ares
	RuntimeObject * ___ares_23;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::EndCalled
	int32_t ___EndCalled_24;

public:
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Sock_0)); }
	inline Socket_t1119025450 * get_Sock_0() const { return ___Sock_0; }
	inline Socket_t1119025450 ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(Socket_t1119025450 * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sock_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___callback_3)); }
	inline AsyncCallback_t3962456242 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t3962456242 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t3962456242 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_waithandle_4() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___waithandle_4)); }
	inline WaitHandle_t1743403487 * get_waithandle_4() const { return ___waithandle_4; }
	inline WaitHandle_t1743403487 ** get_address_of_waithandle_4() { return &___waithandle_4; }
	inline void set_waithandle_4(WaitHandle_t1743403487 * value)
	{
		___waithandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___waithandle_4), value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___delayedException_5)); }
	inline Exception_t * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier((&___delayedException_5), value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___EndPoint_6)); }
	inline EndPoint_t982345378 * get_EndPoint_6() const { return ___EndPoint_6; }
	inline EndPoint_t982345378 ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(EndPoint_t982345378 * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_6), value);
	}

	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Buffer_7)); }
	inline ByteU5BU5D_t4116647657* get_Buffer_7() const { return ___Buffer_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(ByteU5BU5D_t4116647657* value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___AcceptSocket_11)); }
	inline Socket_t1119025450 * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline Socket_t1119025450 ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(Socket_t1119025450 * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_11), value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Addresses_12)); }
	inline IPAddressU5BU5D_t596328627* get_Addresses_12() const { return ___Addresses_12; }
	inline IPAddressU5BU5D_t596328627** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(IPAddressU5BU5D_t596328627* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_12), value);
	}

	inline static int32_t get_offset_of_Port_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Port_13)); }
	inline int32_t get_Port_13() const { return ___Port_13; }
	inline int32_t* get_address_of_Port_13() { return &___Port_13; }
	inline void set_Port_13(int32_t value)
	{
		___Port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___Buffers_14)); }
	inline RuntimeObject* get_Buffers_14() const { return ___Buffers_14; }
	inline RuntimeObject** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(RuntimeObject* value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_14), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___acc_socket_16)); }
	inline Socket_t1119025450 * get_acc_socket_16() const { return ___acc_socket_16; }
	inline Socket_t1119025450 ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(Socket_t1119025450 * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier((&___acc_socket_16), value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_blocking_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___blocking_20)); }
	inline bool get_blocking_20() const { return ___blocking_20; }
	inline bool* get_address_of_blocking_20() { return &___blocking_20; }
	inline void set_blocking_20(bool value)
	{
		___blocking_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___ares_23)); }
	inline RuntimeObject * get_ares_23() const { return ___ares_23; }
	inline RuntimeObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(RuntimeObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier((&___ares_23), value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2080034863, ___EndCalled_24)); }
	inline int32_t get_EndCalled_24() const { return ___EndCalled_24; }
	inline int32_t* get_address_of_EndCalled_24() { return &___EndCalled_24; }
	inline void set_EndCalled_24(int32_t value)
	{
		___EndCalled_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2080034863_marshaled_pinvoke
{
	Socket_t1119025450 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t1743403487 * ___waithandle_4;
	Exception_t * ___delayedException_5;
	EndPoint_t982345378 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t1119025450 * ___AcceptSocket_11;
	IPAddressU5BU5D_t596328627* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t1119025450 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
// Native definition for COM marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2080034863_marshaled_com
{
	Socket_t1119025450 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t1743403487 * ___waithandle_4;
	Exception_t * ___delayedException_5;
	EndPoint_t982345378 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t1119025450 * ___AcceptSocket_11;
	IPAddressU5BU5D_t596328627* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t1119025450 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
#endif // SOCKETASYNCRESULT_T2080034863_H
#ifndef FILEWEBREQUEST_T591858885_H
#define FILEWEBREQUEST_T591858885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest
struct  FileWebRequest_t591858885  : public WebRequest_t1939381076
{
public:
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t100236324 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t1942268960 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	RuntimeObject* ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	RuntimeObject* ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t544571260 * ___webResponse_16;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t1333520283 * ___requestEndEvent_17;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_18;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_19;

public:
	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___uri_6)); }
	inline Uri_t100236324 * get_uri_6() const { return ___uri_6; }
	inline Uri_t100236324 ** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(Uri_t100236324 * value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_webHeaders_7() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___webHeaders_7)); }
	inline WebHeaderCollection_t1942268960 * get_webHeaders_7() const { return ___webHeaders_7; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_webHeaders_7() { return &___webHeaders_7; }
	inline void set_webHeaders_7(WebHeaderCollection_t1942268960 * value)
	{
		___webHeaders_7 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_7), value);
	}

	inline static int32_t get_offset_of_credentials_8() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___credentials_8)); }
	inline RuntimeObject* get_credentials_8() const { return ___credentials_8; }
	inline RuntimeObject** get_address_of_credentials_8() { return &___credentials_8; }
	inline void set_credentials_8(RuntimeObject* value)
	{
		___credentials_8 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_8), value);
	}

	inline static int32_t get_offset_of_connectionGroup_9() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___connectionGroup_9)); }
	inline String_t* get_connectionGroup_9() const { return ___connectionGroup_9; }
	inline String_t** get_address_of_connectionGroup_9() { return &___connectionGroup_9; }
	inline void set_connectionGroup_9(String_t* value)
	{
		___connectionGroup_9 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_9), value);
	}

	inline static int32_t get_offset_of_contentLength_10() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___contentLength_10)); }
	inline int64_t get_contentLength_10() const { return ___contentLength_10; }
	inline int64_t* get_address_of_contentLength_10() { return &___contentLength_10; }
	inline void set_contentLength_10(int64_t value)
	{
		___contentLength_10 = value;
	}

	inline static int32_t get_offset_of_fileAccess_11() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___fileAccess_11)); }
	inline int32_t get_fileAccess_11() const { return ___fileAccess_11; }
	inline int32_t* get_address_of_fileAccess_11() { return &___fileAccess_11; }
	inline void set_fileAccess_11(int32_t value)
	{
		___fileAccess_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___method_12)); }
	inline String_t* get_method_12() const { return ___method_12; }
	inline String_t** get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(String_t* value)
	{
		___method_12 = value;
		Il2CppCodeGenWriteBarrier((&___method_12), value);
	}

	inline static int32_t get_offset_of_proxy_13() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___proxy_13)); }
	inline RuntimeObject* get_proxy_13() const { return ___proxy_13; }
	inline RuntimeObject** get_address_of_proxy_13() { return &___proxy_13; }
	inline void set_proxy_13(RuntimeObject* value)
	{
		___proxy_13 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_13), value);
	}

	inline static int32_t get_offset_of_preAuthenticate_14() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___preAuthenticate_14)); }
	inline bool get_preAuthenticate_14() const { return ___preAuthenticate_14; }
	inline bool* get_address_of_preAuthenticate_14() { return &___preAuthenticate_14; }
	inline void set_preAuthenticate_14(bool value)
	{
		___preAuthenticate_14 = value;
	}

	inline static int32_t get_offset_of_timeout_15() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___timeout_15)); }
	inline int32_t get_timeout_15() const { return ___timeout_15; }
	inline int32_t* get_address_of_timeout_15() { return &___timeout_15; }
	inline void set_timeout_15(int32_t value)
	{
		___timeout_15 = value;
	}

	inline static int32_t get_offset_of_webResponse_16() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___webResponse_16)); }
	inline FileWebResponse_t544571260 * get_webResponse_16() const { return ___webResponse_16; }
	inline FileWebResponse_t544571260 ** get_address_of_webResponse_16() { return &___webResponse_16; }
	inline void set_webResponse_16(FileWebResponse_t544571260 * value)
	{
		___webResponse_16 = value;
		Il2CppCodeGenWriteBarrier((&___webResponse_16), value);
	}

	inline static int32_t get_offset_of_requestEndEvent_17() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___requestEndEvent_17)); }
	inline AutoResetEvent_t1333520283 * get_requestEndEvent_17() const { return ___requestEndEvent_17; }
	inline AutoResetEvent_t1333520283 ** get_address_of_requestEndEvent_17() { return &___requestEndEvent_17; }
	inline void set_requestEndEvent_17(AutoResetEvent_t1333520283 * value)
	{
		___requestEndEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___requestEndEvent_17), value);
	}

	inline static int32_t get_offset_of_requesting_18() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___requesting_18)); }
	inline bool get_requesting_18() const { return ___requesting_18; }
	inline bool* get_address_of_requesting_18() { return &___requesting_18; }
	inline void set_requesting_18(bool value)
	{
		___requesting_18 = value;
	}

	inline static int32_t get_offset_of_asyncResponding_19() { return static_cast<int32_t>(offsetof(FileWebRequest_t591858885, ___asyncResponding_19)); }
	inline bool get_asyncResponding_19() const { return ___asyncResponding_19; }
	inline bool* get_address_of_asyncResponding_19() { return &___asyncResponding_19; }
	inline void set_asyncResponding_19(bool value)
	{
		___asyncResponding_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUEST_T591858885_H
#ifndef FILEWEBSTREAM_T586107972_H
#define FILEWEBSTREAM_T586107972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest/FileWebStream
struct  FileWebStream_t586107972  : public FileStream_t4292183065
{
public:
	// System.Net.FileWebRequest System.Net.FileWebRequest/FileWebStream::webRequest
	FileWebRequest_t591858885 * ___webRequest_15;

public:
	inline static int32_t get_offset_of_webRequest_15() { return static_cast<int32_t>(offsetof(FileWebStream_t586107972, ___webRequest_15)); }
	inline FileWebRequest_t591858885 * get_webRequest_15() const { return ___webRequest_15; }
	inline FileWebRequest_t591858885 ** get_address_of_webRequest_15() { return &___webRequest_15; }
	inline void set_webRequest_15(FileWebRequest_t591858885 * value)
	{
		___webRequest_15 = value;
		Il2CppCodeGenWriteBarrier((&___webRequest_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBSTREAM_T586107972_H
#ifndef DIGESTSESSION_T1433627624_H
#define DIGESTSESSION_T1433627624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestSession
struct  DigestSession_t1433627624  : public RuntimeObject
{
public:
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t3738529785  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t1432317219 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t341650829 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;

public:
	inline static int32_t get_offset_of_lastUse_1() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624, ___lastUse_1)); }
	inline DateTime_t3738529785  get_lastUse_1() const { return ___lastUse_1; }
	inline DateTime_t3738529785 * get_address_of_lastUse_1() { return &___lastUse_1; }
	inline void set_lastUse_1(DateTime_t3738529785  value)
	{
		___lastUse_1 = value;
	}

	inline static int32_t get_offset_of__nc_2() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624, ____nc_2)); }
	inline int32_t get__nc_2() const { return ____nc_2; }
	inline int32_t* get_address_of__nc_2() { return &____nc_2; }
	inline void set__nc_2(int32_t value)
	{
		____nc_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624, ___hash_3)); }
	inline HashAlgorithm_t1432317219 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t1432317219 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___hash_3), value);
	}

	inline static int32_t get_offset_of_parser_4() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624, ___parser_4)); }
	inline DigestHeaderParser_t341650829 * get_parser_4() const { return ___parser_4; }
	inline DigestHeaderParser_t341650829 ** get_address_of_parser_4() { return &___parser_4; }
	inline void set_parser_4(DigestHeaderParser_t341650829 * value)
	{
		___parser_4 = value;
		Il2CppCodeGenWriteBarrier((&___parser_4), value);
	}

	inline static int32_t get_offset_of__cnonce_5() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624, ____cnonce_5)); }
	inline String_t* get__cnonce_5() const { return ____cnonce_5; }
	inline String_t** get_address_of__cnonce_5() { return &____cnonce_5; }
	inline void set__cnonce_5(String_t* value)
	{
		____cnonce_5 = value;
		Il2CppCodeGenWriteBarrier((&____cnonce_5), value);
	}
};

struct DigestSession_t1433627624_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(DigestSession_t1433627624_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGESTSESSION_T1433627624_H
#ifndef COOKIE_T993873397_H
#define COOKIE_T993873397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cookie
struct  Cookie_t993873397  : public RuntimeObject
{
public:
	// System.String System.Net.Cookie::comment
	String_t* ___comment_0;
	// System.Uri System.Net.Cookie::commentUri
	Uri_t100236324 * ___commentUri_1;
	// System.Boolean System.Net.Cookie::discard
	bool ___discard_2;
	// System.String System.Net.Cookie::domain
	String_t* ___domain_3;
	// System.DateTime System.Net.Cookie::expires
	DateTime_t3738529785  ___expires_4;
	// System.Boolean System.Net.Cookie::httpOnly
	bool ___httpOnly_5;
	// System.String System.Net.Cookie::name
	String_t* ___name_6;
	// System.String System.Net.Cookie::path
	String_t* ___path_7;
	// System.String System.Net.Cookie::port
	String_t* ___port_8;
	// System.Int32[] System.Net.Cookie::ports
	Int32U5BU5D_t385246372* ___ports_9;
	// System.Boolean System.Net.Cookie::secure
	bool ___secure_10;
	// System.DateTime System.Net.Cookie::timestamp
	DateTime_t3738529785  ___timestamp_11;
	// System.String System.Net.Cookie::val
	String_t* ___val_12;
	// System.Int32 System.Net.Cookie::version
	int32_t ___version_13;
	// System.Boolean System.Net.Cookie::exact_domain
	bool ___exact_domain_17;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}

	inline static int32_t get_offset_of_commentUri_1() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___commentUri_1)); }
	inline Uri_t100236324 * get_commentUri_1() const { return ___commentUri_1; }
	inline Uri_t100236324 ** get_address_of_commentUri_1() { return &___commentUri_1; }
	inline void set_commentUri_1(Uri_t100236324 * value)
	{
		___commentUri_1 = value;
		Il2CppCodeGenWriteBarrier((&___commentUri_1), value);
	}

	inline static int32_t get_offset_of_discard_2() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___discard_2)); }
	inline bool get_discard_2() const { return ___discard_2; }
	inline bool* get_address_of_discard_2() { return &___discard_2; }
	inline void set_discard_2(bool value)
	{
		___discard_2 = value;
	}

	inline static int32_t get_offset_of_domain_3() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___domain_3)); }
	inline String_t* get_domain_3() const { return ___domain_3; }
	inline String_t** get_address_of_domain_3() { return &___domain_3; }
	inline void set_domain_3(String_t* value)
	{
		___domain_3 = value;
		Il2CppCodeGenWriteBarrier((&___domain_3), value);
	}

	inline static int32_t get_offset_of_expires_4() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___expires_4)); }
	inline DateTime_t3738529785  get_expires_4() const { return ___expires_4; }
	inline DateTime_t3738529785 * get_address_of_expires_4() { return &___expires_4; }
	inline void set_expires_4(DateTime_t3738529785  value)
	{
		___expires_4 = value;
	}

	inline static int32_t get_offset_of_httpOnly_5() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___httpOnly_5)); }
	inline bool get_httpOnly_5() const { return ___httpOnly_5; }
	inline bool* get_address_of_httpOnly_5() { return &___httpOnly_5; }
	inline void set_httpOnly_5(bool value)
	{
		___httpOnly_5 = value;
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_path_7() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___path_7)); }
	inline String_t* get_path_7() const { return ___path_7; }
	inline String_t** get_address_of_path_7() { return &___path_7; }
	inline void set_path_7(String_t* value)
	{
		___path_7 = value;
		Il2CppCodeGenWriteBarrier((&___path_7), value);
	}

	inline static int32_t get_offset_of_port_8() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___port_8)); }
	inline String_t* get_port_8() const { return ___port_8; }
	inline String_t** get_address_of_port_8() { return &___port_8; }
	inline void set_port_8(String_t* value)
	{
		___port_8 = value;
		Il2CppCodeGenWriteBarrier((&___port_8), value);
	}

	inline static int32_t get_offset_of_ports_9() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___ports_9)); }
	inline Int32U5BU5D_t385246372* get_ports_9() const { return ___ports_9; }
	inline Int32U5BU5D_t385246372** get_address_of_ports_9() { return &___ports_9; }
	inline void set_ports_9(Int32U5BU5D_t385246372* value)
	{
		___ports_9 = value;
		Il2CppCodeGenWriteBarrier((&___ports_9), value);
	}

	inline static int32_t get_offset_of_secure_10() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___secure_10)); }
	inline bool get_secure_10() const { return ___secure_10; }
	inline bool* get_address_of_secure_10() { return &___secure_10; }
	inline void set_secure_10(bool value)
	{
		___secure_10 = value;
	}

	inline static int32_t get_offset_of_timestamp_11() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___timestamp_11)); }
	inline DateTime_t3738529785  get_timestamp_11() const { return ___timestamp_11; }
	inline DateTime_t3738529785 * get_address_of_timestamp_11() { return &___timestamp_11; }
	inline void set_timestamp_11(DateTime_t3738529785  value)
	{
		___timestamp_11 = value;
	}

	inline static int32_t get_offset_of_val_12() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___val_12)); }
	inline String_t* get_val_12() const { return ___val_12; }
	inline String_t** get_address_of_val_12() { return &___val_12; }
	inline void set_val_12(String_t* value)
	{
		___val_12 = value;
		Il2CppCodeGenWriteBarrier((&___val_12), value);
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___version_13)); }
	inline int32_t get_version_13() const { return ___version_13; }
	inline int32_t* get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(int32_t value)
	{
		___version_13 = value;
	}

	inline static int32_t get_offset_of_exact_domain_17() { return static_cast<int32_t>(offsetof(Cookie_t993873397, ___exact_domain_17)); }
	inline bool get_exact_domain_17() const { return ___exact_domain_17; }
	inline bool* get_address_of_exact_domain_17() { return &___exact_domain_17; }
	inline void set_exact_domain_17(bool value)
	{
		___exact_domain_17 = value;
	}
};

struct Cookie_t993873397_StaticFields
{
public:
	// System.Char[] System.Net.Cookie::reservedCharsName
	CharU5BU5D_t3528271667* ___reservedCharsName_14;
	// System.Char[] System.Net.Cookie::portSeparators
	CharU5BU5D_t3528271667* ___portSeparators_15;
	// System.String System.Net.Cookie::tspecials
	String_t* ___tspecials_16;

public:
	inline static int32_t get_offset_of_reservedCharsName_14() { return static_cast<int32_t>(offsetof(Cookie_t993873397_StaticFields, ___reservedCharsName_14)); }
	inline CharU5BU5D_t3528271667* get_reservedCharsName_14() const { return ___reservedCharsName_14; }
	inline CharU5BU5D_t3528271667** get_address_of_reservedCharsName_14() { return &___reservedCharsName_14; }
	inline void set_reservedCharsName_14(CharU5BU5D_t3528271667* value)
	{
		___reservedCharsName_14 = value;
		Il2CppCodeGenWriteBarrier((&___reservedCharsName_14), value);
	}

	inline static int32_t get_offset_of_portSeparators_15() { return static_cast<int32_t>(offsetof(Cookie_t993873397_StaticFields, ___portSeparators_15)); }
	inline CharU5BU5D_t3528271667* get_portSeparators_15() const { return ___portSeparators_15; }
	inline CharU5BU5D_t3528271667** get_address_of_portSeparators_15() { return &___portSeparators_15; }
	inline void set_portSeparators_15(CharU5BU5D_t3528271667* value)
	{
		___portSeparators_15 = value;
		Il2CppCodeGenWriteBarrier((&___portSeparators_15), value);
	}

	inline static int32_t get_offset_of_tspecials_16() { return static_cast<int32_t>(offsetof(Cookie_t993873397_StaticFields, ___tspecials_16)); }
	inline String_t* get_tspecials_16() const { return ___tspecials_16; }
	inline String_t** get_address_of_tspecials_16() { return &___tspecials_16; }
	inline void set_tspecials_16(String_t* value)
	{
		___tspecials_16 = value;
		Il2CppCodeGenWriteBarrier((&___tspecials_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COOKIE_T993873397_H
#ifndef WRITEMETHOD_T2538911768_H
#define WRITEMETHOD_T2538911768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/WriteMethod
struct  WriteMethod_t2538911768  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEMETHOD_T2538911768_H
#ifndef READMETHOD_T893206259_H
#define READMETHOD_T893206259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/ReadMethod
struct  ReadMethod_t893206259  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READMETHOD_T893206259_H
#ifndef UNMANAGEDREADORWRITE_T876388624_H
#define UNMANAGEDREADORWRITE_T876388624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct  UnmanagedReadOrWrite_t876388624  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDREADORWRITE_T876388624_H
#ifndef READDELEGATE_T4266946825_H
#define READDELEGATE_T4266946825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpDataStream/ReadDelegate
struct  ReadDelegate_t4266946825  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READDELEGATE_T4266946825_H
#ifndef WRITEDELEGATE_T2016697242_H
#define WRITEDELEGATE_T2016697242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpDataStream/WriteDelegate
struct  WriteDelegate_t2016697242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDELEGATE_T2016697242_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H
#ifndef FTPWEBREQUEST_T1577818305_H
#define FTPWEBREQUEST_T1577818305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t1577818305  : public WebRequest_t1939381076
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t100236324 * ___requestUri_6;
	// System.String System.Net.FtpWebRequest::file_name
	String_t* ___file_name_7;
	// System.Net.ServicePoint System.Net.FtpWebRequest::servicePoint
	ServicePoint_t2786966844 * ___servicePoint_8;
	// System.IO.Stream System.Net.FtpWebRequest::origDataStream
	Stream_t1273022909 * ___origDataStream_9;
	// System.IO.Stream System.Net.FtpWebRequest::dataStream
	Stream_t1273022909 * ___dataStream_10;
	// System.IO.Stream System.Net.FtpWebRequest::controlStream
	Stream_t1273022909 * ___controlStream_11;
	// System.IO.StreamReader System.Net.FtpWebRequest::controlReader
	StreamReader_t4009935899 * ___controlReader_12;
	// System.Net.NetworkCredential System.Net.FtpWebRequest::credentials
	NetworkCredential_t3282608323 * ___credentials_13;
	// System.Net.IPHostEntry System.Net.FtpWebRequest::hostEntry
	IPHostEntry_t263743900 * ___hostEntry_14;
	// System.Net.IPEndPoint System.Net.FtpWebRequest::localEndPoint
	IPEndPoint_t3791887218 * ___localEndPoint_15;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	RuntimeObject* ___proxy_16;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_17;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_18;
	// System.Int64 System.Net.FtpWebRequest::offset
	int64_t ___offset_19;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_20;
	// System.Boolean System.Net.FtpWebRequest::enableSsl
	bool ___enableSsl_21;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_22;
	// System.Boolean System.Net.FtpWebRequest::keepAlive
	bool ___keepAlive_23;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_24;
	// System.String System.Net.FtpWebRequest::renameTo
	String_t* ___renameTo_25;
	// System.Object System.Net.FtpWebRequest::locker
	RuntimeObject * ___locker_26;
	// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::requestState
	int32_t ___requestState_27;
	// System.Net.FtpAsyncResult System.Net.FtpWebRequest::asyncResult
	FtpAsyncResult_t3265664217 * ___asyncResult_28;
	// System.Net.FtpWebResponse System.Net.FtpWebRequest::ftpResponse
	FtpWebResponse_t3940763575 * ___ftpResponse_29;
	// System.IO.Stream System.Net.FtpWebRequest::requestStream
	Stream_t1273022909 * ___requestStream_30;
	// System.String System.Net.FtpWebRequest::initial_path
	String_t* ___initial_path_31;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t3014364904 * ___callback_33;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___requestUri_6)); }
	inline Uri_t100236324 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t100236324 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t100236324 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_file_name_7() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___file_name_7)); }
	inline String_t* get_file_name_7() const { return ___file_name_7; }
	inline String_t** get_address_of_file_name_7() { return &___file_name_7; }
	inline void set_file_name_7(String_t* value)
	{
		___file_name_7 = value;
		Il2CppCodeGenWriteBarrier((&___file_name_7), value);
	}

	inline static int32_t get_offset_of_servicePoint_8() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___servicePoint_8)); }
	inline ServicePoint_t2786966844 * get_servicePoint_8() const { return ___servicePoint_8; }
	inline ServicePoint_t2786966844 ** get_address_of_servicePoint_8() { return &___servicePoint_8; }
	inline void set_servicePoint_8(ServicePoint_t2786966844 * value)
	{
		___servicePoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoint_8), value);
	}

	inline static int32_t get_offset_of_origDataStream_9() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___origDataStream_9)); }
	inline Stream_t1273022909 * get_origDataStream_9() const { return ___origDataStream_9; }
	inline Stream_t1273022909 ** get_address_of_origDataStream_9() { return &___origDataStream_9; }
	inline void set_origDataStream_9(Stream_t1273022909 * value)
	{
		___origDataStream_9 = value;
		Il2CppCodeGenWriteBarrier((&___origDataStream_9), value);
	}

	inline static int32_t get_offset_of_dataStream_10() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___dataStream_10)); }
	inline Stream_t1273022909 * get_dataStream_10() const { return ___dataStream_10; }
	inline Stream_t1273022909 ** get_address_of_dataStream_10() { return &___dataStream_10; }
	inline void set_dataStream_10(Stream_t1273022909 * value)
	{
		___dataStream_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataStream_10), value);
	}

	inline static int32_t get_offset_of_controlStream_11() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___controlStream_11)); }
	inline Stream_t1273022909 * get_controlStream_11() const { return ___controlStream_11; }
	inline Stream_t1273022909 ** get_address_of_controlStream_11() { return &___controlStream_11; }
	inline void set_controlStream_11(Stream_t1273022909 * value)
	{
		___controlStream_11 = value;
		Il2CppCodeGenWriteBarrier((&___controlStream_11), value);
	}

	inline static int32_t get_offset_of_controlReader_12() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___controlReader_12)); }
	inline StreamReader_t4009935899 * get_controlReader_12() const { return ___controlReader_12; }
	inline StreamReader_t4009935899 ** get_address_of_controlReader_12() { return &___controlReader_12; }
	inline void set_controlReader_12(StreamReader_t4009935899 * value)
	{
		___controlReader_12 = value;
		Il2CppCodeGenWriteBarrier((&___controlReader_12), value);
	}

	inline static int32_t get_offset_of_credentials_13() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___credentials_13)); }
	inline NetworkCredential_t3282608323 * get_credentials_13() const { return ___credentials_13; }
	inline NetworkCredential_t3282608323 ** get_address_of_credentials_13() { return &___credentials_13; }
	inline void set_credentials_13(NetworkCredential_t3282608323 * value)
	{
		___credentials_13 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_13), value);
	}

	inline static int32_t get_offset_of_hostEntry_14() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___hostEntry_14)); }
	inline IPHostEntry_t263743900 * get_hostEntry_14() const { return ___hostEntry_14; }
	inline IPHostEntry_t263743900 ** get_address_of_hostEntry_14() { return &___hostEntry_14; }
	inline void set_hostEntry_14(IPHostEntry_t263743900 * value)
	{
		___hostEntry_14 = value;
		Il2CppCodeGenWriteBarrier((&___hostEntry_14), value);
	}

	inline static int32_t get_offset_of_localEndPoint_15() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___localEndPoint_15)); }
	inline IPEndPoint_t3791887218 * get_localEndPoint_15() const { return ___localEndPoint_15; }
	inline IPEndPoint_t3791887218 ** get_address_of_localEndPoint_15() { return &___localEndPoint_15; }
	inline void set_localEndPoint_15(IPEndPoint_t3791887218 * value)
	{
		___localEndPoint_15 = value;
		Il2CppCodeGenWriteBarrier((&___localEndPoint_15), value);
	}

	inline static int32_t get_offset_of_proxy_16() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___proxy_16)); }
	inline RuntimeObject* get_proxy_16() const { return ___proxy_16; }
	inline RuntimeObject** get_address_of_proxy_16() { return &___proxy_16; }
	inline void set_proxy_16(RuntimeObject* value)
	{
		___proxy_16 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_16), value);
	}

	inline static int32_t get_offset_of_timeout_17() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___timeout_17)); }
	inline int32_t get_timeout_17() const { return ___timeout_17; }
	inline int32_t* get_address_of_timeout_17() { return &___timeout_17; }
	inline void set_timeout_17(int32_t value)
	{
		___timeout_17 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_18() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___rwTimeout_18)); }
	inline int32_t get_rwTimeout_18() const { return ___rwTimeout_18; }
	inline int32_t* get_address_of_rwTimeout_18() { return &___rwTimeout_18; }
	inline void set_rwTimeout_18(int32_t value)
	{
		___rwTimeout_18 = value;
	}

	inline static int32_t get_offset_of_offset_19() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___offset_19)); }
	inline int64_t get_offset_19() const { return ___offset_19; }
	inline int64_t* get_address_of_offset_19() { return &___offset_19; }
	inline void set_offset_19(int64_t value)
	{
		___offset_19 = value;
	}

	inline static int32_t get_offset_of_binary_20() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___binary_20)); }
	inline bool get_binary_20() const { return ___binary_20; }
	inline bool* get_address_of_binary_20() { return &___binary_20; }
	inline void set_binary_20(bool value)
	{
		___binary_20 = value;
	}

	inline static int32_t get_offset_of_enableSsl_21() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___enableSsl_21)); }
	inline bool get_enableSsl_21() const { return ___enableSsl_21; }
	inline bool* get_address_of_enableSsl_21() { return &___enableSsl_21; }
	inline void set_enableSsl_21(bool value)
	{
		___enableSsl_21 = value;
	}

	inline static int32_t get_offset_of_usePassive_22() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___usePassive_22)); }
	inline bool get_usePassive_22() const { return ___usePassive_22; }
	inline bool* get_address_of_usePassive_22() { return &___usePassive_22; }
	inline void set_usePassive_22(bool value)
	{
		___usePassive_22 = value;
	}

	inline static int32_t get_offset_of_keepAlive_23() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___keepAlive_23)); }
	inline bool get_keepAlive_23() const { return ___keepAlive_23; }
	inline bool* get_address_of_keepAlive_23() { return &___keepAlive_23; }
	inline void set_keepAlive_23(bool value)
	{
		___keepAlive_23 = value;
	}

	inline static int32_t get_offset_of_method_24() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___method_24)); }
	inline String_t* get_method_24() const { return ___method_24; }
	inline String_t** get_address_of_method_24() { return &___method_24; }
	inline void set_method_24(String_t* value)
	{
		___method_24 = value;
		Il2CppCodeGenWriteBarrier((&___method_24), value);
	}

	inline static int32_t get_offset_of_renameTo_25() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___renameTo_25)); }
	inline String_t* get_renameTo_25() const { return ___renameTo_25; }
	inline String_t** get_address_of_renameTo_25() { return &___renameTo_25; }
	inline void set_renameTo_25(String_t* value)
	{
		___renameTo_25 = value;
		Il2CppCodeGenWriteBarrier((&___renameTo_25), value);
	}

	inline static int32_t get_offset_of_locker_26() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___locker_26)); }
	inline RuntimeObject * get_locker_26() const { return ___locker_26; }
	inline RuntimeObject ** get_address_of_locker_26() { return &___locker_26; }
	inline void set_locker_26(RuntimeObject * value)
	{
		___locker_26 = value;
		Il2CppCodeGenWriteBarrier((&___locker_26), value);
	}

	inline static int32_t get_offset_of_requestState_27() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___requestState_27)); }
	inline int32_t get_requestState_27() const { return ___requestState_27; }
	inline int32_t* get_address_of_requestState_27() { return &___requestState_27; }
	inline void set_requestState_27(int32_t value)
	{
		___requestState_27 = value;
	}

	inline static int32_t get_offset_of_asyncResult_28() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___asyncResult_28)); }
	inline FtpAsyncResult_t3265664217 * get_asyncResult_28() const { return ___asyncResult_28; }
	inline FtpAsyncResult_t3265664217 ** get_address_of_asyncResult_28() { return &___asyncResult_28; }
	inline void set_asyncResult_28(FtpAsyncResult_t3265664217 * value)
	{
		___asyncResult_28 = value;
		Il2CppCodeGenWriteBarrier((&___asyncResult_28), value);
	}

	inline static int32_t get_offset_of_ftpResponse_29() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___ftpResponse_29)); }
	inline FtpWebResponse_t3940763575 * get_ftpResponse_29() const { return ___ftpResponse_29; }
	inline FtpWebResponse_t3940763575 ** get_address_of_ftpResponse_29() { return &___ftpResponse_29; }
	inline void set_ftpResponse_29(FtpWebResponse_t3940763575 * value)
	{
		___ftpResponse_29 = value;
		Il2CppCodeGenWriteBarrier((&___ftpResponse_29), value);
	}

	inline static int32_t get_offset_of_requestStream_30() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___requestStream_30)); }
	inline Stream_t1273022909 * get_requestStream_30() const { return ___requestStream_30; }
	inline Stream_t1273022909 ** get_address_of_requestStream_30() { return &___requestStream_30; }
	inline void set_requestStream_30(Stream_t1273022909 * value)
	{
		___requestStream_30 = value;
		Il2CppCodeGenWriteBarrier((&___requestStream_30), value);
	}

	inline static int32_t get_offset_of_initial_path_31() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___initial_path_31)); }
	inline String_t* get_initial_path_31() const { return ___initial_path_31; }
	inline String_t** get_address_of_initial_path_31() { return &___initial_path_31; }
	inline void set_initial_path_31(String_t* value)
	{
		___initial_path_31 = value;
		Il2CppCodeGenWriteBarrier((&___initial_path_31), value);
	}

	inline static int32_t get_offset_of_callback_33() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305, ___callback_33)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_callback_33() const { return ___callback_33; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_callback_33() { return &___callback_33; }
	inline void set_callback_33(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___callback_33 = value;
		Il2CppCodeGenWriteBarrier((&___callback_33), value);
	}
};

struct FtpWebRequest_t1577818305_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t1281789340* ___supportedCommands_32;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t3014364904 * ___U3CU3Ef__amU24cache1C_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_36;

public:
	inline static int32_t get_offset_of_supportedCommands_32() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305_StaticFields, ___supportedCommands_32)); }
	inline StringU5BU5D_t1281789340* get_supportedCommands_32() const { return ___supportedCommands_32; }
	inline StringU5BU5D_t1281789340** get_address_of_supportedCommands_32() { return &___supportedCommands_32; }
	inline void set_supportedCommands_32(StringU5BU5D_t1281789340* value)
	{
		___supportedCommands_32 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCommands_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_34() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305_StaticFields, ___U3CU3Ef__amU24cache1C_34)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_U3CU3Ef__amU24cache1C_34() const { return ___U3CU3Ef__amU24cache1C_34; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_U3CU3Ef__amU24cache1C_34() { return &___U3CU3Ef__amU24cache1C_34; }
	inline void set_U3CU3Ef__amU24cache1C_34(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___U3CU3Ef__amU24cache1C_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_35() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305_StaticFields, ___U3CU3Ef__switchU24map5_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_35() const { return ___U3CU3Ef__switchU24map5_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_35() { return &___U3CU3Ef__switchU24map5_35; }
	inline void set_U3CU3Ef__switchU24map5_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_36() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1577818305_StaticFields, ___U3CU3Ef__switchU24map6_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_36() const { return ___U3CU3Ef__switchU24map6_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_36() { return &___U3CU3Ef__switchU24map6_36; }
	inline void set_U3CU3Ef__switchU24map6_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPWEBREQUEST_T1577818305_H
#ifndef SOCKETASYNCCALL_T1521370843_H
#define SOCKETASYNCCALL_T1521370843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketAsyncCall
struct  SocketAsyncCall_t1521370843  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETASYNCCALL_T1521370843_H
#ifndef GETRESPONSECALLBACK_T2326689408_H
#define GETRESPONSECALLBACK_T2326689408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest/GetResponseCallback
struct  GetResponseCallback_t2326689408  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRESPONSECALLBACK_T2326689408_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1100[2] = 
{
	DescriptionAttribute_t874390736::get_offset_of_desc_0(),
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1102[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1103[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1104[1] = 
{
	EnumConverter_t1688858217::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (EventDescriptor_t88602298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (EventDescriptorCollection_t2278158832), -1, sizeof(EventDescriptorCollection_t2278158832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1106[3] = 
{
	EventDescriptorCollection_t2278158832::get_offset_of_eventList_0(),
	EventDescriptorCollection_t2278158832::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t2278158832_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (MemberDescriptor_t3815403747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[2] = 
{
	MemberDescriptor_t3815403747::get_offset_of_name_0(),
	MemberDescriptor_t3815403747::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (NullableConverter_t1985728604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[3] = 
{
	NullableConverter_t1985728604::get_offset_of_nullableType_0(),
	NullableConverter_t1985728604::get_offset_of_underlyingType_1(),
	NullableConverter_t1985728604::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (PropertyChangedEventArgs_t3313059048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	PropertyChangedEventArgs_t3313059048::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (PropertyDescriptor_t3244362832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (PropertyDescriptorCollection_t4164928659), -1, sizeof(PropertyDescriptorCollection_t4164928659_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1121[3] = 
{
	PropertyDescriptorCollection_t4164928659_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (ReferenceConverter_t1811933861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (SByteConverter_t2970182448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (SingleConverter_t902207630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (StringConverter_t3216726494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (TimeSpanConverter_t3504031848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (TypeConverter_t2249118273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (TypeConverterAttribute_t3271584429), -1, sizeof(TypeConverterAttribute_t3271584429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1128[2] = 
{
	TypeConverterAttribute_t3271584429_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3271584429::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (TypeDescriptionProvider_t3232077895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (TypeDescriptor_t3066613587), -1, sizeof(TypeDescriptor_t3066613587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[8] = 
{
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProviders_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (Info_t3260944019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[2] = 
{
	Info_t3260944019::get_offset_of__infoType_0(),
	Info_t3260944019::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (TypeInfo_t323385814), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (UInt16Converter_t819459975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (UInt32Converter_t3472493373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (UInt64Converter_t4189949036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (WeakObjectWrapper_t827463650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1136[2] = 
{
	WeakObjectWrapper_t827463650::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t827463650::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (WeakObjectWrapperComparer_t303980402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (Win32Exception_t3234146298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[1] = 
{
	Win32Exception_t3234146298::get_offset_of_native_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (CompressionMode_t3714291783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1139[3] = 
{
	CompressionMode_t3714291783::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (DeflateStream_t4175168077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[8] = 
{
	DeflateStream_t4175168077::get_offset_of_base_stream_1(),
	DeflateStream_t4175168077::get_offset_of_mode_2(),
	DeflateStream_t4175168077::get_offset_of_leaveOpen_3(),
	DeflateStream_t4175168077::get_offset_of_disposed_4(),
	DeflateStream_t4175168077::get_offset_of_feeder_5(),
	DeflateStream_t4175168077::get_offset_of_z_stream_6(),
	DeflateStream_t4175168077::get_offset_of_io_buffer_7(),
	DeflateStream_t4175168077::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (UnmanagedReadOrWrite_t876388624), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ReadMethod_t893206259), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (WriteMethod_t2538911768), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (GZipStream_t3417139389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1144[1] = 
{
	GZipStream_t3417139389::get_offset_of_deflateStream_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (AuthenticatedStream_t3415418016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[2] = 
{
	AuthenticatedStream_t3415418016::get_offset_of_innerStream_1(),
	AuthenticatedStream_t3415418016::get_offset_of_leaveStreamOpen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (AuthenticationLevel_t1236753641)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1146[4] = 
{
	AuthenticationLevel_t1236753641::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (SslPolicyErrors_t2205227823)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1147[5] = 
{
	SslPolicyErrors_t2205227823::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (SslStream_t2700741536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1148[3] = 
{
	SslStream_t2700741536::get_offset_of_ssl_stream_3(),
	SslStream_t2700741536::get_offset_of_validation_callback_4(),
	SslStream_t2700741536::get_offset_of_selection_callback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1222040293::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (AddressFamily_t2612549059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1150[32] = 
{
	AddressFamily_t2612549059::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (LingerOption_t2688985448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1151[2] = 
{
	LingerOption_t2688985448::get_offset_of_enabled_0(),
	LingerOption_t2688985448::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (MulticastOption_t3861143239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (NetworkStream_t4071955934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[6] = 
{
	NetworkStream_t4071955934::get_offset_of_access_1(),
	NetworkStream_t4071955934::get_offset_of_socket_2(),
	NetworkStream_t4071955934::get_offset_of_owns_socket_3(),
	NetworkStream_t4071955934::get_offset_of_readable_4(),
	NetworkStream_t4071955934::get_offset_of_writeable_5(),
	NetworkStream_t4071955934::get_offset_of_disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (ProtocolType_t303635025)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1154[26] = 
{
	ProtocolType_t303635025::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (SelectMode_t1123767949)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1155[4] = 
{
	SelectMode_t1123767949::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (Socket_t1119025450), -1, sizeof(Socket_t1119025450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[23] = 
{
	Socket_t1119025450::get_offset_of_readQ_0(),
	Socket_t1119025450::get_offset_of_writeQ_1(),
	Socket_t1119025450::get_offset_of_islistening_2(),
	Socket_t1119025450::get_offset_of_useoverlappedIO_3(),
	Socket_t1119025450::get_offset_of_MinListenPort_4(),
	Socket_t1119025450::get_offset_of_MaxListenPort_5(),
	Socket_t1119025450_StaticFields::get_offset_of_ipv4Supported_6(),
	Socket_t1119025450_StaticFields::get_offset_of_ipv6Supported_7(),
	Socket_t1119025450::get_offset_of_linger_timeout_8(),
	Socket_t1119025450::get_offset_of_socket_9(),
	Socket_t1119025450::get_offset_of_address_family_10(),
	Socket_t1119025450::get_offset_of_socket_type_11(),
	Socket_t1119025450::get_offset_of_protocol_type_12(),
	Socket_t1119025450::get_offset_of_blocking_13(),
	Socket_t1119025450::get_offset_of_blocking_thread_14(),
	Socket_t1119025450::get_offset_of_isbound_15(),
	Socket_t1119025450_StaticFields::get_offset_of_current_bind_count_16(),
	Socket_t1119025450::get_offset_of_max_bind_count_17(),
	Socket_t1119025450::get_offset_of_connected_18(),
	Socket_t1119025450::get_offset_of_closed_19(),
	Socket_t1119025450::get_offset_of_disposed_20(),
	Socket_t1119025450::get_offset_of_seed_endpoint_21(),
	Socket_t1119025450_StaticFields::get_offset_of_check_socket_policy_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (SocketOperation_t1288882297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1157[15] = 
{
	SocketOperation_t1288882297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (SocketAsyncResult_t2080034863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[25] = 
{
	SocketAsyncResult_t2080034863::get_offset_of_Sock_0(),
	SocketAsyncResult_t2080034863::get_offset_of_handle_1(),
	SocketAsyncResult_t2080034863::get_offset_of_state_2(),
	SocketAsyncResult_t2080034863::get_offset_of_callback_3(),
	SocketAsyncResult_t2080034863::get_offset_of_waithandle_4(),
	SocketAsyncResult_t2080034863::get_offset_of_delayedException_5(),
	SocketAsyncResult_t2080034863::get_offset_of_EndPoint_6(),
	SocketAsyncResult_t2080034863::get_offset_of_Buffer_7(),
	SocketAsyncResult_t2080034863::get_offset_of_Offset_8(),
	SocketAsyncResult_t2080034863::get_offset_of_Size_9(),
	SocketAsyncResult_t2080034863::get_offset_of_SockFlags_10(),
	SocketAsyncResult_t2080034863::get_offset_of_AcceptSocket_11(),
	SocketAsyncResult_t2080034863::get_offset_of_Addresses_12(),
	SocketAsyncResult_t2080034863::get_offset_of_Port_13(),
	SocketAsyncResult_t2080034863::get_offset_of_Buffers_14(),
	SocketAsyncResult_t2080034863::get_offset_of_ReuseSocket_15(),
	SocketAsyncResult_t2080034863::get_offset_of_acc_socket_16(),
	SocketAsyncResult_t2080034863::get_offset_of_total_17(),
	SocketAsyncResult_t2080034863::get_offset_of_completed_sync_18(),
	SocketAsyncResult_t2080034863::get_offset_of_completed_19(),
	SocketAsyncResult_t2080034863::get_offset_of_blocking_20(),
	SocketAsyncResult_t2080034863::get_offset_of_error_21(),
	SocketAsyncResult_t2080034863::get_offset_of_operation_22(),
	SocketAsyncResult_t2080034863::get_offset_of_ares_23(),
	SocketAsyncResult_t2080034863::get_offset_of_EndCalled_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (Worker_t2051517921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1159[3] = 
{
	Worker_t2051517921::get_offset_of_result_0(),
	Worker_t2051517921::get_offset_of_requireSocketSecurity_1(),
	Worker_t2051517921::get_offset_of_send_so_far_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (SocketAsyncCall_t1521370843), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (SocketError_t3760144386)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1161[48] = 
{
	SocketError_t3760144386::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (SocketException_t3852068672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (SocketFlags_t2969870452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1163[11] = 
{
	SocketFlags_t2969870452::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (SocketOptionLevel_t201167901)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1164[6] = 
{
	SocketOptionLevel_t201167901::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (SocketOptionName_t403346465)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1165[44] = 
{
	SocketOptionName_t403346465::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (SocketShutdown_t2687738148)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1166[4] = 
{
	SocketShutdown_t2687738148::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (SocketType_t2175930299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1167[7] = 
{
	SocketType_t2175930299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (AuthenticationManager_t2084001809), -1, sizeof(AuthenticationManager_t2084001809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1168[3] = 
{
	AuthenticationManager_t2084001809_StaticFields::get_offset_of_modules_0(),
	AuthenticationManager_t2084001809_StaticFields::get_offset_of_locker_1(),
	AuthenticationManager_t2084001809_StaticFields::get_offset_of_credential_policy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (Authorization_t542416582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1169[4] = 
{
	Authorization_t542416582::get_offset_of_token_0(),
	Authorization_t542416582::get_offset_of_complete_1(),
	Authorization_t542416582::get_offset_of_connectionGroupId_2(),
	Authorization_t542416582::get_offset_of_module_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (BasicClient_t3463561396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (ChunkStream_t2634567336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1171[9] = 
{
	ChunkStream_t2634567336::get_offset_of_headers_0(),
	ChunkStream_t2634567336::get_offset_of_chunkSize_1(),
	ChunkStream_t2634567336::get_offset_of_chunkRead_2(),
	ChunkStream_t2634567336::get_offset_of_state_3(),
	ChunkStream_t2634567336::get_offset_of_saved_4(),
	ChunkStream_t2634567336::get_offset_of_sawCR_5(),
	ChunkStream_t2634567336::get_offset_of_gotit_6(),
	ChunkStream_t2634567336::get_offset_of_trailerState_7(),
	ChunkStream_t2634567336::get_offset_of_chunks_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (State_t4053927353)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1172[5] = 
{
	State_t4053927353::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (Chunk_t1455545707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1173[2] = 
{
	Chunk_t1455545707::get_offset_of_Bytes_0(),
	Chunk_t1455545707::get_offset_of_Offset_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (Cookie_t993873397), -1, sizeof(Cookie_t993873397_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1174[18] = 
{
	Cookie_t993873397::get_offset_of_comment_0(),
	Cookie_t993873397::get_offset_of_commentUri_1(),
	Cookie_t993873397::get_offset_of_discard_2(),
	Cookie_t993873397::get_offset_of_domain_3(),
	Cookie_t993873397::get_offset_of_expires_4(),
	Cookie_t993873397::get_offset_of_httpOnly_5(),
	Cookie_t993873397::get_offset_of_name_6(),
	Cookie_t993873397::get_offset_of_path_7(),
	Cookie_t993873397::get_offset_of_port_8(),
	Cookie_t993873397::get_offset_of_ports_9(),
	Cookie_t993873397::get_offset_of_secure_10(),
	Cookie_t993873397::get_offset_of_timestamp_11(),
	Cookie_t993873397::get_offset_of_val_12(),
	Cookie_t993873397::get_offset_of_version_13(),
	Cookie_t993873397_StaticFields::get_offset_of_reservedCharsName_14(),
	Cookie_t993873397_StaticFields::get_offset_of_portSeparators_15(),
	Cookie_t993873397_StaticFields::get_offset_of_tspecials_16(),
	Cookie_t993873397::get_offset_of_exact_domain_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (CookieCollection_t3881042616), -1, sizeof(CookieCollection_t3881042616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1175[2] = 
{
	CookieCollection_t3881042616::get_offset_of_list_0(),
	CookieCollection_t3881042616_StaticFields::get_offset_of_Comparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (CookieCollectionComparer_t1373927847), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (CookieContainer_t2331592909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1177[4] = 
{
	CookieContainer_t2331592909::get_offset_of_capacity_0(),
	CookieContainer_t2331592909::get_offset_of_perDomainCapacity_1(),
	CookieContainer_t2331592909::get_offset_of_maxCookieSize_2(),
	CookieContainer_t2331592909::get_offset_of_cookies_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (CookieException_t2325395694), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (DecompressionMethods_t1612219745)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1179[4] = 
{
	DecompressionMethods_t1612219745::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (DefaultCertificatePolicy_t3607119947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (DigestHeaderParser_t341650829), -1, sizeof(DigestHeaderParser_t341650829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1181[5] = 
{
	DigestHeaderParser_t341650829::get_offset_of_header_0(),
	DigestHeaderParser_t341650829::get_offset_of_length_1(),
	DigestHeaderParser_t341650829::get_offset_of_pos_2(),
	DigestHeaderParser_t341650829_StaticFields::get_offset_of_keywords_3(),
	DigestHeaderParser_t341650829::get_offset_of_values_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (DigestSession_t1433627624), -1, sizeof(DigestSession_t1433627624_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1182[6] = 
{
	DigestSession_t1433627624_StaticFields::get_offset_of_rng_0(),
	DigestSession_t1433627624::get_offset_of_lastUse_1(),
	DigestSession_t1433627624::get_offset_of__nc_2(),
	DigestSession_t1433627624::get_offset_of_hash_3(),
	DigestSession_t1433627624::get_offset_of_parser_4(),
	DigestSession_t1433627624::get_offset_of__cnonce_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (DigestClient_t660790528), -1, sizeof(DigestClient_t660790528_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1183[1] = 
{
	DigestClient_t660790528_StaticFields::get_offset_of_cache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (Dns_t384099571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (EndPoint_t982345378), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (FileWebRequest_t591858885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[14] = 
{
	FileWebRequest_t591858885::get_offset_of_uri_6(),
	FileWebRequest_t591858885::get_offset_of_webHeaders_7(),
	FileWebRequest_t591858885::get_offset_of_credentials_8(),
	FileWebRequest_t591858885::get_offset_of_connectionGroup_9(),
	FileWebRequest_t591858885::get_offset_of_contentLength_10(),
	FileWebRequest_t591858885::get_offset_of_fileAccess_11(),
	FileWebRequest_t591858885::get_offset_of_method_12(),
	FileWebRequest_t591858885::get_offset_of_proxy_13(),
	FileWebRequest_t591858885::get_offset_of_preAuthenticate_14(),
	FileWebRequest_t591858885::get_offset_of_timeout_15(),
	FileWebRequest_t591858885::get_offset_of_webResponse_16(),
	FileWebRequest_t591858885::get_offset_of_requestEndEvent_17(),
	FileWebRequest_t591858885::get_offset_of_requesting_18(),
	FileWebRequest_t591858885::get_offset_of_asyncResponding_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (FileWebStream_t586107972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[1] = 
{
	FileWebStream_t586107972::get_offset_of_webRequest_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (GetResponseCallback_t2326689408), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (FileWebRequestCreator_t1781329382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (FileWebResponse_t544571260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1190[5] = 
{
	FileWebResponse_t544571260::get_offset_of_responseUri_1(),
	FileWebResponse_t544571260::get_offset_of_fileStream_2(),
	FileWebResponse_t544571260::get_offset_of_contentLength_3(),
	FileWebResponse_t544571260::get_offset_of_webHeaders_4(),
	FileWebResponse_t544571260::get_offset_of_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (FtpAsyncResult_t3265664217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[9] = 
{
	FtpAsyncResult_t3265664217::get_offset_of_response_0(),
	FtpAsyncResult_t3265664217::get_offset_of_waitHandle_1(),
	FtpAsyncResult_t3265664217::get_offset_of_exception_2(),
	FtpAsyncResult_t3265664217::get_offset_of_callback_3(),
	FtpAsyncResult_t3265664217::get_offset_of_stream_4(),
	FtpAsyncResult_t3265664217::get_offset_of_state_5(),
	FtpAsyncResult_t3265664217::get_offset_of_completed_6(),
	FtpAsyncResult_t3265664217::get_offset_of_synch_7(),
	FtpAsyncResult_t3265664217::get_offset_of_locker_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (FtpDataStream_t1366729715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[5] = 
{
	FtpDataStream_t1366729715::get_offset_of_request_1(),
	FtpDataStream_t1366729715::get_offset_of_networkStream_2(),
	FtpDataStream_t1366729715::get_offset_of_disposed_3(),
	FtpDataStream_t1366729715::get_offset_of_isRead_4(),
	FtpDataStream_t1366729715::get_offset_of_totalRead_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (WriteDelegate_t2016697242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (ReadDelegate_t4266946825), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (FtpRequestCreator_t2926281497), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (FtpStatus_t2376455776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1196[2] = 
{
	FtpStatus_t2376455776::get_offset_of_statusCode_0(),
	FtpStatus_t2376455776::get_offset_of_statusDescription_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (FtpStatusCode_t58879933)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1197[38] = 
{
	FtpStatusCode_t58879933::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (FtpWebRequest_t1577818305), -1, sizeof(FtpWebRequest_t1577818305_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1198[31] = 
{
	FtpWebRequest_t1577818305::get_offset_of_requestUri_6(),
	FtpWebRequest_t1577818305::get_offset_of_file_name_7(),
	FtpWebRequest_t1577818305::get_offset_of_servicePoint_8(),
	FtpWebRequest_t1577818305::get_offset_of_origDataStream_9(),
	FtpWebRequest_t1577818305::get_offset_of_dataStream_10(),
	FtpWebRequest_t1577818305::get_offset_of_controlStream_11(),
	FtpWebRequest_t1577818305::get_offset_of_controlReader_12(),
	FtpWebRequest_t1577818305::get_offset_of_credentials_13(),
	FtpWebRequest_t1577818305::get_offset_of_hostEntry_14(),
	FtpWebRequest_t1577818305::get_offset_of_localEndPoint_15(),
	FtpWebRequest_t1577818305::get_offset_of_proxy_16(),
	FtpWebRequest_t1577818305::get_offset_of_timeout_17(),
	FtpWebRequest_t1577818305::get_offset_of_rwTimeout_18(),
	FtpWebRequest_t1577818305::get_offset_of_offset_19(),
	FtpWebRequest_t1577818305::get_offset_of_binary_20(),
	FtpWebRequest_t1577818305::get_offset_of_enableSsl_21(),
	FtpWebRequest_t1577818305::get_offset_of_usePassive_22(),
	FtpWebRequest_t1577818305::get_offset_of_keepAlive_23(),
	FtpWebRequest_t1577818305::get_offset_of_method_24(),
	FtpWebRequest_t1577818305::get_offset_of_renameTo_25(),
	FtpWebRequest_t1577818305::get_offset_of_locker_26(),
	FtpWebRequest_t1577818305::get_offset_of_requestState_27(),
	FtpWebRequest_t1577818305::get_offset_of_asyncResult_28(),
	FtpWebRequest_t1577818305::get_offset_of_ftpResponse_29(),
	FtpWebRequest_t1577818305::get_offset_of_requestStream_30(),
	FtpWebRequest_t1577818305::get_offset_of_initial_path_31(),
	FtpWebRequest_t1577818305_StaticFields::get_offset_of_supportedCommands_32(),
	FtpWebRequest_t1577818305::get_offset_of_callback_33(),
	FtpWebRequest_t1577818305_StaticFields::get_offset_of_U3CU3Ef__amU24cache1C_34(),
	FtpWebRequest_t1577818305_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_35(),
	FtpWebRequest_t1577818305_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (RequestState_t4091696808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1199[10] = 
{
	RequestState_t4091696808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
