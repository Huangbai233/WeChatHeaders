//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMBarButton
{
    unsigned long long eBarButtonStyle;
    double _extendWidth;
}

@property(nonatomic) double extendWidth; // @synthesize extendWidth=_extendWidth;
@property(nonatomic) unsigned long long eBarButtonStyle; // @synthesize eBarButtonStyle;
- (void)tintColorDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
