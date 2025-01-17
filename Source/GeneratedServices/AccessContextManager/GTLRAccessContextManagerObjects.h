// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Access Context Manager API (accesscontextmanager/v1)
// Description:
//   An API for setting attribute based access control to requests to GCP
//   services.
// Documentation:
//   https://cloud.google.com/access-context-manager/docs/reference/rest/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAccessContextManager_AccessLevel;
@class GTLRAccessContextManager_AccessPolicy;
@class GTLRAccessContextManager_BasicLevel;
@class GTLRAccessContextManager_Condition;
@class GTLRAccessContextManager_DevicePolicy;
@class GTLRAccessContextManager_Operation;
@class GTLRAccessContextManager_Operation_Metadata;
@class GTLRAccessContextManager_Operation_Response;
@class GTLRAccessContextManager_OsConstraint;
@class GTLRAccessContextManager_ServicePerimeter;
@class GTLRAccessContextManager_ServicePerimeterConfig;
@class GTLRAccessContextManager_Status;
@class GTLRAccessContextManager_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAccessContextManager_BasicLevel.combiningFunction

/**
 *  All `Conditions` must be true for the `BasicLevel` to be true.
 *
 *  Value: "AND"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_BasicLevel_CombiningFunction_And;
/**
 *  If at least one `Condition` is true, then the `BasicLevel` is true.
 *
 *  Value: "OR"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_BasicLevel_CombiningFunction_Or;

// ----------------------------------------------------------------------------
// GTLRAccessContextManager_DevicePolicy.allowedDeviceManagementLevels

/** Value: "BASIC" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_Basic;
/** Value: "COMPLETE" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_Complete;
/** Value: "MANAGEMENT_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_ManagementUnspecified;
/** Value: "NONE" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_None;

// ----------------------------------------------------------------------------
// GTLRAccessContextManager_DevicePolicy.allowedEncryptionStatuses

/** Value: "ENCRYPTED" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_Encrypted;
/** Value: "ENCRYPTION_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_EncryptionUnspecified;
/** Value: "ENCRYPTION_UNSUPPORTED" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_EncryptionUnsupported;
/** Value: "UNENCRYPTED" */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_Unencrypted;

// ----------------------------------------------------------------------------
// GTLRAccessContextManager_OsConstraint.osType

/**
 *  A desktop ChromeOS operating system.
 *
 *  Value: "DESKTOP_CHROME_OS"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopChromeOs;
/**
 *  A desktop Linux operating system.
 *
 *  Value: "DESKTOP_LINUX"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopLinux;
/**
 *  A desktop Mac operating system.
 *
 *  Value: "DESKTOP_MAC"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopMac;
/**
 *  A desktop Windows operating system.
 *
 *  Value: "DESKTOP_WINDOWS"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopWindows;
/**
 *  The operating system of the device is not specified or not known.
 *
 *  Value: "OS_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_OsConstraint_OsType_OsUnspecified;

// ----------------------------------------------------------------------------
// GTLRAccessContextManager_ServicePerimeter.perimeterType

/**
 *  Perimeter Bridge.
 *
 *  Value: "PERIMETER_TYPE_BRIDGE"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeBridge;
/**
 *  Regular Perimeter.
 *
 *  Value: "PERIMETER_TYPE_REGULAR"
 */
GTLR_EXTERN NSString * const kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeRegular;

/**
 *  An `AccessLevel` is a label that can be applied to requests to GCP services,
 *  along with a list of requirements necessary for the label to be applied.
 */
@interface GTLRAccessContextManager_AccessLevel : GTLRObject

/** A `BasicLevel` composed of `Conditions`. */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_BasicLevel *basic;

/** Output only. Time the `AccessLevel` was created in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Description of the `AccessLevel` and its use. Does not affect behavior.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Required. Resource name for the Access Level. The `short_name` component
 *  must begin with a letter and only include alphanumeric and '_'. Format:
 *  `accessPolicies/{policy_id}/accessLevels/{short_name}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Human readable title. Must be unique within the Policy. */
