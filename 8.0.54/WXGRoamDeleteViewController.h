//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMUIScrollView, NSString, SightIconView, UIButton, UIImageView, UILabel;

@interface WXGRoamDeleteViewController
{
    _Bool _bDeleteAbort;
    long long _enterScene;
    MMUIScrollView *_backgroundView;
    UIImageView *_iconView;
    SightIconView *_sightIconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_clearBtn;
    UIButton *_closeBtn;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bDeleteAbort; // @synthesize bDeleteAbort=_bDeleteAbort;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
- (void)onTapClearBtn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showClearLocalDataActionSheet;
- (void)updateLabel:(id)arg1 text:(id)arg2 lineHeight:(double)arg3;
- (void)layoutFinishedUI;
- (void)layoutClearingUI;
- (void)layoutDefaultUI;
- (void)layoutUI;
- (void)initViews;
- (void)cancel;
- (void)close;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

