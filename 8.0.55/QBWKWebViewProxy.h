//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURL, QBProtocolCallback, QBScriptMessageHandler;
@protocol WKNavigationDelegate, WKUIDelegate;

@interface QBWKWebViewProxy : NSObject
{
    QBScriptMessageHandler *_scriptMessageHandler;
    NSString *_selectedString;
    QBProtocolCallback *_callback;
    NSURL *_currentURL;
    NSURL *_currentMainURL;
    NSURL *_currentMutableMainURL;
    _Bool _isNewPageRequest;
    _Bool isULinkSwitchOn;
    _Bool _needInjectJsInNetwork;
    _Bool _isSelfProxyEnabled;
    id <WKNavigationDelegate> _navigationDelegate;
    id <WKUIDelegate> _UIDelegate;
    NSOperationQueue *_cookieQueue;
}

@property(retain, nonatomic) NSOperationQueue *cookieQueue; // @synthesize cookieQueue=_cookieQueue;
@property(nonatomic) _Bool isSelfProxyEnabled; // @synthesize isSelfProxyEnabled=_isSelfProxyEnabled;
@property(nonatomic) _Bool needInjectJsInNetwork; // @synthesize needInjectJsInNetwork=_needInjectJsInNetwork;
@property(nonatomic) __weak id <WKUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic) __weak id <WKNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (_Bool)isMainRequest:(id)arg1 navigationType:(long long)arg2;
- (void)processForXhr:(id)arg1 inWkWebView:(id)arg2 forFrameInfo:(id)arg3;
- (id)absoluteURLFromPostURLString:(id)arg1 baseURL:(id)arg2 locationString:(id)arg3 frameURL:(id)arg4;
- (void)updateLocalCK:(id)arg1 inWkWebView:(id)arg2 withURL:(id)arg3;
@property(readonly, copy, nonatomic) NSString *selectedString;
- (void)updateSelectedString:(id)arg1;
- (void)handler:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (void)webview:(id)arg1 beginReloadWithURL:(id)arg2;
- (void)webview:(id)arg1 beginLoadRequest:(id)arg2;
- (void)removeAllScriptMsgHandle:(id)arg1;
- (void)addAllScriptMsgHandle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

