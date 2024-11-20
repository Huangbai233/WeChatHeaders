//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface EcsOpenServiceResponse : NSObject
{
    NSNumber *_errCode;
    NSString *_errMsg;
    FlutterStandardTypedData *_data;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithErrCode:(id)arg1 errMsg:(id)arg2 data:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSNumber *errCode; // @synthesize errCode=_errCode;
- (id)toList;

@end
