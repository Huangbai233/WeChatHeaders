//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSString, SystemImagePickViewController, UIView;

@interface LiteAppAlbumView : NSObject
{
    UIView *_view;
    FlutterMethodChannel *_channel;
    SystemImagePickViewController *vc;
}

- (void).cxx_destruct;
- (void)onAlbumChange:(id)arg1;
- (void)onChangeAsset:(id)arg1;
- (void)onClickAsset:(id)arg1;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

