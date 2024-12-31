//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveClientStatus, NSData, NSMutableArray, NSString;

@interface FinderCreateLivePrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *gestureList; // @dynamic gestureList;
@property(nonatomic) unsigned long long gestureSdkVersion; // @dynamic gestureSdkVersion;
@property(retain, nonatomic) NSData *hardwareInfo; // @dynamic hardwareInfo;
@property(retain, nonatomic) NSString *micFinderUsername; // @dynamic micFinderUsername;
@property(nonatomic) unsigned long long micLiveId; // @dynamic micLiveId;
@property(nonatomic) unsigned long long micObjectId; // @dynamic micObjectId;
@property(retain, nonatomic) NSString *micObjectNonceId; // @dynamic micObjectNonceId;
@property(nonatomic) unsigned int qrcodePosterStylesVersion; // @dynamic qrcodePosterStylesVersion;

@end
