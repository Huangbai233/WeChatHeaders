//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter;

@interface OpenBusinessWebViewHandler
{
    unsigned int _type;
    OpenApiParameter *_parameter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onPreEnterWechatDone;
- (id)translateToInternalWebviewUrlString;
- (void)doOpenWebview;
- (void)startHandleWithOpenParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

