//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;
@protocol WKScriptMessageHandler;

@interface YYWAWebViewScriptMessageHandler : NSObject
{
    id <WKScriptMessageHandler> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WKScriptMessageHandler> delegate; // @synthesize delegate=_delegate;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
