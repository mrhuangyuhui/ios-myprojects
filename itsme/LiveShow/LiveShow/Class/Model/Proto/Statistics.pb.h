// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class AppActiveData;
@class AppActiveDataBuilder;
@class Device;
@class DeviceBuilder;
@class Event;
@class EventBuilder;
@class EventParameter;
@class EventParameterBuilder;
@class EventsData;
@class EventsDataBuilder;
@class Identifier;
@class IdentifierBuilder;
@class Product;
@class ProductBuilder;
@class RoomEvent;
@class RoomEventBuilder;
@class RoomEventParameter;
@class RoomEventParameterBuilder;
@class System;
@class SystemBuilder;
@class UserActionData;
@class UserActionDataBuilder;



@interface StatisticsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Identifier_idfv @"idfv"
#define Identifier_idfa @"idfa"
#define Identifier_user_id @"userId"
@interface Identifier : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasIdfv_:1;
  BOOL hasIdfa_:1;
  BOOL hasUserId_:1;
  NSString* idfv;
  NSString* idfa;
  NSString* userId;
}
- (BOOL) hasIdfv;
- (BOOL) hasIdfa;
- (BOOL) hasUserId;
@property (readonly, strong) NSString* idfv;
@property (readonly, strong) NSString* idfa;
@property (readonly, strong) NSString* userId;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IdentifierBuilder*) builder;
+ (IdentifierBuilder*) builder;
+ (IdentifierBuilder*) builderWithPrototype:(Identifier*) prototype;
- (IdentifierBuilder*) toBuilder;

