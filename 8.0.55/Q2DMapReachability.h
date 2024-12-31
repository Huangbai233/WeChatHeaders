//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface Q2DMapReachability : NSObject
{
    _Bool reachableOnWWAN;
    struct __SCNetworkReachability *reachabilityRef;
    NSObject<OS_dispatch_queue> *reachabilitySerialQueue;
    CDUnknownBlockType reachableBlock;
    CDUnknownBlockType unreachableBlock;
    id reachabilityObject;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (id)description;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (int)currentReachabilityStatus;
- (_Bool)isInterventionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)connectionRequired;
- (_Bool)isConnectionRequired;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachable;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end