@property(nonatomic, copy, nullable) NSString *title;

/** Output only. Time the `AccessLevel` was updated in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  `AccessPolicy` is a container for `AccessLevels` (which define the necessary
 *  attributes to use GCP services) and `ServicePerimeters` (which define
 *  regions
 *  of services able to freely pass data within a perimeter). An access policy
 *  is
 *  globally visible within an organization, and the restrictions it specifies
 *  apply to all projects within an organization.
 */
@interface GTLRAccessContextManager_AccessPolicy : GTLRObject

/** Output only. Time the `AccessPolicy` was created in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Output only. Resource name of the `AccessPolicy`. Format:
 *  `accessPolicies/{policy_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The parent of this `AccessPolicy` in the Cloud Resource
 *  Hierarchy. Currently immutable once created. Format:
 *  `organizations/{organization_id}`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/** Required. Human readable title. Does not affect behavior. */
@property(nonatomic, copy, nullable) NSString *title;

/** Output only. Time the `AccessPolicy` was updated in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  `BasicLevel` is an `AccessLevel` using a set of recommended features.
 */
@interface GTLRAccessContextManager_BasicLevel : GTLRObject

/**
 *  How the `conditions` list should be combined to determine if a request is
 *  granted this `AccessLevel`. If AND is used, each `Condition` in
 *  `conditions` must be satisfied for the `AccessLevel` to be applied. If OR
 *  is used, at least one `Condition` in `conditions` must be satisfied for the
 *  `AccessLevel` to be applied. Default behavior is AND.
 *
 *  Likely values:
 *    @arg @c kGTLRAccessContextManager_BasicLevel_CombiningFunction_And All
 *        `Conditions` must be true for the `BasicLevel` to be true. (Value:
 *        "AND")
 *    @arg @c kGTLRAccessContextManager_BasicLevel_CombiningFunction_Or If at
 *        least one `Condition` is true, then the `BasicLevel` is true. (Value:
 *        "OR")
 */
@property(nonatomic, copy, nullable) NSString *combiningFunction;

/** Required. A list of requirements for the `AccessLevel` to be granted. */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_Condition *> *conditions;

@end


/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRAccessContextManager_CancelOperationRequest : GTLRObject
@end


/**
 *  A condition necessary for an `AccessLevel` to be granted. The Condition is
 *  an
 *  AND over its fields. So a Condition is true if: 1) the request IP is from
 *  one
 *  of the listed subnetworks AND 2) the originating device complies with the
 *  listed device policy AND 3) all listed access levels are granted AND 4) the
 *  request was sent at a time allowed by the DateTimeRestriction.
 */
@interface GTLRAccessContextManager_Condition : GTLRObject

/**
 *  Device specific restrictions, all restrictions must hold for the
 *  Condition to be true. If not specified, all devices are allowed.
 */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_DevicePolicy *devicePolicy;

/**
 *  CIDR block IP subnetwork specification. May be IPv4 or IPv6. Note that for
 *  a CIDR IP address block, the specified IP address portion must be properly
 *  truncated (i.e. all the host bits must be zero) or the input is considered
 *  malformed. For example, "192.0.2.0/24" is accepted but "192.0.2.1/24" is
 *  not. Similarly, for IPv6, "2001:db8::/32" is accepted whereas
 *  "2001:db8::1/32" is not. The originating IP of a request must be in one of
 *  the listed subnets in order for this Condition to be true. If empty, all IP
 *  addresses are allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *ipSubnetworks;

/**
 *  The request must be made by one of the provided user or service
 *  accounts. Groups are not supported.
 *  Syntax:
 *  `user:{emailid}`
 *  `serviceAccount:{emailid}`
 *  If not specified, a request may come from any user.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Whether to negate the Condition. If true, the Condition becomes a NAND over
 *  its non-empty fields, each field must be false for the Condition overall to
 *  be satisfied. Defaults to false.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *negate;

/**
 *  The request must originate from one of the provided countries/regions.
 *  Must be valid ISO 3166-1 alpha-2 codes.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *regions;

/**
 *  A list of other access levels defined in the same `Policy`, referenced by
 *  resource name. Referencing an `AccessLevel` which does not exist is an
 *  error. All access levels listed must be granted for the Condition
 *  to be true. Example:
 *  "`accessPolicies/MY_POLICY/accessLevels/LEVEL_NAME"`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *requiredAccessLevels;

@end


/**
 *  `DevicePolicy` specifies device specific restrictions necessary to acquire a
 *  given access level. A `DevicePolicy` specifies requirements for requests
 *  from
 *  devices to be granted access levels, it does not do any enforcement on the
 *  device. `DevicePolicy` acts as an AND over all specified fields, and each
 *  repeated field is an OR over its elements. Any unset fields are ignored. For
 *  example, if the proto is { os_type : DESKTOP_WINDOWS, os_type :
 *  DESKTOP_LINUX, encryption_status: ENCRYPTED}, then the DevicePolicy will be
 *  true for requests originating from encrypted Linux desktops and encrypted
 *  Windows desktops.
 */
