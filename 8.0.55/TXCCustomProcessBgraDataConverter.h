//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface TXCCustomProcessBgraDataConverter : NSObject
{
    NSMutableData *_srcData;
    NSMutableData *_dstData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *dstData; // @synthesize dstData=_dstData;
@property(retain, nonatomic) NSMutableData *srcData; // @synthesize srcData=_srcData;
- (id)srcDataFromVideoFrame:(id)arg1;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
