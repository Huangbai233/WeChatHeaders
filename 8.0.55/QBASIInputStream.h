//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSInputStream, NSString, QBASIHTTPRequest;
@protocol NSStreamDelegate;

@interface QBASIInputStream : NSObject
{
    NSInputStream *stream;
    id <NSStreamDelegate> delegate;
    CDUnknownFunctionPointerType copiedCallback;
    CDStruct_4210025a copiedContext;
    unsigned long long requestedEvents;
    QBASIHTTPRequest *request;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)inputStreamWithData:(id)arg1 request:(id)arg2;
+ (id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2;
+ (void)initialize;
@property(nonatomic) QBASIHTTPRequest *request; // @synthesize request;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (_Bool)setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