@interface GTLRAccessContextManager_DevicePolicy : GTLRObject

/**
 *  Allowed device management levels, an empty list allows all management
 *  levels.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *allowedDeviceManagementLevels;

/** Allowed encryptions statuses, an empty list allows all statuses. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *allowedEncryptionStatuses;

/** Allowed OS versions, an empty list allows all types and all versions. */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_OsConstraint *> *osConstraints;

/**
 *  Whether the device needs to be approved by the customer admin.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requireAdminApproval;

/**
 *  Whether the device needs to be corp owned.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requireCorpOwned;

/**
 *  Whether or not screenlock is required for the DevicePolicy to be true.
 *  Defaults to `false`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requireScreenlock;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRAccessContextManager_Empty : GTLRObject
@end


/**
 *  A response to `ListAccessLevelsRequest`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "accessLevels" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAccessContextManager_ListAccessLevelsResponse : GTLRCollectionObject

/**
 *  List of the Access Level instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_AccessLevel *> *accessLevels;

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A response to `ListAccessPoliciesRequest`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "accessPolicies" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRAccessContextManager_ListAccessPoliciesResponse : GTLRCollectionObject

/**
 *  List of the AccessPolicy instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_AccessPolicy *> *accessPolicies;

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAccessContextManager_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_Operation *> *operations;

@end


/**
 *  A response to `ListServicePerimetersRequest`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "servicePerimeters" property. If returned as the result of a
 *        query, it should support automatic pagination (when @c
 *        shouldFetchNextPages is enabled).
 */
@interface GTLRAccessContextManager_ListServicePerimetersResponse : GTLRCollectionObject

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of the Service Perimeter instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_ServicePerimeter *> *servicePerimeters;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRAccessContextManager_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAccessContextManager_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAccessContextManager_Operation_Response : GTLRObject
@end


/**
 *  A restriction on the OS type and version of devices making requests.
 */
@interface GTLRAccessContextManager_OsConstraint : GTLRObject

/**
 *  The minimum allowed OS version. If not set, any version of this OS
 *  satisfies the constraint. Format: `"major.minor.patch"`.
 *  Examples: `"10.5.301"`, `"9.2.1"`.
 */
@property(nonatomic, copy, nullable) NSString *minimumVersion;

