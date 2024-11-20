//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <Foundation/NSProxy.h>

@class ILinkPusherBgmManagerAdaptor;

@interface ILinkPusherBgmManagerAdaptorProxy : NSProxy
{
    ILinkPusherBgmManagerAdaptor *_ilinkPusherBgmManagerAdaptor;
}

+ (Class)class;
- (void).cxx_destruct;
@property(retain, nonatomic) ILinkPusherBgmManagerAdaptor *ilinkPusherBgmManagerAdaptor; // @synthesize ilinkPusherBgmManagerAdaptor=_ilinkPusherBgmManagerAdaptor;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)destroy;
- (id)initWithInstance:(id)arg1;

@end
