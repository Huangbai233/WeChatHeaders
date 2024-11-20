//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@protocol MinimizeBaseViewDelegate;

@interface MinimizeBaseView : UIView
{
    id <MinimizeBaseViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MinimizeBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