/**
 *  Required. The allowed OS type.
 *
 *  Likely values:
 *    @arg @c kGTLRAccessContextManager_OsConstraint_OsType_DesktopChromeOs A
 *        desktop ChromeOS operating system. (Value: "DESKTOP_CHROME_OS")
 *    @arg @c kGTLRAccessContextManager_OsConstraint_OsType_DesktopLinux A
 *        desktop Linux operating system. (Value: "DESKTOP_LINUX")
 *    @arg @c kGTLRAccessContextManager_OsConstraint_OsType_DesktopMac A desktop
 *        Mac operating system. (Value: "DESKTOP_MAC")
 *    @arg @c kGTLRAccessContextManager_OsConstraint_OsType_DesktopWindows A
 *        desktop Windows operating system. (Value: "DESKTOP_WINDOWS")
 *    @arg @c kGTLRAccessContextManager_OsConstraint_OsType_OsUnspecified The
 *        operating system of the device is not specified or not known. (Value:
 *        "OS_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *osType;

/**
 *  Only allows requests from devices with a verified Chrome OS.
 *  Verifications includes requirements that the device is enterprise-managed,
 *  conformant to Dasher domain policies, and the caller has permission to call
 *  the API targeted by the request.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requireVerifiedChromeOs;

@end


/**
 *  `ServicePerimeter` describes a set of GCP resources which can freely import
 *  and export data amongst themselves, but not export outside of the
 *  `ServicePerimeter`. If a request with a source within this
 *  `ServicePerimeter`
 *  has a target outside of the `ServicePerimeter`, the request will be blocked.
 *  Otherwise the request is allowed. There are two types of Service Perimeter -
 *  Regular and Bridge. Regular Service Perimeters cannot overlap, a single GCP
 *  project can only belong to a single regular Service Perimeter. Service
 *  Perimeter Bridges can contain only GCP projects as members, a single GCP
 *  project may belong to multiple Service Perimeter Bridges.
 */
@interface GTLRAccessContextManager_ServicePerimeter : GTLRObject

/** Output only. Time the `ServicePerimeter` was created in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Description of the `ServicePerimeter` and its use. Does not affect
 *  behavior.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Required. Resource name for the ServicePerimeter. The `short_name`
 *  component must begin with a letter and only include alphanumeric and '_'.
 *  Format: `accessPolicies/{policy_id}/servicePerimeters/{short_name}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Perimeter type indicator. A single project is
 *  allowed to be a member of single regular perimeter, but multiple service
 *  perimeter bridges. A project cannot be a included in a perimeter bridge
 *  without being included in regular perimeter. For perimeter bridges,
 *  the restricted service list as well as access level lists must be
 *  empty.
 *
 *  Likely values:
 *    @arg @c kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeBridge
 *        Perimeter Bridge. (Value: "PERIMETER_TYPE_BRIDGE")
 *    @arg @c kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeRegular
 *        Regular Perimeter. (Value: "PERIMETER_TYPE_REGULAR")
 */
@property(nonatomic, copy, nullable) NSString *perimeterType;

/**
 *  Current ServicePerimeter configuration. Specifies sets of resources,
 *  restricted services and access levels that determine perimeter
 *  content and boundaries.
 */
@property(nonatomic, strong, nullable) GTLRAccessContextManager_ServicePerimeterConfig *status;

/** Human readable title. Must be unique within the Policy. */
@property(nonatomic, copy, nullable) NSString *title;

/** Output only. Time the `ServicePerimeter` was updated in UTC. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  `ServicePerimeterConfig` specifies a set of GCP resources that describe
 *  specific Service Perimeter configuration.
 */
@interface GTLRAccessContextManager_ServicePerimeterConfig : GTLRObject

/**
 *  A list of `AccessLevel` resource names that allow resources within the
 *  `ServicePerimeter` to be accessed from the internet. `AccessLevels` listed
 *  must be in the same policy as this `ServicePerimeter`. Referencing a
 *  nonexistent `AccessLevel` is a syntax error. If no `AccessLevel` names are
 *  listed, resources within the perimeter can only be accessed via GCP calls
 *  with request origins within the perimeter. Example:
 *  `"accessPolicies/MY_POLICY/accessLevels/MY_LEVEL"`.
 *  For Service Perimeter Bridge, must be empty.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *accessLevels;

/**
 *  A list of GCP resources that are inside of the service perimeter.
 *  Currently only projects are allowed. Format: `projects/{project_number}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resources;

/**
 *  GCP services that are subject to the Service Perimeter restrictions. For
 *  example, if `storage.googleapis.com` is specified, access to the storage
 *  buckets inside the perimeter must meet the perimeter's access restrictions.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *restrictedServices;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRAccessContextManager_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAccessContextManager_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRAccessContextManager_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAccessContextManager_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