+ (Identifier*) parseFromData:(NSData*) data;
+ (Identifier*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Identifier*) parseFromInputStream:(NSInputStream*) input;
+ (Identifier*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Identifier*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Identifier*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IdentifierBuilder : PBGeneratedMessageBuilder {
@private
  Identifier* resultIdentifier;
}

- (Identifier*) defaultInstance;

- (IdentifierBuilder*) clear;
- (IdentifierBuilder*) clone;

- (Identifier*) build;
- (Identifier*) buildPartial;

- (IdentifierBuilder*) mergeFrom:(Identifier*) other;
- (IdentifierBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IdentifierBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasIdfv;
- (NSString*) idfv;
- (IdentifierBuilder*) setIdfv:(NSString*) value;
- (IdentifierBuilder*) clearIdfv;

- (BOOL) hasIdfa;
- (NSString*) idfa;
- (IdentifierBuilder*) setIdfa:(NSString*) value;
- (IdentifierBuilder*) clearIdfa;

- (BOOL) hasUserId;
- (NSString*) userId;
- (IdentifierBuilder*) setUserId:(NSString*) value;
- (IdentifierBuilder*) clearUserId;
@end

#define Device_name @"name"
#define Device_model @"model"
#define Device_localizedmodel @"localizedmodel"
#define Device_orientation @"orientation"
#define Device_battery_monitoring_enabled @"batteryMonitoringEnabled"
#define Device_orientation_notifications @"orientationNotifications"
#define Device_available_battery @"availableBattery"
#define Device_battery_state @"batteryState"
#define Device_mac_address @"macAddress"
@interface Device : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasBatteryMonitoringEnabled_:1;
  BOOL hasOrientationNotifications_:1;
  BOOL hasOrientation_:1;
  BOOL hasAvailableBattery_:1;
  BOOL hasName_:1;
  BOOL hasModel_:1;
  BOOL hasLocalizedmodel_:1;
  BOOL hasBatteryState_:1;
  BOOL hasMacAddress_:1;
  BOOL batteryMonitoringEnabled_:1;
  BOOL orientationNotifications_:1;
  SInt32 orientation;
  SInt32 availableBattery;
  NSString* name;
  NSString* model;
  NSString* localizedmodel;
  NSString* batteryState;
  NSString* macAddress;
}
- (BOOL) hasName;
- (BOOL) hasModel;
- (BOOL) hasLocalizedmodel;
- (BOOL) hasOrientation;
- (BOOL) hasBatteryMonitoringEnabled;
- (BOOL) hasOrientationNotifications;
- (BOOL) hasAvailableBattery;
- (BOOL) hasBatteryState;
- (BOOL) hasMacAddress;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* model;
@property (readonly, strong) NSString* localizedmodel;
@property (readonly) SInt32 orientation;
- (BOOL) batteryMonitoringEnabled;
- (BOOL) orientationNotifications;
@property (readonly) SInt32 availableBattery;
@property (readonly, strong) NSString* batteryState;
@property (readonly, strong) NSString* macAddress;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (DeviceBuilder*) builder;
+ (DeviceBuilder*) builder;
+ (DeviceBuilder*) builderWithPrototype:(Device*) prototype;
- (DeviceBuilder*) toBuilder;

+ (Device*) parseFromData:(NSData*) data;
+ (Device*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Device*) parseFromInputStream:(NSInputStream*) input;
+ (Device*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Device*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Device*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface DeviceBuilder : PBGeneratedMessageBuilder {
@private
  Device* resultDevice;
}

- (Device*) defaultInstance;

- (DeviceBuilder*) clear;
- (DeviceBuilder*) clone;

- (Device*) build;
- (Device*) buildPartial;

- (DeviceBuilder*) mergeFrom:(Device*) other;
- (DeviceBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (DeviceBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (DeviceBuilder*) setName:(NSString*) value;
- (DeviceBuilder*) clearName;

- (BOOL) hasModel;
- (NSString*) model;
- (DeviceBuilder*) setModel:(NSString*) value;
- (DeviceBuilder*) clearModel;

- (BOOL) hasLocalizedmodel;
- (NSString*) localizedmodel;
- (DeviceBuilder*) setLocalizedmodel:(NSString*) value;
- (DeviceBuilder*) clearLocalizedmodel;

- (BOOL) hasOrientation;
- (SInt32) orientation;
- (DeviceBuilder*) setOrientation:(SInt32) value;
- (DeviceBuilder*) clearOrientation;

- (BOOL) hasBatteryMonitoringEnabled;
- (BOOL) batteryMonitoringEnabled;
- (DeviceBuilder*) setBatteryMonitoringEnabled:(BOOL) value;
- (DeviceBuilder*) clearBatteryMonitoringEnabled;

- (BOOL) hasOrientationNotifications;
- (BOOL) orientationNotifications;
- (DeviceBuilder*) setOrientationNotifications:(BOOL) value;
- (DeviceBuilder*) clearOrientationNotifications;

- (BOOL) hasAvailableBattery;
- (SInt32) availableBattery;
- (DeviceBuilder*) setAvailableBattery:(SInt32) value;
- (DeviceBuilder*) clearAvailableBattery;

- (BOOL) hasBatteryState;
- (NSString*) batteryState;
- (DeviceBuilder*) setBatteryState:(NSString*) value;
- (DeviceBuilder*) clearBatteryState;

- (BOOL) hasMacAddress;
- (NSString*) macAddress;
- (DeviceBuilder*) setMacAddress:(NSString*) value;
- (DeviceBuilder*) clearMacAddress;
@end

#define System_system_name @"systemName"
#define System_system_version @"systemVersion"
#define System_country_code @"countryCode"
#define System_network_type @"networkType"
#define System_network_information @"networkInformation"
@interface System : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasNetworkType_:1;
  BOOL hasSystemName_:1;
  BOOL hasSystemVersion_:1;
  BOOL hasCountryCode_:1;
  BOOL hasNetworkInformation_:1;
  SInt32 networkType;
  NSString* systemName;
  NSString* systemVersion;
  NSString* countryCode;
  NSString* networkInformation;
}
- (BOOL) hasSystemName;
- (BOOL) hasSystemVersion;
- (BOOL) hasCountryCode;
- (BOOL) hasNetworkType;
- (BOOL) hasNetworkInformation;
@property (readonly, strong) NSString* systemName;
@property (readonly, strong) NSString* systemVersion;
@property (readonly, strong) NSString* countryCode;
@property (readonly) SInt32 networkType;
@property (readonly, strong) NSString* networkInformation;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SystemBuilder*) builder;
+ (SystemBuilder*) builder;
+ (SystemBuilder*) builderWithPrototype:(System*) prototype;
- (SystemBuilder*) toBuilder;

+ (System*) parseFromData:(NSData*) data;
+ (System*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (System*) parseFromInputStream:(NSInputStream*) input;
+ (System*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (System*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (System*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SystemBuilder : PBGeneratedMessageBuilder {
@private
  System* resultSystem;
}

- (System*) defaultInstance;

- (SystemBuilder*) clear;
- (SystemBuilder*) clone;

- (System*) build;
- (System*) buildPartial;

- (SystemBuilder*) mergeFrom:(System*) other;
- (SystemBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SystemBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSystemName;
- (NSString*) systemName;
- (SystemBuilder*) setSystemName:(NSString*) value;
- (SystemBuilder*) clearSystemName;

- (BOOL) hasSystemVersion;
- (NSString*) systemVersion;
- (SystemBuilder*) setSystemVersion:(NSString*) value;
- (SystemBuilder*) clearSystemVersion;

- (BOOL) hasCountryCode;
- (NSString*) countryCode;
- (SystemBuilder*) setCountryCode:(NSString*) value;
- (SystemBuilder*) clearCountryCode;

- (BOOL) hasNetworkType;
- (SInt32) networkType;
- (SystemBuilder*) setNetworkType:(SInt32) value;
- (SystemBuilder*) clearNetworkType;

- (BOOL) hasNetworkInformation;
- (NSString*) networkInformation;
- (SystemBuilder*) setNetworkInformation:(NSString*) value;
- (SystemBuilder*) clearNetworkInformation;
@end

#define Product_packge_name @"packgeName"
#define Product_app_version_code @"appVersionCode"
#define Product_install_time @"installTime"
#define Product_update_time @"updateTime"
@interface Product : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasInstallTime_:1;
  BOOL hasUpdateTime_:1;
  BOOL hasAppVersionCode_:1;
  BOOL hasPackgeName_:1;
  SInt64 installTime;
  SInt64 updateTime;
  SInt32 appVersionCode;
  NSString* packgeName;
}
- (BOOL) hasPackgeName;
- (BOOL) hasAppVersionCode;
- (BOOL) hasInstallTime;
- (BOOL) hasUpdateTime;
@property (readonly, strong) NSString* packgeName;
@property (readonly) SInt32 appVersionCode;
@property (readonly) SInt64 installTime;
@property (readonly) SInt64 updateTime;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ProductBuilder*) builder;
+ (ProductBuilder*) builder;
+ (ProductBuilder*) builderWithPrototype:(Product*) prototype;
- (ProductBuilder*) toBuilder;

+ (Product*) parseFromData:(NSData*) data;
+ (Product*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Product*) parseFromInputStream:(NSInputStream*) input;
+ (Product*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Product*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Product*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ProductBuilder : PBGeneratedMessageBuilder {
@private
  Product* resultProduct;
}

- (Product*) defaultInstance;

- (ProductBuilder*) clear;
- (ProductBuilder*) clone;

- (Product*) build;
- (Product*) buildPartial;

- (ProductBuilder*) mergeFrom:(Product*) other;
- (ProductBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ProductBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPackgeName;
- (NSString*) packgeName;
- (ProductBuilder*) setPackgeName:(NSString*) value;
- (ProductBuilder*) clearPackgeName;

- (BOOL) hasAppVersionCode;
- (SInt32) appVersionCode;
- (ProductBuilder*) setAppVersionCode:(SInt32) value;
- (ProductBuilder*) clearAppVersionCode;

- (BOOL) hasInstallTime;
- (SInt64) installTime;
- (ProductBuilder*) setInstallTime:(SInt64) value;
- (ProductBuilder*) clearInstallTime;

- (BOOL) hasUpdateTime;
- (SInt64) updateTime;
- (ProductBuilder*) setUpdateTime:(SInt64) value;
- (ProductBuilder*) clearUpdateTime;
@end

#define EventParameter_key @"key"
#define EventParameter_value @"value"
@interface EventParameter : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasKey_:1;
  BOOL hasValue_:1;
  NSString* key;
  NSString* value;
}
- (BOOL) hasKey;
- (BOOL) hasValue;
@property (readonly, strong) NSString* key;
@property (readonly, strong) NSString* value;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EventParameterBuilder*) builder;
+ (EventParameterBuilder*) builder;
+ (EventParameterBuilder*) builderWithPrototype:(EventParameter*) prototype;
- (EventParameterBuilder*) toBuilder;

+ (EventParameter*) parseFromData:(NSData*) data;
+ (EventParameter*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EventParameter*) parseFromInputStream:(NSInputStream*) input;
+ (EventParameter*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EventParameter*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (EventParameter*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EventParameterBuilder : PBGeneratedMessageBuilder {
@private
  EventParameter* resultEventParameter;
}

- (EventParameter*) defaultInstance;

- (EventParameterBuilder*) clear;
- (EventParameterBuilder*) clone;

- (EventParameter*) build;
- (EventParameter*) buildPartial;

- (EventParameterBuilder*) mergeFrom:(EventParameter*) other;
- (EventParameterBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EventParameterBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasKey;
- (NSString*) key;
- (EventParameterBuilder*) setKey:(NSString*) value;
- (EventParameterBuilder*) clearKey;

- (BOOL) hasValue;
- (NSString*) value;
- (EventParameterBuilder*) setValue:(NSString*) value;
- (EventParameterBuilder*) clearValue;
@end

#define Event_session_id @"sessionId"
#define Event_id @"id"
#define Event_time @"time"
#define Event_event_parameters @"eventParameters"
@interface Event : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasSessionId_:1;
  BOOL hasTime_:1;
  BOOL hasId_:1;
  SInt64 sessionId;
  SInt64 time;
  NSString* id;
  NSMutableArray * eventParametersArray;
}
- (BOOL) hasSessionId;
- (BOOL) hasId;
- (BOOL) hasTime;
@property (readonly) SInt64 sessionId;
@property (readonly, strong) NSString* id;
@property (readonly) SInt64 time;
@property (readonly, strong) NSArray * eventParameters;
- (EventParameter*)eventParametersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EventBuilder*) builder;
+ (EventBuilder*) builder;
+ (EventBuilder*) builderWithPrototype:(Event*) prototype;
- (EventBuilder*) toBuilder;

+ (Event*) parseFromData:(NSData*) data;
+ (Event*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Event*) parseFromInputStream:(NSInputStream*) input;
+ (Event*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Event*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Event*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EventBuilder : PBGeneratedMessageBuilder {
@private
  Event* resultEvent;
}

- (Event*) defaultInstance;

- (EventBuilder*) clear;
- (EventBuilder*) clone;

- (Event*) build;
- (Event*) buildPartial;

- (EventBuilder*) mergeFrom:(Event*) other;
- (EventBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EventBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSessionId;
- (SInt64) sessionId;
- (EventBuilder*) setSessionId:(SInt64) value;
- (EventBuilder*) clearSessionId;

- (BOOL) hasId;
- (NSString*) id;
- (EventBuilder*) setId:(NSString*) value;
- (EventBuilder*) clearId;

- (BOOL) hasTime;
- (SInt64) time;
- (EventBuilder*) setTime:(SInt64) value;
- (EventBuilder*) clearTime;

- (NSMutableArray *)eventParameters;
- (EventParameter*)eventParametersAtIndex:(NSUInteger)index;
- (EventBuilder *)addEventParameters:(EventParameter*)value;
- (EventBuilder *)setEventParametersArray:(NSArray *)array;
- (EventBuilder *)clearEventParameters;
@end

#define EventsData_protocol_version @"protocolVersion"
#define EventsData_identifier @"identifier"
#define EventsData_device @"device"
#define EventsData_system @"system"
#define EventsData_product @"product"
#define EventsData_events @"events"
#define EventsData_login_timestamp @"loginTimestamp"
@interface EventsData : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLoginTimestamp_:1;
  BOOL hasProtocolVersion_:1;
  BOOL hasIdentifier_:1;
  BOOL hasDevice_:1;
  BOOL hasSystem_:1;
  BOOL hasProduct_:1;
  SInt64 loginTimestamp;
  SInt32 protocolVersion;
  Identifier* identifier;
  Device* device;
  System* system;
  Product* product;
  NSMutableArray * eventsArray;
}
- (BOOL) hasProtocolVersion;
- (BOOL) hasIdentifier;
- (BOOL) hasDevice;
- (BOOL) hasSystem;
- (BOOL) hasProduct;
- (BOOL) hasLoginTimestamp;
@property (readonly) SInt32 protocolVersion;
@property (readonly, strong) Identifier* identifier;
@property (readonly, strong) Device* device;
@property (readonly, strong) System* system;
@property (readonly, strong) Product* product;
@property (readonly, strong) NSArray * events;
@property (readonly) SInt64 loginTimestamp;
- (Event*)eventsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EventsDataBuilder*) builder;
+ (EventsDataBuilder*) builder;
+ (EventsDataBuilder*) builderWithPrototype:(EventsData*) prototype;
- (EventsDataBuilder*) toBuilder;

+ (EventsData*) parseFromData:(NSData*) data;
+ (EventsData*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EventsData*) parseFromInputStream:(NSInputStream*) input;
+ (EventsData*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (EventsData*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (EventsData*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EventsDataBuilder : PBGeneratedMessageBuilder {
@private
  EventsData* resultEventsData;
}

- (EventsData*) defaultInstance;

- (EventsDataBuilder*) clear;
- (EventsDataBuilder*) clone;

- (EventsData*) build;
- (EventsData*) buildPartial;

- (EventsDataBuilder*) mergeFrom:(EventsData*) other;
- (EventsDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EventsDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProtocolVersion;
- (SInt32) protocolVersion;
- (EventsDataBuilder*) setProtocolVersion:(SInt32) value;
- (EventsDataBuilder*) clearProtocolVersion;

- (BOOL) hasIdentifier;
- (Identifier*) identifier;
- (EventsDataBuilder*) setIdentifier:(Identifier*) value;
- (EventsDataBuilder*) setIdentifierBuilder:(IdentifierBuilder*) builderForValue;
- (EventsDataBuilder*) mergeIdentifier:(Identifier*) value;
- (EventsDataBuilder*) clearIdentifier;

- (BOOL) hasDevice;
- (Device*) device;
- (EventsDataBuilder*) setDevice:(Device*) value;
- (EventsDataBuilder*) setDeviceBuilder:(DeviceBuilder*) builderForValue;
- (EventsDataBuilder*) mergeDevice:(Device*) value;
- (EventsDataBuilder*) clearDevice;

- (BOOL) hasSystem;
- (System*) system;
- (EventsDataBuilder*) setSystem:(System*) value;
- (EventsDataBuilder*) setSystemBuilder:(SystemBuilder*) builderForValue;
- (EventsDataBuilder*) mergeSystem:(System*) value;
- (EventsDataBuilder*) clearSystem;

- (BOOL) hasProduct;
- (Product*) product;
- (EventsDataBuilder*) setProduct:(Product*) value;
- (EventsDataBuilder*) setProductBuilder:(ProductBuilder*) builderForValue;
- (EventsDataBuilder*) mergeProduct:(Product*) value;
- (EventsDataBuilder*) clearProduct;

- (NSMutableArray *)events;
- (Event*)eventsAtIndex:(NSUInteger)index;
- (EventsDataBuilder *)addEvents:(Event*)value;
- (EventsDataBuilder *)setEventsArray:(NSArray *)array;
- (EventsDataBuilder *)clearEvents;

- (BOOL) hasLoginTimestamp;
- (SInt64) loginTimestamp;
- (EventsDataBuilder*) setLoginTimestamp:(SInt64) value;
- (EventsDataBuilder*) clearLoginTimestamp;
@end

#define AppActiveData_protocol_version @"protocolVersion"
#define AppActiveData_is_initiative @"isInitiative"
#define AppActiveData_identifier @"identifier"
#define AppActiveData_device @"device"
#define AppActiveData_system @"system"
#define AppActiveData_product @"product"
#define AppActiveData_login_timestamp @"loginTimestamp"
@interface AppActiveData : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasIsInitiative_:1;
  BOOL hasLoginTimestamp_:1;
  BOOL hasProtocolVersion_:1;
  BOOL hasIdentifier_:1;
  BOOL hasDevice_:1;
  BOOL hasSystem_:1;
  BOOL hasProduct_:1;
  BOOL isInitiative_:1;
  SInt64 loginTimestamp;
  SInt32 protocolVersion;
  Identifier* identifier;
  Device* device;
  System* system;
  Product* product;
}
- (BOOL) hasProtocolVersion;
- (BOOL) hasIsInitiative;
- (BOOL) hasIdentifier;
- (BOOL) hasDevice;
- (BOOL) hasSystem;
- (BOOL) hasProduct;
- (BOOL) hasLoginTimestamp;
@property (readonly) SInt32 protocolVersion;
- (BOOL) isInitiative;
@property (readonly, strong) Identifier* identifier;
@property (readonly, strong) Device* device;
@property (readonly, strong) System* system;
@property (readonly, strong) Product* product;
@property (readonly) SInt64 loginTimestamp;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AppActiveDataBuilder*) builder;
+ (AppActiveDataBuilder*) builder;
+ (AppActiveDataBuilder*) builderWithPrototype:(AppActiveData*) prototype;
- (AppActiveDataBuilder*) toBuilder;

+ (AppActiveData*) parseFromData:(NSData*) data;
+ (AppActiveData*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppActiveData*) parseFromInputStream:(NSInputStream*) input;
+ (AppActiveData*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppActiveData*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AppActiveData*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AppActiveDataBuilder : PBGeneratedMessageBuilder {
@private
  AppActiveData* resultAppActiveData;
}

- (AppActiveData*) defaultInstance;

- (AppActiveDataBuilder*) clear;
- (AppActiveDataBuilder*) clone;

- (AppActiveData*) build;
- (AppActiveData*) buildPartial;

- (AppActiveDataBuilder*) mergeFrom:(AppActiveData*) other;
- (AppActiveDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AppActiveDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProtocolVersion;
- (SInt32) protocolVersion;
- (AppActiveDataBuilder*) setProtocolVersion:(SInt32) value;
- (AppActiveDataBuilder*) clearProtocolVersion;

- (BOOL) hasIsInitiative;
- (BOOL) isInitiative;
- (AppActiveDataBuilder*) setIsInitiative:(BOOL) value;
- (AppActiveDataBuilder*) clearIsInitiative;

- (BOOL) hasIdentifier;
- (Identifier*) identifier;
- (AppActiveDataBuilder*) setIdentifier:(Identifier*) value;
- (AppActiveDataBuilder*) setIdentifierBuilder:(IdentifierBuilder*) builderForValue;
- (AppActiveDataBuilder*) mergeIdentifier:(Identifier*) value;
- (AppActiveDataBuilder*) clearIdentifier;

- (BOOL) hasDevice;
- (Device*) device;
- (AppActiveDataBuilder*) setDevice:(Device*) value;
- (AppActiveDataBuilder*) setDeviceBuilder:(DeviceBuilder*) builderForValue;
- (AppActiveDataBuilder*) mergeDevice:(Device*) value;
- (AppActiveDataBuilder*) clearDevice;

- (BOOL) hasSystem;
- (System*) system;
- (AppActiveDataBuilder*) setSystem:(System*) value;
- (AppActiveDataBuilder*) setSystemBuilder:(SystemBuilder*) builderForValue;
- (AppActiveDataBuilder*) mergeSystem:(System*) value;
- (AppActiveDataBuilder*) clearSystem;

- (BOOL) hasProduct;
- (Product*) product;
- (AppActiveDataBuilder*) setProduct:(Product*) value;
- (AppActiveDataBuilder*) setProductBuilder:(ProductBuilder*) builderForValue;
- (AppActiveDataBuilder*) mergeProduct:(Product*) value;
- (AppActiveDataBuilder*) clearProduct;

- (BOOL) hasLoginTimestamp;
- (SInt64) loginTimestamp;
- (AppActiveDataBuilder*) setLoginTimestamp:(SInt64) value;
- (AppActiveDataBuilder*) clearLoginTimestamp;
@end

#define RoomEventParameter_key @"key"
#define RoomEventParameter_value @"value"
@interface RoomEventParameter : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasKey_:1;
  BOOL hasValue_:1;
  NSString* key;
  NSString* value;
}
- (BOOL) hasKey;
- (BOOL) hasValue;
@property (readonly, strong) NSString* key;
@property (readonly, strong) NSString* value;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RoomEventParameterBuilder*) builder;
+ (RoomEventParameterBuilder*) builder;
+ (RoomEventParameterBuilder*) builderWithPrototype:(RoomEventParameter*) prototype;
- (RoomEventParameterBuilder*) toBuilder;

+ (RoomEventParameter*) parseFromData:(NSData*) data;
+ (RoomEventParameter*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RoomEventParameter*) parseFromInputStream:(NSInputStream*) input;
+ (RoomEventParameter*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RoomEventParameter*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RoomEventParameter*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RoomEventParameterBuilder : PBGeneratedMessageBuilder {
@private
  RoomEventParameter* resultRoomEventParameter;
}

- (RoomEventParameter*) defaultInstance;

- (RoomEventParameterBuilder*) clear;
- (RoomEventParameterBuilder*) clone;

- (RoomEventParameter*) build;
- (RoomEventParameter*) buildPartial;

- (RoomEventParameterBuilder*) mergeFrom:(RoomEventParameter*) other;
- (RoomEventParameterBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RoomEventParameterBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasKey;
- (NSString*) key;
- (RoomEventParameterBuilder*) setKey:(NSString*) value;
- (RoomEventParameterBuilder*) clearKey;

- (BOOL) hasValue;
- (NSString*) value;
- (RoomEventParameterBuilder*) setValue:(NSString*) value;
- (RoomEventParameterBuilder*) clearValue;
@end

#define RoomEvent_moudle_id @"moudleId"
#define RoomEvent_position_id @"positionId"
#define RoomEvent_room_id @"roomId"
#define RoomEvent_broadcast_id @"broadcastId"
#define RoomEvent_time @"time"
#define RoomEvent_id @"id"
#define RoomEvent_roomevent_parameters @"roomeventParameters"
@interface RoomEvent : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTime_:1;
  BOOL hasMoudleId_:1;
  BOOL hasPositionId_:1;
  BOOL hasRoomId_:1;
  BOOL hasBroadcastId_:1;
  BOOL hasId_:1;
  SInt64 time;
  SInt32 moudleId;
  SInt32 positionId;
  SInt32 roomId;
  SInt32 broadcastId;
  NSString* id;
  NSMutableArray * roomeventParametersArray;
}
- (BOOL) hasMoudleId;
- (BOOL) hasPositionId;
- (BOOL) hasRoomId;
- (BOOL) hasBroadcastId;
- (BOOL) hasTime;
- (BOOL) hasId;
@property (readonly) SInt32 moudleId;
@property (readonly) SInt32 positionId;
@property (readonly) SInt32 roomId;
@property (readonly) SInt32 broadcastId;
@property (readonly) SInt64 time;
@property (readonly, strong) NSString* id;
@property (readonly, strong) NSArray * roomeventParameters;
- (RoomEventParameter*)roomeventParametersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RoomEventBuilder*) builder;
+ (RoomEventBuilder*) builder;
+ (RoomEventBuilder*) builderWithPrototype:(RoomEvent*) prototype;
- (RoomEventBuilder*) toBuilder;

+ (RoomEvent*) parseFromData:(NSData*) data;
+ (RoomEvent*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RoomEvent*) parseFromInputStream:(NSInputStream*) input;
+ (RoomEvent*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RoomEvent*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RoomEvent*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RoomEventBuilder : PBGeneratedMessageBuilder {
@private
  RoomEvent* resultRoomEvent;
}

- (RoomEvent*) defaultInstance;

- (RoomEventBuilder*) clear;
- (RoomEventBuilder*) clone;

- (RoomEvent*) build;
- (RoomEvent*) buildPartial;

- (RoomEventBuilder*) mergeFrom:(RoomEvent*) other;
- (RoomEventBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RoomEventBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMoudleId;
- (SInt32) moudleId;
- (RoomEventBuilder*) setMoudleId:(SInt32) value;
- (RoomEventBuilder*) clearMoudleId;

- (BOOL) hasPositionId;
- (SInt32) positionId;
- (RoomEventBuilder*) setPositionId:(SInt32) value;
- (RoomEventBuilder*) clearPositionId;

- (BOOL) hasRoomId;
- (SInt32) roomId;
- (RoomEventBuilder*) setRoomId:(SInt32) value;
- (RoomEventBuilder*) clearRoomId;

- (BOOL) hasBroadcastId;
- (SInt32) broadcastId;
- (RoomEventBuilder*) setBroadcastId:(SInt32) value;
- (RoomEventBuilder*) clearBroadcastId;

- (BOOL) hasTime;
- (SInt64) time;
- (RoomEventBuilder*) setTime:(SInt64) value;
- (RoomEventBuilder*) clearTime;

- (BOOL) hasId;
- (NSString*) id;
- (RoomEventBuilder*) setId:(NSString*) value;
- (RoomEventBuilder*) clearId;

- (NSMutableArray *)roomeventParameters;
- (RoomEventParameter*)roomeventParametersAtIndex:(NSUInteger)index;
- (RoomEventBuilder *)addRoomeventParameters:(RoomEventParameter*)value;
- (RoomEventBuilder *)setRoomeventParametersArray:(NSArray *)array;
- (RoomEventBuilder *)clearRoomeventParameters;
@end

#define UserActionData_protocol_version @"protocolVersion"
#define UserActionData_identifier @"identifier"
#define UserActionData_device @"device"
#define UserActionData_system @"system"
#define UserActionData_product @"product"
#define UserActionData_room_session_id @"roomSessionId"
#define UserActionData_roomevents @"roomevents"
#define UserActionData_login_timestamp @"loginTimestamp"
@interface UserActionData : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasRoomSessionId_:1;
  BOOL hasLoginTimestamp_:1;
  BOOL hasProtocolVersion_:1;
  BOOL hasIdentifier_:1;
  BOOL hasDevice_:1;
  BOOL hasSystem_:1;
  BOOL hasProduct_:1;
  SInt64 roomSessionId;
  SInt64 loginTimestamp;
  SInt32 protocolVersion;
  Identifier* identifier;
  Device* device;
  System* system;
  Product* product;
  NSMutableArray * roomeventsArray;
}
- (BOOL) hasProtocolVersion;
- (BOOL) hasIdentifier;
- (BOOL) hasDevice;
- (BOOL) hasSystem;
- (BOOL) hasProduct;
- (BOOL) hasRoomSessionId;
- (BOOL) hasLoginTimestamp;
@property (readonly) SInt32 protocolVersion;
@property (readonly, strong) Identifier* identifier;
@property (readonly, strong) Device* device;
@property (readonly, strong) System* system;
@property (readonly, strong) Product* product;
@property (readonly) SInt64 roomSessionId;
@property (readonly, strong) NSArray * roomevents;
@property (readonly) SInt64 loginTimestamp;
- (RoomEvent*)roomeventsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (UserActionDataBuilder*) builder;
+ (UserActionDataBuilder*) builder;
+ (UserActionDataBuilder*) builderWithPrototype:(UserActionData*) prototype;
- (UserActionDataBuilder*) toBuilder;

+ (UserActionData*) parseFromData:(NSData*) data;
+ (UserActionData*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (UserActionData*) parseFromInputStream:(NSInputStream*) input;
+ (UserActionData*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (UserActionData*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (UserActionData*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface UserActionDataBuilder : PBGeneratedMessageBuilder {
@private
  UserActionData* resultUserActionData;
}

- (UserActionData*) defaultInstance;

- (UserActionDataBuilder*) clear;
- (UserActionDataBuilder*) clone;

- (UserActionData*) build;
- (UserActionData*) buildPartial;

- (UserActionDataBuilder*) mergeFrom:(UserActionData*) other;
- (UserActionDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (UserActionDataBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProtocolVersion;
- (SInt32) protocolVersion;
- (UserActionDataBuilder*) setProtocolVersion:(SInt32) value;
- (UserActionDataBuilder*) clearProtocolVersion;

- (BOOL) hasIdentifier;
- (Identifier*) identifier;
- (UserActionDataBuilder*) setIdentifier:(Identifier*) value;
- (UserActionDataBuilder*) setIdentifierBuilder:(IdentifierBuilder*) builderForValue;
- (UserActionDataBuilder*) mergeIdentifier:(Identifier*) value;
- (UserActionDataBuilder*) clearIdentifier;

- (BOOL) hasDevice;
- (Device*) device;
- (UserActionDataBuilder*) setDevice:(Device*) value;
- (UserActionDataBuilder*) setDeviceBuilder:(DeviceBuilder*) builderForValue;
- (UserActionDataBuilder*) mergeDevice:(Device*) value;
- (UserActionDataBuilder*) clearDevice;

- (BOOL) hasSystem;
- (System*) system;
- (UserActionDataBuilder*) setSystem:(System*) value;
- (UserActionDataBuilder*) setSystemBuilder:(SystemBuilder*) builderForValue;
- (UserActionDataBuilder*) mergeSystem:(System*) value;
- (UserActionDataBuilder*) clearSystem;

- (BOOL) hasProduct;
- (Product*) product;
- (UserActionDataBuilder*) setProduct:(Product*) value;
- (UserActionDataBuilder*) setProductBuilder:(ProductBuilder*) builderForValue;
- (UserActionDataBuilder*) mergeProduct:(Product*) value;
- (UserActionDataBuilder*) clearProduct;

- (BOOL) hasRoomSessionId;
- (SInt64) roomSessionId;
- (UserActionDataBuilder*) setRoomSessionId:(SInt64) value;
- (UserActionDataBuilder*) clearRoomSessionId;

- (NSMutableArray *)roomevents;
- (RoomEvent*)roomeventsAtIndex:(NSUInteger)index;
- (UserActionDataBuilder *)addRoomevents:(RoomEvent*)value;
- (UserActionDataBuilder *)setRoomeventsArray:(NSArray *)array;
- (UserActionDataBuilder *)clearRoomevents;

- (BOOL) hasLoginTimestamp;
- (SInt64) loginTimestamp;
- (UserActionDataBuilder*) setLoginTimestamp:(SInt64) value;
- (UserActionDataBuilder*) clearLoginTimestamp;
@end


// @@protoc_insertion_point(global_scope)
