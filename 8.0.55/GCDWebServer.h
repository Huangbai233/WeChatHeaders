//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol GCDWebServerDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface GCDWebServer : NSObject
{
    id <GCDWebServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_group> *_sourceGroup;
    NSMutableArray *_handlers;
    long long _activeConnections;
    _Bool _connected;
    struct __CFRunLoopTimer *_disconnectTimer;
    NSDictionary *_options;
    NSString *_serverName;
    NSString *_authenticationRealm;
    NSMutableDictionary *_authenticationBasicAccounts;
    NSMutableDictionary *_authenticationDigestAccounts;
    Class _connectionClass;
    _Bool _mapHEADToGET;
    double _disconnectDelay;
    long long _dispatchQueuePriority;
    unsigned long long _port;
    NSObject<OS_dispatch_source> *_source4;
    NSObject<OS_dispatch_source> *_source6;
    struct __CFNetService *_registrationService;
    struct __CFNetService *_resolutionService;
    struct _DNSServiceRef_t *_dnsService;
    struct __CFSocket *_dnsSocket;
    struct __CFRunLoopSource *_dnsSource;
    NSString *_dnsAddress;
    unsigned long long _dnsPort;
    _Bool _bindToLocalhost;
    _Bool _suspendInBackground;
    unsigned long long _backgroundTask;
}

+ (void)initialize;
+ (void)setLogLevel:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long dispatchQueuePriority; // @synthesize dispatchQueuePriority=_dispatchQueuePriority;
@property(readonly, nonatomic) _Bool shouldAutomaticallyMapHEADToGET; // @synthesize shouldAutomaticallyMapHEADToGET=_mapHEADToGET;
@property(readonly, nonatomic) NSDictionary *authenticationDigestAccounts; // @synthesize authenticationDigestAccounts=_authenticationDigestAccounts;
@property(readonly, nonatomic) NSDictionary *authenticationBasicAccounts; // @synthesize authenticationBasicAccounts=_authenticationBasicAccounts;
@property(readonly, nonatomic) NSString *authenticationRealm; // @synthesize authenticationRealm=_authenticationRealm;
@property(readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(readonly, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) id <GCDWebServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (_Bool)startWithOptions:(id)arg1 error:(id *)arg2;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_stop;
- (_Bool)_start:(id *)arg1;
- (id)_createDispatchSourceWithListeningSocket:(int)arg1 isIPv6:(_Bool)arg2;
- (int)_createListeningSocket:(_Bool)arg1 localAddress:(const void *)arg2 length:(unsigned int)arg3 maxPendingConnections:(unsigned long long)arg4 error:(id *)arg5;
- (void)removeAllHandlers;
- (void)addHandlerWithMatchBlock:(CDUnknownBlockType)arg1 asyncProcessBlock:(CDUnknownBlockType)arg2;
- (void)addHandlerWithMatchBlock:(CDUnknownBlockType)arg1 processBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *bonjourType;
@property(readonly, nonatomic) NSString *bonjourName;
- (void)didEndConnection:(id)arg1;
- (void)_didDisconnect;
- (void)_endBackgroundTask;
- (void)willStartConnection:(id)arg1;
- (void)_didConnect;
- (void)_startBackgroundTask;
- (void)dealloc;
- (id)init;
- (_Bool)startWithPort:(unsigned long long)arg1 bonjourName:(id)arg2;
- (_Bool)start;
@property(readonly, nonatomic) NSURL *publicServerURL;
@property(readonly, nonatomic) NSURL *bonjourServerURL;
@property(readonly, nonatomic) NSURL *serverURL;
- (void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(CDUnknownBlockType)arg4;
- (void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 processBlock:(CDUnknownBlockType)arg4;
- (void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(CDUnknownBlockType)arg4;
- (void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 processBlock:(CDUnknownBlockType)arg4;
- (void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(CDUnknownBlockType)arg3;
- (void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 processBlock:(CDUnknownBlockType)arg3;
- (void)addGETHandlerForBasePath:(id)arg1 directoryPath:(id)arg2 indexFilename:(id)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(_Bool)arg5;
- (id)_responseWithContentsOfDirectory:(id)arg1;
- (void)addGETHandlerForPath:(id)arg1 filePath:(id)arg2 isAttachment:(_Bool)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(_Bool)arg5;
- (void)addGETHandlerForPath:(id)arg1 staticData:(id)arg2 contentType:(id)arg3 cacheAge:(unsigned long long)arg4;
- (void)logError:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logVerbose:(id)arg1;

@end

