//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCDWebServer, GCDWebServerHandler, GCDWebServerRequest, GCDWebServerResponse, NSData, NSString;

@interface GCDWebServerConnection : NSObject
{
    GCDWebServer *_server;
    NSData *_localAddress;
    NSData *_remoteAddress;
    int _socket;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    _Bool _virtualHEAD;
    struct __CFHTTPMessage *_requestMessage;
    GCDWebServerRequest *_request;
    GCDWebServerHandler *_handler;
    struct __CFHTTPMessage *_responseMessage;
    GCDWebServerResponse *_response;
    long long _statusCode;
    _Bool _opened;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_bytesWritten;
@property(readonly, nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_bytesRead;
@property(readonly, nonatomic) NSData *remoteAddressData; // @synthesize remoteAddressData=_remoteAddress;
@property(readonly, nonatomic) NSData *localAddressData; // @synthesize localAddressData=_localAddress;
@property(readonly, nonatomic) GCDWebServer *server; // @synthesize server=_server;
- (void)dealloc;
@property(readonly, nonatomic) NSString *remoteAddressString;
@property(readonly, nonatomic) NSString *localAddressString;
- (id)initWithServer:(id)arg1 localAddress:(id)arg2 remoteAddress:(id)arg3 socket:(int)arg4;
- (void)_readRequestHeaders;
- (void)_readChunkedBodyWithInitialData:(id)arg1;
- (void)_readBodyWithLength:(unsigned long long)arg1 initialData:(id)arg2;
- (void)_finishProcessingRequest:(id)arg1;
- (void)_startProcessingRequest;
- (void)_initializeResponseHeadersWithStatusCode:(long long)arg1;
@property(readonly, nonatomic, getter=isUsingIPv6) _Bool usingIPv6;
- (void)_readNextBodyChunk:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_readBodyWithRemainingLength:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_readHeaders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_readData:(id)arg1 withLength:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_writeBodyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeHeadersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (void)abortRequest:(id)arg1 withStatusCode:(long long)arg2;
- (id)overrideResponse:(id)arg1 forRequest:(id)arg2;
- (void)processRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preflightRequest:(id)arg1;
- (id)rewriteRequestURL:(id)arg1 withMethod:(id)arg2 headers:(id)arg3;
- (void)didWriteBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)didReadBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)open;

@end

