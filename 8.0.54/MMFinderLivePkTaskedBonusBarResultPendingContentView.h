//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class MMLoadingIndicatorView, NSString, UIColor;

@interface MMFinderLivePkTaskedBonusBarResultPendingContentView : UIView
{
    UIView *_containerView;
    MMLoadingIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIColor *contentShadowColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *currentPreferredGiftId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
